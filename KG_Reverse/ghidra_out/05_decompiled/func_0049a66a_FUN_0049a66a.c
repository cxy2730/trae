// Function: FUN_0049a66a
// Entry:    0049a66a
// Size:     74 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a66a(void)
// Decompiled by Ghidra 12.1.2


bool FUN_0049a66a(HWND param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  CHAR local_10 [12];
  
  if ((param_1 != (HWND)0x0) && (uVar1 = GetWindowLongA(param_1,-0x10), (uVar1 & 0xf) == param_2)) {
    GetClassNameA(param_1,local_10,10);
    iVar2 = lstrcmpiA(local_10,"combobox");
    return iVar2 == 0;
  }
  return false;
}

