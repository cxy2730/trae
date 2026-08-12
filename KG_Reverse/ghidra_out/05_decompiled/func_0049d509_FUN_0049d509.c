// Function: FUN_0049d509
// Entry:    0049d509
// Size:     99 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d509(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0049d509(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  UINT UVar1;
  int iVar2;
  
  UVar1 = SetErrorMode(0);
  SetErrorMode(UVar1 | 0x8001);
  iVar2 = FUN_0049c724();
  *(undefined4 *)(iVar2 + 8) = param_1;
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  iVar2 = FUN_0049c724();
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x68) = param_1;
    *(undefined4 *)(iVar2 + 0x6c) = param_2;
    *(undefined4 *)(iVar2 + 0x70) = param_3;
    *(undefined4 *)(iVar2 + 0x74) = param_4;
    FUN_0049d56c();
  }
  iVar2 = FUN_0049c724();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    FUN_00497f2c();
  }
  return 1;
}

