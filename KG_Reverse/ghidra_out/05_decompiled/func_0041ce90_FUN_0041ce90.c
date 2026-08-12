// Function: FUN_0041ce90
// Entry:    0041ce90
// Size:     82 bytes
// Conv:     unknown
// Signature: undefined FUN_0041ce90(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041ce90(HMODULE param_1)

{
  int iVar1;
  CHAR local_104 [260];
  
  local_104[0] = '\0';
  GetModuleFileNameA(param_1,local_104,0x104);
  iVar1 = FUN_00483fd4(local_104,0x5c);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 1) = 0;
  }
  FUN_00493313(local_104);
  return;
}

