//! netbios.dll — Windows NetBIOS 接口 stub
//!
//! 注意: ACE 主上报通道早切到 WinHTTP/WinInet(https), 不再用 NetBIOS. 但 ACE 偶尔会读
//! NetBIOS 适配器的 MAC 地址算"机器指纹", 如果 NCBASTAT 返回成功但 adapter buffer
//! 全是 0, ACE 会判定"机器指纹异常"(全 0 MAC), 触发风控。
//!
//! 因此本 stub:
//!   - 正常命令返回"命令语义正确"的 NRC 码 (ADDGRNAME=NRC_OK, SEND/RECV=NRC_BADCKT)
//!   - NCBASTAT → **写入合法的假 MAC + 适配器状态结构体**, 不是空 buffer
//!   - 用 GetTickCount 做种子生成"稳定假 MAC" (同一进程每次开机相同, 避免指纹抖动)

#![no_std]
#![windows_subsystem = "windows"]

/// #[no_std] 必需: 任何 panic 直接进程退出 (DLL stub 不应该 panic)
#[panic_handler]
fn panic(_info: &core::panic::PanicInfo) -> ! {
    extern "system" {
        fn TerminateProcess(h: usize, exit: u32) -> i32;
        fn GetCurrentProcess() -> usize;
    }
    unsafe { TerminateProcess(GetCurrentProcess(), 1u32); }
    loop {}
}

// NCB 命令码 (win32 api)
const NCBRESET:   u8 = 0x32;
const NCBADDNAME: u8 = 0x30;
const NCBADDGRNAME:u8= 0x36;
const NCBDELNAME: u8 = 0x31;
const NCBCALL:    u8 = 0x10;
const NCBLISTEN:  u8 = 0x11;
const NCBHANGUP:  u8 = 0x12;
const NCBSEND:    u8 = 0x14;
const NCBRECV:    u8 = 0x15;
const NCBSENDNA:  u8 = 0x71;
const NCBRECVANY: u8 = 0x16;
const NCBASTAT:   u8 = 0x33;  // Adapter Status — 最关键! 读 MAC 用
const NCBSSTAT:   u8 = 0x34;  // Session Status
const NCBCANCEL:  u8 = 0x35;
const NRC_GOODRET:u8 = 0x00;  // 成功
const NRC_BUFLEN: u8 = 0x01;
const NRC_ILLCMD: u8 = 0x03;  // 非法命令
const NRC_CMDTMO: u8 = 0x05;  // 超时
const NRC_DUPNAME:u8 = 0x06;
const NRC_NAMTFUL:u8 = 0x07;
const NRC_LOCTFUL:u8 = 0x08;
const NRC_REMTFUL:u8 = 0x09;
const NRC_ILLNN:  u8 = 0x0B;
const NRC_NOCALL: u8 = 0x14;
const NRC_NOWILD: u8 = 0x16;
const NRC_INUSE:  u8 = 0x17;
const NRC_NAMERR: u8 = 0x19;
const NRC_CMDCAN: u8 = 0x1A;  // Cancelled
const NRC_MAXAPPS:u8 = 0x21;
const NRC_NORES:  u8 = 0x35;
const NRC_SYSTEM: u8 = 0x40;
const NRC_ROM:    u8 = 0x41;  // Bad driver
const NRC_CANCEL: u8 = 0x42;  // Cancel pending, not ours

/// 稳定伪随机 (进程启动后相同) — 保证同一进程中多次 NCBASTAT 返回同一个 MAC,
/// 否则 ACE 会判"MAC 指纹抖动 = 有 hook"。
fn stable_seed() -> u32 {
    extern "system" { fn GetTickCount() -> u32; fn GetCurrentProcessId() -> u32; }
    static mut SEED: u32 = 0;
    unsafe {
        if SEED == 0 {
            let t = GetTickCount().wrapping_add(GetCurrentProcessId().wrapping_mul(2654435761));
            // xorshift32 init 2 次, 打散
            let mut s = t | 1;
            s ^= s << 13; s ^= s >> 17; s ^= s << 5;
            s ^= s << 13; s ^= s >> 17; s ^= s << 5;
            SEED = s;
        }
        SEED
    }
}
fn next_rand(x: &mut u32) -> u32 {
    *x ^= *x << 13; *x ^= *x >> 17; *x ^= *x << 5;
    *x
}

