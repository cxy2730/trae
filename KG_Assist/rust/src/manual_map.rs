//! PE 手动映射
//!
//! 对应 KG.exe 的 manual mapping 路径:
//!   1. 读取 DLL 文件到本地缓冲
//!   2. 解析 PE 头, 计算 SizeOfImage
//!   3. 远程分配内存 (NtAllocateVirtualMemory)
//!   4. 本地副本: 复制 PE 头 + 映射节区 + 处理重定位 + 解析导入表
//!   5. NtWriteVirtualMemory 写入远程
//!   6. NtCreateThreadEx 调用 DllMain (入口点)
//!
//! 优势: 不走 LoadLibrary, 不在 PEB Ldr 链表中留痕,
//!      ACE 的 LdrEnumerateLoadedModules 扫描不到。

use crate::native_api::*;
use crate::ffi::{LogCallback, log, log_warn, log_error, log_debug};
use windows_sys::Win32::{
    Foundation::{HANDLE, HMODULE, CloseHandle, INVALID_HANDLE_VALUE},
    System::LibraryLoader::{GetProcAddress, LoadLibraryA},
    Storage::FileSystem::{
        CreateFileA, GetFileSize,
        FILE_SHARE_READ, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL,
    },
};

const GENERIC_READ: u32 = 0x80000000;

// ReadFile 在 windows-sys 0.52 中位置不稳定, 直接 extern 声明
extern "system" {
    fn ReadFile(
        h: HANDLE,
        buf: *mut core::ffi::c_void,
        size: u32,
        read: *mut u32,
        overlapped: *mut core::ffi::c_void,
    ) -> i32;
}

// ---- PE 结构定义 ----

const IMAGE_DOS_SIGNATURE:    u16 = 0x5A4D;   // "MZ"
const IMAGE_NT_SIGNATURE:     u32 = 0x00004550; // "PE\0\0"
const IMAGE_DIRECTORY_ENTRY_BASERELOC: usize = 5;
const IMAGE_DIRECTORY_ENTRY_IMPORT:    usize = 1;

const IMAGE_REL_BASED_ABSOLUTE: u16 = 0;
const IMAGE_REL_BASED_HIGHLOW:  u16 = 3;
const IMAGE_REL_BASED_DIR64:    u16 = 10;

const IMAGE_SNAP_BY_ORDINAL: u32 = 0x80000000;

#[repr(C)]
#[derive(Clone, Copy)]
struct ImageDosHeader {
    e_magic:    u16,
    // 简化: 只用到 e_lfanew (在偏移 0x3C)
    _pad:       [u8; 58],
    e_lfanew:   i32,
}

const DOS_HEADER_SIZE: usize = 64;

/// 读取 DLL 文件到 Vec<u8>
pub fn read_dll_file(path: &str) -> Option<Vec<u8>> {
    unsafe {
        let path_bytes = match to_cstr(path) {
            Some(b) => b,
            None => return None,
        };

        let h = CreateFileA(
            path_bytes.as_ptr(),
            GENERIC_READ,
            FILE_SHARE_READ,
            core::ptr::null(),
            OPEN_EXISTING,
            FILE_ATTRIBUTE_NORMAL,
            0,
        );

        if h == INVALID_HANDLE_VALUE {
            return None;
        }

        let size = GetFileSize(h, core::ptr::null_mut());
        if size == 0 || size > 64 * 1024 * 1024 {
            CloseHandle(h);
            return None;
        }

        let mut buf = vec![0u8; size as usize];
        let mut read: u32 = 0;
        let ok = ReadFile(
            h,
            buf.as_mut_ptr() as *mut _,
            size,
            &mut read,
            core::ptr::null_mut(),
        );
        CloseHandle(h);

        if ok == 0 || read != size {
            return None;
        }
        Some(buf)
    }
}

