// Function: FUN_0040ada0
// Entry:    0040ada0
// Size:     110 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ada0(void)
// Decompiled by Ghidra 12.1.2


LSTATUS FUN_0040ada0(HKEY param_1,LPCSTR param_2,LPSTR param_3)

{
  LSTATUS LVar1;
  HKEY local_10c;
  LONG local_108;
  CHAR local_104 [260];
  
  LVar1 = RegOpenKeyExA(param_1,param_2,0,1,&local_10c);
  if (LVar1 == 0) {
    local_108 = 0x104;
    RegQueryValueA(local_10c,(LPCSTR)0x0,local_104,&local_108);
    lstrcpyA(param_3,local_104);
    RegCloseKey(local_10c);
  }
  return LVar1;
}