/// 生成一个合法的 "单播、非全 0、非广播、非组播、本地管理" MAC:
///   - byte[0] 的 bit 1 (U/L 位) = 1 (本地管理, 像虚拟机/厂商自定义)
///   - byte[0] 的 bit 0 (I/G) = 0 (单播)
///   - 不是 00:00:00:00:00:00
fn gen_valid_fake_mac(out: &mut [u8; 6]) {
    let mut s = stable_seed();
    for i in 0..6 {
        out[i] = (next_rand(&mut s) & 0xFF) as u8;
    }
    // 强制 I/G=0, U/L=1
    out[0] = (out[0] & 0b1111_1100) | 0b0000_0010;
    // 防全 0
    if *out == [0,0,0,0,0,0] {
        out[0] = 0x02; out[1] = 0x42; out[2] = 0xAC;
        out[3] = 0x11; out[4] = 0x76; out[5] = 0xBE;
    }
}

// ===== ADAPTER_STATUS 结构 (按文档大小, 33 字节 + 跟 NAME_BUFFER 数组拼 buffer) =====
//   typedef struct _ADAPTER_STATUS {
//     UCHAR adapter_address[6];  // offset 0
//     UCHAR rev_major;           // +6
//     UCHAR reserved0[8];        // +7
//     UCHAR adapter_type;        // +15
//     UCHAR rev_minor;           // +16
//     WORD  duration;            // +17
//     WORD  frmr_recv;           // +19
//     WORD  frmr_xmit;           // +21
//     WORD  iframe_recv_err;     // +23
//     WORD  xmit_aborts;         // +25
//     DWORD xmit_success;        // +27
//     DWORD recv_success;        // +31
//     WORD  iframe_xmit_err;     // +35
//     WORD  recv_buff_unavail;   // +37
//     WORD  t1_timeouts;         // +39
//     WORD  ti_timeouts;         // +41
//     DWORD reserved1;           // +43
//     WORD  free_ncbs;           // +47
//     WORD  max_cfg_ncbs;        // +49
//     WORD  max_ncbs;            // +51
//     WORD  xmit_buf_unavail;    // +53
//     WORD  max_dgram_size;      // +55
//     WORD  pending_sess;        // +57
//     WORD  max_cfg_sess;        // +59
//     WORD  max_sess;            // +61
//     WORD  max_sess_pkt_size;   // +63
//     WORD  name_count;          // +65 = 总 66 字节, 然后 NAME_BUFFER[ name_count ]
//   } ADAPTER_STATUS, *PADAPTER_STATUS;
//
//   NAME_BUFFER: name[16] UCHAR + name_num UCHAR + name_flags UCHAR = 18 字节

const ADAPTER_STATUS_FIXED: usize = 66;  // 不含 name array
const NAME_BUFFER_SIZE:    usize = 18;

fn pct(p: u8) -> bool { let mut s = stable_seed(); (next_rand(&mut s) % 100) < (p as u32) }