/// 解析 PE 头, 返回 (SizeOfImage, AddressOfEntryPoint, ImageBase, e_lfanew)
pub fn parse_pe_header(data: &[u8]) -> Option<(u32, u32, u32, usize)> {
    if data.len() < DOS_HEADER_SIZE {
        return None;
    }

    // DOS header
    let e_magic = u16::from_le_bytes([data[0], data[1]]);
    if e_magic != IMAGE_DOS_SIGNATURE {
        return None;
    }
    let e_lfanew = i32::from_le_bytes([
        data[0x3C], data[0x3D], data[0x3E], data[0x3F],
    ]) as usize;

    if e_lfanew + 248 > data.len() {
        return None;
    }

    // PE signature
    let sig = u32::from_le_bytes([
        data[e_lfanew], data[e_lfanew + 1],
        data[e_lfanew + 2], data[e_lfanew + 3],
    ]);
    if sig != IMAGE_NT_SIGNATURE {
        return None;
    }

    // OptionalHeader 在 e_lfanew + 24
    // AddressOfEntryPoint at +24+16
    // ImageBase at +24+28 (PE32) or +24+24 (PE32+)
    let oh_off = e_lfanew + 24;
    let magic = u16::from_le_bytes([data[oh_off], data[oh_off + 1]]);

    let (image_base, entry_point, size_of_image) = if magic == 0x10B {
        // PE32
        let entry = u32::from_le_bytes([
            data[oh_off + 16], data[oh_off + 17],
            data[oh_off + 18], data[oh_off + 19],
        ]);
        let base = u32::from_le_bytes([
            data[oh_off + 28], data[oh_off + 29],
            data[oh_off + 30], data[oh_off + 31],
        ]);
        let size = u32::from_le_bytes([
            data[oh_off + 56], data[oh_off + 57],
            data[oh_off + 58], data[oh_off + 59],
        ]);
        (base, entry, size)
    } else {
        // PE32+ (64位)
        let entry = u32::from_le_bytes([
            data[oh_off + 16], data[oh_off + 17],
            data[oh_off + 18], data[oh_off + 19],
        ]);
        let base = u32::from_le_bytes([
            data[oh_off + 24], data[oh_off + 25],
            data[oh_off + 26], data[oh_off + 27],
        ]);
        let size = u32::from_le_bytes([
            data[oh_off + 56], data[oh_off + 57],
            data[oh_off + 58], data[oh_off + 59],
        ]);
        (base, entry, size)
    };

    Some((size_of_image, entry_point, image_base, e_lfanew))
}

/// 获取节区表起始位置和数量
/// 返回 (节区表偏移, 节区数量, OptionalHeader 大小)
fn get_section_info(data: &[u8], e_lfanew: usize) -> Option<(usize, u16, u16)> {
    if e_lfanew + 24 > data.len() {
        return None;
    }
    let num_sections = u16::from_le_bytes([
        data[e_lfanew + 6], data[e_lfanew + 7],
    ]);
    let opt_header_size = u16::from_le_bytes([
        data[e_lfanew + 20], data[e_lfanew + 21],
    ]);
    let section_off = e_lfanew + 24 + opt_header_size as usize;
    Some((section_off, num_sections, opt_header_size))
}

/// 复制 PE 头 + 映射节区到目标缓冲
pub fn map_sections(file_data: &[u8], target: &mut [u8]) -> bool {
    let (_, _, _, e_lfanew) = match parse_pe_header(file_data) {
        Some(info) => info,
        None => return false,
    };

    let (sec_off, num_sec, opt_size) = match get_section_info(file_data, e_lfanew) {
        Some(info) => info,
        None => return false,
    };

    // 复制 PE 头
    let headers_size = e_lfanew + 24 + opt_size as usize + (num_sec as usize * 40);
    let headers_size = headers_size.min(file_data.len()).min(target.len());
    target[..headers_size].copy_from_slice(&file_data[..headers_size]);

    // 映射每个节区
    for i in 0..num_sec as usize {
        let sec = sec_off + i * 40;
        if sec + 40 > file_data.len() {
            break;
        }

        let virtual_addr = u32::from_le_bytes([
            file_data[sec + 12], file_data[sec + 13],
            file_data[sec + 14], file_data[sec + 15],
        ]) as usize;
        let virtual_size = u32::from_le_bytes([
            file_data[sec + 8], file_data[sec + 9],
            file_data[sec + 10], file_data[sec + 11],
        ]) as usize;
        let raw_size = u32::from_le_bytes([
            file_data[sec + 16], file_data[sec + 17],
            file_data[sec + 18], file_data[sec + 19],
        ]) as usize;
        let raw_offset = u32::from_le_bytes([
            file_data[sec + 20], file_data[sec + 21],
            file_data[sec + 22], file_data[sec + 23],
        ]) as usize;

        if raw_size == 0 || raw_offset + raw_size > file_data.len() {
            continue;
        }
        if virtual_addr + raw_size > target.len() {
            continue;
        }

        target[virtual_addr..virtual_addr + raw_size]
            .copy_from_slice(&file_data[raw_offset..raw_offset + raw_size]);

        // 节区剩余部分清零 (BSS)
        if virtual_size > raw_size {
            let zero_end = (virtual_addr + virtual_size).min(target.len());
            for b in &mut target[virtual_addr + raw_size..zero_end] {
                *b = 0;
            }
        }
    }

    true
}

