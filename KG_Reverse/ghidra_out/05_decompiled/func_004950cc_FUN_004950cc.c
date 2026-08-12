// Function: FUN_004950cc
// Entry:    004950cc
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_004950cc(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004950cc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0049ccac(&LAB_0049c02d);
  iVar2 = FUN_0049c724();
  if ((*(char *)(iVar2 + 0x14) != '\0') && (*(HHOOK *)(iVar1 + 0x2c) != (HHOOK)0x0)) {
    UnhookWindowsHookEx(*(HHOOK *)(iVar1 + 0x2c));
    *(undefined4 *)(iVar1 + 0x2c) = 0;
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    return 0;
  }
  return 1;
}

