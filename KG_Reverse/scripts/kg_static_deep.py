#!/usr/bin/env python3
"""
KG.exe 静态深度分析 — 替代动态调试
目标: 把 KG 过检测机制的所有硬编码地址 / 分发表 / 字符串 / IAT 精确提取出来
"""
import pefile
import capstone
import json
import os
from collections import Counter

KG_PATH = "/workspace/KG.exe"
OUT_DIR = "/workspace/KG_Reverse/static_deep"
os.makedirs(OUT_DIR, exist_ok=True)

print(f"[*] Loading {KG_PATH} ...")
pe = pefile.PE(KG_PATH, fast_load=False)
print(f"[*] Machine: 0x{pe.FILE_HEADER.Machine:04x}  "
      f"{'x86' if pe.FILE_HEADER.Machine == 0x14c else 'x64' if pe.FILE_HEADER.Machine == 0x8664 else 'unknown'}")
print(f"[*] ImageBase: 0x{pe.OPTIONAL_HEADER.ImageBase:08x}")
print(f"[*] EntryPoint: 0x{pe.OPTIONAL_HEADER.AddressOfEntryPoint:08x}")

# 1. IAT
iat_entries = []
if hasattr(pe, 'DIRECTORY_ENTRY_IMPORT'):
    for entry in pe.DIRECTORY_ENTRY_IMPORT:
        dll_name = entry.dll.decode('utf-8', 'ignore')
        for imp in entry.imports:
            if imp.name:
                iat_entries.append({"dll": dll_name, "name": imp.name.decode('utf-8', 'ignore'),
                                    "addr": imp.address, "iat_offset": imp.address - pe.OPTIONAL_HEADER.ImageBase})

with open(f"{OUT_DIR}/01_iat.json", "w") as f:
    json.dump(iat_entries, f, indent=2, ensure_ascii=False)
print(f"[*] IAT entries: {len(iat_entries)}")

# 2. 关键 API
KEY_APIS = ["IsDebuggerPresent","CheckRemoteDebuggerPresent","NtQueryInformationProcess",
            "ZwQueryInformationProcess","NtSetInformationProcess","NtClose","NtOpenProcess",
            "NtReadVirtualMemory","NtWriteVirtualMemory","NtAllocateVirtualMemory",
            "NtProtectVirtualMemory","NtFreeVirtualMemory","NtCreateThreadEx","NtUnloadDriver",
            "NtLoadDriver","NtSetInformationThread","CreateToolhelp32Snapshot","Process32FirstW",
            "Process32NextW","OpenProcess","TerminateProcess","VirtualProtect","VirtualAlloc",
            "WriteProcessMemory","ReadProcessMemory","CreateRemoteThread","LoadLibraryA","LoadLibraryW",
            "GetProcAddress","GetModuleHandleA","GetModuleHandleW","CreateFileMappingA",
            "CreateFileMappingW","MapViewOfFile","CreateMutexA","CreateMutexW","SuspendThread",
            "GetTickCount","GetTickCount64","QueryPerformanceCounter","VerQueryValueW",
            "GetFileVersionInfoW"]
key_api_map = {}
for entry in iat_entries:
    if entry["name"] in KEY_APIS:
        key_api_map.setdefault(entry["name"], []).append({
            "dll": entry["dll"], "iat_va": entry["addr"], "iat_offset": entry["iat_offset"]})

print(f"[*] Key APIs found: {len(key_api_map)}")
for name, locs in key_api_map.items():
    for loc in locs:
        print(f"    {name:35s} {loc['dll']:20s} iat=0x{loc['iat_va']:08x} off=0x{loc['iat_offset']:08x}")

with open(f"{OUT_DIR}/02_key_apis.json", "w") as f:
    json.dump(key_api_map, f, indent=2, ensure_ascii=False)

# 3. ff15 分发表扫描
text_section = next((s for s in pe.sections if s.Name.decode('utf-8','ignore').rstrip('\x00')=='.text'), pe.sections[0])
text_va = text_section.VirtualAddress
text_data = text_section.get_data()
text_size = len(text_data)
image_base = pe.OPTIONAL_HEADER.ImageBase

dispatch_calls = []
i = 0
while i < text_size - 6:
    if text_data[i] == 0xff and text_data[i+1] == 0x15:
        disp = int.from_bytes(text_data[i+2:i+6], 'little')
        dispatch_calls.append((image_base + text_va + i, disp))
        i += 6
    else:
        i += 1

disp_counter = Counter(t for _, t in dispatch_calls)
print(f"[*] ff15 total: {len(dispatch_calls)}, unique dispatches: {len(disp_counter)}")
print(f"[*] Top 15 dispatches:")
for d, c in disp_counter.most_common(15):
    print(f"    0x{d:08x}  used {c} times")

with open(f"{OUT_DIR}/03_ff15_dispatch.json", "w") as f:
    json.dump({"total_ff15": len(dispatch_calls), "unique": len(disp_counter),
               "top_50": [{"disp": hex(d), "count": c} for d, c in disp_counter.most_common(50)],
               "all_calls": [{"call_va": hex(c), "target": hex(t)} for c, t in dispatch_calls[:5000]]},
              f, indent=2)