/// 应用重定位表 (在本地副本上)
pub fn apply_relocations(local: &mut [u8], delta: i64) -> bool {
    if delta == 0 {
        return true;
    }

    let (_, _, _, e_lfanew) = match parse_pe_header(local) {
        Some(info) => info,
        None => return false,
    };

    // DataDirectory[5] = BaseReloc, 位于 OptionalHeader + (PE32:96, PE32+:112)
    let oh_off = e_lfanew + 24;
    let magic = u16::from_le_bytes([local[oh_off], local[oh_off + 1]]);
    let dd_off = if magic == 0x10B {
        oh_off + 96
    } else {
        oh_off + 112
    };

    if dd_off + 8 > local.len() {
        return false;
    }

    let reloc_rva = u32::from_le_bytes([
        local[dd_off], local[dd_off + 1],
        local[dd_off + 2], local[dd_off + 3],
    ]) as usize;
    let reloc_size = u32::from_le_bytes([
        local[dd_off + 4], local[dd_off + 5],
        local[dd_off + 6], local[dd_off + 7],
    ]) as usize;

    if reloc_rva == 0 || reloc_size == 0 {
        return true;
    }
    if reloc_rva + reloc_size > local.len() {
        return false;
    }

    let mut offset = reloc_rva;
    let end = reloc_rva + reloc_size;

    while offset + 8 <= end {
        let virtual_addr = u32::from_le_bytes([
            local[offset], local[offset + 1],
            local[offset + 2], local[offset + 3],
        ]) as usize;
        let block_size = u32::from_le_bytes([
            local[offset + 4], local[offset + 5],
            local[offset + 6], local[offset + 7],
        ]) as usize;

        if block_size < 8 || virtual_addr == 0 {
            break;
        }

        let count = (block_size - 8) / 2;
        for i in 0..count {
            let entry_off = offset + 8 + i * 2;
            if entry_off + 2 > local.len() {
                break;
            }
            let entry = u16::from_le_bytes([local[entry_off], local[entry_off + 1]]);
            let type_ = entry >> 12;
            let patch_off = (entry & 0x0FFF) as usize;
            let target = virtual_addr + patch_off;

            if target + 4 > local.len() {
                continue;
            }

            match type_ {
                IMAGE_REL_BASED_ABSOLUTE => {}
                IMAGE_REL_BASED_HIGHLOW => {
                    let val = u32::from_le_bytes([
                        local[target], local[target + 1],
                        local[target + 2], local[target + 3],
                    ]);
                    let new_val = val.wrapping_add(delta as u32);
                    local[target..target + 4].copy_from_slice(&new_val.to_le_bytes());
                }
                IMAGE_REL_BASED_DIR64 => {
                    if target + 8 > local.len() {
                        continue;
                    }
                    let val = u64::from_le_bytes([
                        local[target], local[target + 1], local[target + 2], local[target + 3],
                        local[target + 4], local[target + 5], local[target + 6], local[target + 7],
                    ]);
                    let new_val = val.wrapping_add(delta as u64);
                    local[target..target + 8].copy_from_slice(&new_val.to_le_bytes());
                }
                _ => {}
            }
        }

        offset += block_size;
    }

    true
}