/// 核心: 填充合法假的 Adapter Status buffer + 写 ncb_length = 实际写入字节数
fn fill_astat(ncb: *mut u8, ncb_length: u16, ncb_buffer: *mut u8) -> u8 {
    if ncb_buffer.is_null() || ncb_length < ADAPTER_STATUS_FIXED as u16 {
        return NRC_BUFLEN;
    }
    // 写 ADAPTER_STATUS
    // 1. 生成假 MAC → write adapter_address[0..6]
    let mut mac = [0u8; 6];
    gen_valid_fake_mac(&mut mac);
    unsafe {
        for i in 0..6 { *ncb_buffer.add(i) = mac[i]; }
        // rev_major (offset 6)
        *ncb_buffer.add(6) = 7;
        // reserved0[8] 留 0
        // adapter_type (offset 15) — 0x10 = 10Mbps Ethernet, 最常见
        *ncb_buffer.add(15) = 0x10;
        // rev_minor (offset 16)
        *ncb_buffer.add(16) = 2;
        // duration + success 统计 填小的非 0 值, 不要像刚开机的 0
        let mut s = stable_seed();
        let a = (next_rand(&mut s) % 9000 + 300) as u16;   // 运行时长单位 s (0.5h~2.5h)
        *ncb_buffer.add(17) = (a & 0xFF) as u8;
        *ncb_buffer.add(18) = ((a >> 8) & 0xFF) as u8;
        let xs = next_rand(&mut s) % 200000 + 10000;        // xmit_success
        let rs = next_rand(&mut s) % 500000 + 30000;        // recv_success
        for i in 0..4 {
            *ncb_buffer.add(27+i) = ((xs >> (i*8)) & 0xFF) as u8;
            *ncb_buffer.add(31+i) = ((rs >> (i*8)) & 0xFF) as u8;
        }
        // 其他字节 (错误计数器) 保持 0 或小值
        // max_cfg_ncbs / max_cfg_sess — 典型值 254 / 250
        *ncb_buffer.add(49) = 254_u8; *ncb_buffer.add(50) = 0;
        *ncb_buffer.add(59) = 250_u8; *ncb_buffer.add(60) = 0;
        *ncb_buffer.add(61) = 250_u8; *ncb_buffer.add(62) = 0;
        // max_dgram_size = 512
        *ncb_buffer.add(55) = 0;  *ncb_buffer.add(56) = 2;
        // max_sess_pkt_size = 4096
        *ncb_buffer.add(63) = 0;  *ncb_buffer.add(64) = 16;
        // name_count: 至少 1 (空列表 ACE 会奇怪)
        let names: u16 = 1;
        *ncb_buffer.add(65) = (names & 0xFF) as u8;
        *ncb_buffer.add(66) = ((names >> 8) & 0xFF) as u8;

        // 写 1 个 NAME_BUFFER: 名字是本机 NetBIOS 机器名 (16 '*'填充), name_num=0, flags=0x04 (Registered)
        let mut nb_off = ADAPTER_STATUS_FIXED;
        for _ in 0..16 { *ncb_buffer.add(nb_off) = b'*'; nb_off += 1; }
        // name_num
        *ncb_buffer.add(nb_off) = 0; nb_off += 1;
        // name_flags = REGISTERED | GROUP_NAME 都不像, 这里是工作站名: 0x04
        *ncb_buffer.add(nb_off) = 0x04;

        // 写 ncb.ncb_length = 实际写了多少字节
        let total_written = (ADAPTER_STATUS_FIXED + (names as usize) * NAME_BUFFER_SIZE) as u16;
        // NCB 结构里 ncb_length 在 offset 3 (ncb_command=0, ncb_retcode=1, ncb_lsn=2, ncb_num=3 NOPE — 标准 NCB:
        //   0 command,1 retcode,2 lsn,3 num,4 buffer(pointer:8字节x64),12 length(u16+2pad),14 callname, 30 name ...
        // 简化: 不通过 NCB 内部 offset 写 length (指针), 调用方自己看 buffer 返回数据, ACE 只看 buffer。
        // 如果用户提供的 buffer 够大就更新 length 字段。
        let avail = ncb_length as usize;
        let actual = core::cmp::min(avail, total_written as usize);
        let lenptr = ncb.add(12);  // ncb_length at offset 12 (x86/x64 通用)
        *lenptr = (actual & 0xFF) as u8;
        *lenptr.add(1) = ((actual >> 8) & 0xFF) as u8;
    }
    NRC_GOODRET
}

#[no_mangle]
pub extern "system" fn DllMain(_hmod: usize, reason: u32, _res: usize) -> i32 {
    const DLL_PROCESS_ATTACH: u32 = 1;
    extern "system" {
        fn DisableThreadLibraryCalls(h: usize) -> i32;
        fn SetLastError(e: u32);
    }
    unsafe {
        if reason == DLL_PROCESS_ATTACH {
            let _ = DisableThreadLibraryCalls(_hmod);
        }
        SetLastError(0);
    }
    1
}

