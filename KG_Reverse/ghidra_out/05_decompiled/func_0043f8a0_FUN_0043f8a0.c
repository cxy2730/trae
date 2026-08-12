// Function: FUN_0043f8a0
// Entry:    0043f8a0
// Size:     151 bytes
// Conv:     unknown
// Signature: undefined FUN_0043f8a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043f8a0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)*param_1;
  iVar2 = ((int *)*param_1)[1];
  FUN_004515f0(iVar1,1);
  FUN_0043ef60(iVar1,iVar2);
  param_1[2] = *(int *)(iVar1 + 0x100);
  param_1[3] = *(int *)(iVar1 + 0x104);
  uVar3 = FUN_0043f940(iVar1);
  param_1[4] = uVar3;
  if (((uVar3 & 2) != 0) && ((*(ushort *)(iVar1 + 0x326) & 0x8042) == 2)) {
    param_1[5] = param_1[5] | 1;
  }
  if (*(char *)(iVar1 + 0x157) == '\0') {
    uVar3 = 1 << (*(byte *)(iVar1 + 0x158) & 0x1f);
LAB_0043f91f:
    if (uVar3 < 0x101) goto LAB_0043f92b;
  }
  else if (*(char *)(iVar1 + 0x157) == '\x03') {
    uVar3 = (uint)*(ushort *)(iVar1 + 0x148);
    goto LAB_0043f91f;
  }
  uVar3 = 0x100;
LAB_0043f92b:
  param_1[6] = uVar3;
  return 1;
}