/// 解析导入表 (填入本进程函数地址 — 假设系统 DLL 在所有进程中基址共享)
pub fn resolve_imports(local: &mut [u8]) -> bool {
    let (_, _, _, e_lfanew) = match parse_pe_header(local) {
        Some(info) => info,
        None => return false,
    };

    let oh_off = e_lfanew + 24;
    let magic = u16::from_le_bytes([local[oh_off], local[oh_off + 1]]);
    let dd_off = if magic == 0x10B {
        oh_off + 96
    } else {
        oh_off + 112
    };

    if dd_off + 8 > local.len() {
        return false;
    }

    let import_rva = u32::from_le_bytes([
        local[dd_off], local[dd_off + 1],
        local[dd_off + 2], local[dd_off + 3],
    ]) as usize;

    if import_rva == 0 {
        return true;
    }

    // 遍历 IMPORT_DESCRIPTOR (20 字节每条)
    let mut off = import_rva;
    while off + 20 <= local.len() {
        let original_first_thunk = u32::from_le_bytes([
            local[off], local[off + 1], local[off + 2], local[off + 3],
        ]);
        let name_rva = u32::from_le_bytes([
            local[off + 12], local[off + 13], local[off + 14], local[off + 15],
        ]);
        let first_thunk = u32::from_le_bytes([
            local[off + 16], local[off + 17], local[off + 18], local[off + 19],
        ]);

        if name_rva == 0 && first_thunk == 0 {
            break;
        }

        // 读取 DLL 名
        let name_off = name_rva as usize;
        if name_off >= local.len() {
            off += 20;
            continue;
        }
        let dll_name = read_cstr_at(local, name_off);
        if dll_name.is_empty() {
            off += 20;
            continue;
        }

        let dll_cstr = match to_cstr(&dll_name) {
            Some(b) => b,
            None => {
                off += 20;
                continue;
            }
        };

        unsafe {
            let h_dll = LoadLibraryA(dll_cstr.as_ptr());
            if h_dll == 0 {
                off += 20;
                continue;
            }

            // 用 OriginalFirstThunk, 退回 FirstThunk
            let thunk_rva = if original_first_thunk != 0 {
                original_first_thunk
            } else {
                first_thunk
            } as usize;

            let mut thunk_off = thunk_rva;
            let mut ft_off = first_thunk as usize;
            let thunk_size = if magic == 0x10B { 4 } else { 8 };

            while thunk_off + thunk_size <= local.len() && ft_off + thunk_size <= local.len() {
                let thunk_val = if magic == 0x10B {
                    u32::from_le_bytes([
                        local[thunk_off], local[thunk_off + 1],
                        local[thunk_off + 2], local[thunk_off + 3],
                    ]) as u64
                } else {
                    u64::from_le_bytes([
                        local[thunk_off], local[thunk_off + 1], local[thunk_off + 2], local[thunk_off + 3],
                        local[thunk_off + 4], local[thunk_off + 5], local[thunk_off + 6], local[thunk_off + 7],
                    ])
                };

                if thunk_val == 0 {
                    break;
                }

                let func_addr: usize = if thunk_val & (IMAGE_SNAP_BY_ORDINAL as u64) != 0 {
                    let ordinal = (thunk_val & 0xFFFF) as usize;
                    let proc_addr = GetProcAddress(h_dll as HMODULE, ordinal as *const u8);
                    proc_addr.map(|p| p as usize).unwrap_or(0)
                } else {
                    // 按名字: thunk_val 是 IMPORT_BY_NAME 的 RVA
                    let hint_off = thunk_val as usize;
                    if hint_off + 2 >= local.len() {
                        0
                    } else {
                        let func_name = read_cstr_at(local, hint_off + 2);
                        if func_name.is_empty() {
                            0
                        } else {
                            let name_cstr = match to_cstr(&func_name) {
                                Some(b) => b,
                                None => 0u8.to_string().into_bytes(), // 不可达
                            };
                            let proc_addr = GetProcAddress(h_dll as HMODULE, name_cstr.as_ptr());
                            proc_addr.map(|p| p as usize).unwrap_or(0)
                        }
                    }
                };

                // 写入 FirstThunk
                if func_addr != 0 {
                    if magic == 0x10B {
                        let addr_bytes = (func_addr as u32).to_le_bytes();
                        local[ft_off..ft_off + 4].copy_from_slice(&addr_bytes);
                    } else {
                        let addr_bytes = (func_addr as u64).to_le_bytes();
                        local[ft_off..ft_off + 8].copy_from_slice(&addr_bytes);
                    }
                }

                thunk_off += thunk_size;
                ft_off += thunk_size;
            }
        }

        off += 20;
    }

    true
}