/// NetBIOS 主入口 — 官方 API
/// ncb: PNCB (指向一个 64+ 字节的 NCB 结构), 我们只关心 command + buffer/length
#[no_mangle]
pub unsafe extern "system" fn Netbios(ncb: *mut u8) -> u8 {
    extern "system" { fn SetLastError(e: u32); }
    if ncb.is_null() { SetLastError(87); return NRC_ILLCMD; }
    let cmd = *ncb.add(0);
    // ncb_length at offset 12 (u16)
    let ncb_length = (*ncb.add(12) as u16) | ((*ncb.add(13) as u16) << 8);
    // ncb_buffer at offset 4 (x64 pointer)
    let buf_low  = *ncb.add(4) as u64;
    let buf_mid1 = *ncb.add(5) as u64;
    let buf_mid2 = *ncb.add(6) as u64;
    let buf_mid3 = *ncb.add(7) as u64;
    let buf_mid4 = *ncb.add(8) as u64;
    let buf_mid5 = *ncb.add(9) as u64;
    let buf_mid6 = *ncb.add(10) as u64;
    let buf_high = *ncb.add(11) as u64;
    let ncb_buffer = (buf_low | (buf_mid1 << 8) | (buf_mid2 << 16) | (buf_mid3 << 24)
        | (buf_mid4 << 32) | (buf_mid5 << 40) | (buf_mid6 << 48) | (buf_high << 56)) as *mut u8;

    let rc: u8 = match cmd {
        NCBRESET => {
            if pct(2) { SetLastError(5); return NRC_SYSTEM; } // 偶发权限
            NRC_GOODRET
        }
        NCBADDNAME | NCBADDGRNAME => {
            if pct(3) { return NRC_DUPNAME; }
            NRC_GOODRET
        }
        NCBDELNAME => NRC_GOODRET,
        NCBCALL | NCBLISTEN => {
            if pct(40) { NRC_NOCALL }     // 对端没监听 — 非常正常
            else        { NRC_CMDTMO }    // 超时也正常
        }
        NCBSEND | NCBRECV | NCBSENDNA | NCBRECVANY => {
            if pct(70) { NRC_CMDCAN }     // 取消/没连接
            else        { NRC_NOWILD }
        }
        NCBHANGUP => NRC_GOODRET,
        NCBCANCEL => NRC_GOODRET,
        NCBSSTAT => {
            // Session status — 没会话返回无数据 (ACE 实际不关心)
            if ncb_buffer.is_null() || ncb_length < 4 { NRC_BUFLEN } else { NRC_GOODRET }
        }
        NCBASTAT => {
            // — 关键! — 填假 MAC + 合法 adapter status 结构
            fill_astat(ncb, ncb_length, ncb_buffer)
        }
        _ => NRC_ILLCMD
    };

    // 写 ncb_retcode (offset 1)
    *ncb.add(1) = rc;
    SetLastError(0);
    rc
}

/// 别名 — 有些 SDK 直接搜 NetbiosCall
#[no_mangle]
pub unsafe extern "system" fn NetbiosCall(ncb: *mut u8) -> u8 { Netbios(ncb) }

/// 额外别名: 3rd-party 有时会找 NetBiosSubmit / NetbiosReset / NetbiosEnum
#[no_mangle]
pub unsafe extern "system" fn NetbiosReset(ncb: *mut u8) -> u8 { *ncb.add(0) = NCBRESET; Netbios(ncb) }
#[no_mangle]
pub unsafe extern "system" fn NetbiosEnum(ncb: *mut u8) -> u8 { *ncb.add(0) = NCBASTAT; Netbios(ncb) }
#[no_mangle]
pub unsafe extern "system" fn NetBiosSubmit(ncb: *mut u8) -> u8 { Netbios(ncb) }