# 4. 关键分发表解析
KNOWN = [0x4A2558, 0x4A2564, 0x4A217C, 0x4A258C, 0x4A24C8, 0x4A2338, 0x4A256C]
print(f"\n[*] === 已知关键分发表解析 ===")
known_results = []
for disp_va in KNOWN:
    rva = disp_va - image_base
    in_sec = None
    for s in pe.sections:
        if s.VirtualAddress <= rva < s.VirtualAddress + s.Misc_VirtualSize:
            in_sec = s; break
    if in_sec is None:
        print(f"  0x{disp_va:08x}  -> 不在任何 section"); continue
    sec_name = in_sec.Name.decode('utf-8','ignore').rstrip('\x00')
    sec_off = rva - in_sec.VirtualAddress
    sec_data = in_sec.get_data()
    if sec_off + 4 > len(sec_data):
        print(f"  0x{disp_va:08x}  -> 越界"); continue
    value = int.from_bytes(sec_data[sec_off:sec_off+4], 'little')
    used = disp_counter.get(disp_va, 0)
    print(f"  0x{disp_va:08x}  sec={sec_name:8s}  off=0x{sec_off:08x}  value=0x{value:08x}  used={used}")
    known_results.append({"disp_va": hex(disp_va), "section": sec_name, "offset_in_sec": hex(sec_off),
                          "value": hex(value), "used_count": used})

with open(f"{OUT_DIR}/06_known_dispatches.json", "w") as f:
    json.dump(known_results, f, indent=2)

# 5. 关键字符串
KEY_PAT = [b"ACE",b"ACE-SSC",b"SProtect",b"TerSafe",b"netbios",b"AntiCheatExpert",b"VGK",
           b"Vanguard",b"vgc.exe",b"League of Legends",b"LeagueClient",b"version.dll",
           b"SProtectSDK64.dll",b"ZwOpenProcess",b"NtOpenProcess",b"ZwUnloadDriver",
           b"NtUnloadDriver",b"IsDebuggerPresent",b"NtQueryInformationProcess",b"Global\\",
           b"\\Device\\",b"LoL",b"Garena",b"Riot",b"12345678",b"auth_token",b"card_key",
           b"register",b"valid",b"authenticate",b".sys",b".dll"]

strings_found = []
for sec in pe.sections:
    sec_name = sec.Name.decode('utf-8','ignore').rstrip('\x00')
    sec_data = sec.get_data()
    sec_va = sec.VirtualAddress
    cur = bytearray(); cur_start = 0
    for i, b in enumerate(sec_data):
        if 0x20 <= b < 0x7f:
            if not cur: cur_start = i
            cur.append(b)
        else:
            if len(cur) >= 4:
                s = bytes(cur).decode('ascii','ignore')
                for pat in KEY_PAT:
                    if pat.decode('ascii','ignore') in s:
                        strings_found.append({"section": sec_name,
                                              "va": hex(image_base + sec_va + cur_start),
                                              "string": s, "matched_pattern": pat.decode('ascii','ignore')})
                        break
            cur.clear()
    if len(cur) >= 4:
        s = bytes(cur).decode('ascii','ignore')
        for pat in KEY_PAT:
            if pat.decode('ascii','ignore') in s:
                strings_found.append({"section": sec_name, "va": hex(image_base + sec_va + cur_start),
                                      "string": s, "matched_pattern": pat.decode('ascii','ignore')})
                break

print(f"\n[*] Key strings found: {len(strings_found)}")
for s in strings_found[:80]:
    print(f"  [{s['section']:8s}] {s['va']:>12s}  ({s['matched_pattern']:18s})  {s['string'][:120]}")

with open(f"{OUT_DIR}/04_key_strings.json", "w") as f:
    json.dump(strings_found, f, indent=2, ensure_ascii=False)

# 6. 反调试指令模式
patterns = {"rdtsc":0,"cpuid":0,"sidt":0,"sgdt":0,"sldt":0,"int_2e":0,"int_3":0,"ud2":0,"hlt":0}
i = 0
while i < text_size - 2:
    b0, b1, b2 = text_data[i], text_data[i+1], text_data[i+2] if i+2 < text_size else 0
    if b0 == 0x0F and b1 == 0x31: patterns["rdtsc"] += 1; i += 2; continue
    if b0 == 0x0F and b1 == 0xA2: patterns["cpuid"] += 1; i += 2; continue
    if b0 == 0x0F and b1 == 0x01:
        mod_byte = b2
        if (mod_byte & 0x38) == 0x00: patterns["sgdt"] += 1
        elif (mod_byte & 0x38) == 0x08: patterns["sidt"] += 1
        i += 3; continue
    if b0 == 0x0F and b1 == 0x00 and (b2 & 0xC7) == 0x00: patterns["sldt"] += 1; i += 3; continue
    if b0 == 0xCD and b1 == 0x2E: patterns["int_2e"] += 1; i += 2; continue
    if b0 == 0xCC: patterns["int_3"] += 1; i += 1; continue
    if b0 == 0x0F and b1 == 0x0B: patterns["ud2"] += 1; i += 2; continue
    if b0 == 0xF4: patterns["hlt"] += 1; i += 1; continue
    i += 1

print(f"\n[*] Anti-debug patterns in .text:")
for k, v in patterns.items():
    print(f"    {k:10s}: {v}")

with open(f"{OUT_DIR}/05_antidebug_patterns.json", "w") as f:
    json.dump(patterns, f, indent=2)

print(f"\n[*] All saved to {OUT_DIR}/")
