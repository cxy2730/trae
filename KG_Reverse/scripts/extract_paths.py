# Ghidra headless script: extract hardcoded path-like strings and decompile key functions.
# Run with: analyzeHeadless <project> <name> -process KG.exe -postScript extract_paths.py
# Category: Analysis
# Author: kg-assist

from ghidra.program.model.data import StringDataType
from ghidra.program.model.listing import CodeUnit
import json
import os

out_dir = "/workspace/KG_Reverse/ghidra_decompiled"
if not os.path.isdir(out_dir):
    os.makedirs(out_dir)

# ---------------------------------------------------------------
# 1) Collect defined strings & raw string scan from .rdata/.data
# ---------------------------------------------------------------
program = currentProgram
listing = program.getListing()
memory = program.getMemory()
fnmgr = program.getFunctionManager()

try:
    decomp = ghidra.app.decompiler.DecompInterface()
    decomp.openProgram(program)
except Exception:
    decomp = None

strings_found = []
suspicious = []

SUSPICIOUS_SUBSTR = [
    "\\Users\\", "\\AppData\\", "\\Program Files", "\\Temp\\",
    "\\Documents", "\\Desktop", ".dll", ".sys", ".dat", ".log",
    ".ini", ".tmp", ".exe", ".bat", ".vbs", ".ps1", ".lnk",
    "\\System32", "\\SysWOW64", "\\drivers\\", "\\config\\",
    "Software\\", "CurrentVersion", "RunOnce", "Run\\",
    "127.0.0.1", "http://", "https://", "ws://", "wss://",
    "League of Legends", "vgc.exe", "ACE", "SGuard", "SProtect",
    "kg_assist", "kg", "DLL", "SYS", "ExuiKrnln"
]

# (a) Defined strings
data_iter = listing.getDefinedData(True)
while data_iter.hasNext():
    d = data_iter.next()
    try:
        v = d.getValue()
    except Exception:
        v = None
    if v is None:
        continue
    try:
        sval = str(v)
    except Exception:
        try:
            sval = unicode(v)  # type: ignore
        except Exception:
            continue
    if not isinstance(sval, str):
        try:
            sval = sval.encode("ascii", "replace").decode("ascii")
        except Exception:
            continue
    addr = str(d.getAddress())
    sz = d.getLength()
    entry = {"addr": addr, "size": sz, "value": sval[:4096]}
    strings_found.append(entry)
    if any(sub.lower() in sval.lower() for sub in SUSPICIOUS_SUBSTR):
        suspicious.append(entry)

# (b) Raw-byte string scan of all initialized blocks
def is_printable(b):
    return 0x20 <= b < 0x7f

min_len = 6
max_len = 2048
for block in memory.getBlocks():
    if not block.isInitialized():
        continue
    if not block.isRead():
        continue
    start = block.getStart()
    size = block.getSize()
    try:
        data = memory.getBytes(start, min(size, 0x2000000))
    except Exception:
        continue
    i = 0
    n = len(data)
    while i < n:
        j = i
        while j < n and is_printable(data[j]):
            j += 1
        if j - i >= min_len and (j == n or data[j] in (0, 0x0a, 0x0d)):
            length = j - i
            if length > max_len:
                i = j + 1
                continue
            try:
                s = data[i:j].decode("ascii", errors="ignore")
            except Exception:
                i = j + 1
                continue
            addr = str(start.add(i))
            entry = {"addr": addr, "size": length, "value": s}
            strings_found.append(entry)
            if any(sub.lower() in s.lower() for sub in SUSPICIOUS_SUBSTR):
                suspicious.append(entry)
            i = j + 1
        else:
            i += 1

# Deduplicate by (addr, value)
uniq_strings = {}
for e in strings_found:
    uniq_strings[e["addr"]] = e
susp_uniq = {}
for e in suspicious:
    susp_uniq[e["addr"]] = e

# ---------------------------------------------------------------
# 2) Find heuristic targets by name
# ---------------------------------------------------------------
HEUR_KEYWORDS = [
    "check", "verify", "auth", "login", "card", "key", "license",
    "loadlibrary", "getprocaddress", "createfile", "writefile",
    "regopen", "regset", "regquery", "socket", "connect", "send",
    "recv", "http", "websocket", "mbnet", "inject", "hook",
    "anti", "debug", "vanguard", "vgc", "sprotect", "sguard",
    "kernel", "driver", "device", "iocontrol",
    "config", "path", "getmodulefilename", "getcurrentdirectory",
    "shellexecute", "winexec", "createprocess"
]

heuristic_targets = []
fn_iter = fnmgr.getFunctions(True)
for fn in fn_iter:
    nm = fn.getName()
    if not nm:
        continue
    low = nm.lower()
    if any(k in low for k in HEUR_KEYWORDS):
        heuristic_targets.append((fn.getEntryPoint(), nm))

# Cap and unique
seen = set()
filtered = []
for ep, nm in heuristic_targets:
    key = (str(ep), nm)
    if key in seen:
        continue
    seen.add(key)
    filtered.append((ep, nm))
    if len(filtered) >= 60:
        break
heuristic_targets = filtered

# ---------------------------------------------------------------
# 3) Decompile heuristic targets
# ---------------------------------------------------------------
decomp_results = []
if decomp is not None:
    for ep, nm in heuristic_targets:
        fn = fnmgr.getFunctionAt(ep)
        if fn is None:
            continue
        try:
            res = decomp.decompileFunction(fn, 60, monitor)
        except Exception:
            res = None
        if res and res.getDecompiledFunction():
            c = res.getDecompiledFunction().getC()
            decomp_results.append({
                "name": nm,
                "address": str(ep),
                "c": c
            })

# ---------------------------------------------------------------
# 4) Persist
# ---------------------------------------------------------------
with open(os.path.join(out_dir, "ghidra_strings.json"), "w") as f:
    json.dump(list(uniq_strings.values()), f, indent=2, ensure_ascii=False)
with open(os.path.join(out_dir, "ghidra_suspicious_strings.json"), "w") as f:
    json.dump(list(susp_uniq.values()), f, indent=2, ensure_ascii=False)
with open(os.path.join(out_dir, "ghidra_decompiled_funcs.json"), "w") as f:
    json.dump(decomp_results, f, indent=2, ensure_ascii=False)

with open(os.path.join(out_dir, "ghidra_paths.txt"), "w") as f:
    f.write("# Ghidra 11.4.1 - suspicious path/registry/network strings in KG.exe\n")
    f.write("# Total suspicious: {}\n".format(len(susp_uniq)))
    f.write("# Total decompiled funcs: {}\n\n".format(len(decomp_results)))
    for e in sorted(susp_uniq.values(), key=lambda x: x["addr"]):
        f.write("[{}] ({} bytes) {}\n".format(e["addr"], e["size"], e["value"]))

print("[+] Suspicious strings: {}".format(len(susp_uniq)))
print("[+] Decompiled funcs:   {}".format(len(decomp_results)))
print("[+] Output dir:         {}".format(out_dir))