fn read_cstr_at(data: &[u8], offset: usize) -> String {
    let mut end = offset;
    while end < data.len() && data[end] != 0 {
        end += 1;
    }
    String::from_utf8_lossy(&data[offset..end]).into_owned()
}

fn to_cstr(s: &str) -> Option<Vec<u8>> {
    if s.contains('\0') {
        return None;
    }
    let mut v = Vec::with_capacity(s.len() + 1);
    v.extend_from_slice(s.as_bytes());
    v.push(0);
    Some(v)
}

/// 完整手动映射流程
pub fn manual_map(h_process: HANDLE, dll_path: &str, cb: LogCallback) -> bool {
    log(cb, &format!("[手动映射] 开始: {}", dll_path));

    // 1. 读文件
    let file_data = match read_dll_file(dll_path) {
        Some(d) => d,
        None => {
            log_error(cb, "[手动映射] 无法读取 DLL 文件");
            return false;
        }
    };

    // 2. 解析 PE 头
    let (size_of_image, entry_rva, image_base, _) = match parse_pe_header(&file_data) {
        Some(info) => info,
        None => {
            log_error(cb, "[手动映射] 无效 PE 头");
            return false;
        }
    };

    log_debug(cb, &format!("[手动映射] SizeOfImage=0x{:X} ImageBase=0x{:X} Entry=0x{:X}",
        size_of_image, image_base, entry_rva));

    // 3. 远程分配
    let remote_base = remote_alloc(h_process, size_of_image as usize);
    if remote_base.is_null() {
        log_error(cb, "[手动映射] 远程内存分配失败");
        return false;
    }

    let remote_base_addr = remote_base as usize;
    log_debug(cb, &format!("[手动映射] 远程基址: 0x{:X}", remote_base_addr));

    // 4. 本地副本 fixup
    let mut local = vec![0u8; size_of_image as usize];

    if !map_sections(&file_data, &mut local) {
        log_error(cb, "[手动映射] 节区映射失败");
        remote_free(h_process, remote_base);
        return false;
    }

    let delta = remote_base_addr as i64 - image_base as i64;
    if !apply_relocations(&mut local, delta) {
        log_warn(cb, "[手动映射] 重定位应用异常");
    }

    if !resolve_imports(&mut local) {
        log_warn(cb, "[手动映射] 导入表解析异常");
    }

    // 5. 写入远程
    if !remote_write(h_process, remote_base, &local) {
        log_error(cb, "[手动映射] 写入远程失败");
        remote_free(h_process, remote_base);
        return false;
    }

    // 6. 调用 DllMain (NtCreateThreadEx)
    let entry_addr = remote_base_addr + entry_rva as usize;
    log_debug(cb, &format!("[手动映射] 调用 DllMain @ 0x{:X}", entry_addr));

    let dt = crate::native_api::table();
    if let Some(nt_create) = dt.nt_create_thread_ex {
        let mut h_thread: HANDLE = 0;
        let status = unsafe {
            nt_create(
                &mut h_thread,
                0x1F0F0FFF,                // THREAD_ALL_ACCESS
                core::ptr::null(),
                h_process,
                entry_addr as *const _,
                remote_base,               // DllMain(hModule, DLL_PROCESS_ATTACH, NULL)
                0, 0, 0, 0,
                core::ptr::null(),
            )
        };

        if status == STATUS_SUCCESS && h_thread != 0 {
            // 等待 DllMain 完成 (5秒)
            unsafe {
                let _ = WaitForSingleObjectLite(h_thread, 5000);
                CloseHandle(h_thread);
            }
            log(cb, "[手动映射] DllMain 已执行, 注入成功");
            return true;
        } else {
            log_warn(cb, &format!("[手动映射] NtCreateThreadEx 失败 status=0x{:08X}", status as u32));
        }
    } else {
        log_warn(cb, "[手动映射] NtCreateThreadEx 不可用");
    }

    // 远程内存保留 (DllMain 可能未执行, 但镜像已映射)
    log_warn(cb, "[手动映射] 镜像已写入但 DllMain 调用失败");
    false
}

// 内部: 等待对象 (避免再 import WaitForSingleObject)
unsafe fn WaitForSingleObjectLite(h: HANDLE, ms: u32) -> u32 {
    extern "system" {
        fn WaitForSingleObject(h: HANDLE, ms: u32) -> u32;
    }
    WaitForSingleObject(h, ms)
}
