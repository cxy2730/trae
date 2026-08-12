// Function: FUN_0045e500
// Entry:    0045e500
// Size:     111 bytes
// Conv:     unknown
// Signature: undefined FUN_0045e500(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045e500(int param_1)

{
  int iVar1;
  
  FUN_0045e570(param_1,param_1 + 0x8c,*(undefined4 *)(param_1 + 0xb14));
  FUN_0045e570(param_1,param_1 + 0x980,*(undefined4 *)(param_1 + 0xb20));
  FUN_0045df30(param_1,param_1 + 0xb28);
  iVar1 = 0x12;
  do {
    if (*(short *)(param_1 + 0xa76 + (uint)(byte)(&DAT_02f994cc)[iVar1] * 4) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  *(int *)(param_1 + 0x16a0) = *(int *)(param_1 + 0x16a0) + iVar1 * 3 + 0x11;
  return;
}

