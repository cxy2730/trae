// Function: FUN_0049a0a5
// Entry:    0049a0a5
// Size:     220 bytes
// Conv:     unknown
// Signature: undefined FUN_0049a0a5(void)
// Decompiled by Ghidra 12.1.2


undefined4 * FUN_0049a0a5(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int iVar4;
  int unaff_EBP;
  
  FUN_004858b8();
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar2 = *piVar1;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  (**(code **)(iVar2 + 0x18))(extraout_ECX + 4);
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  extraout_ECX[3] = 0xffffffff;
  extraout_ECX[5] = uVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[8] = piVar1;
  extraout_ECX[0xe] = 0;
  extraout_ECX[0xd] = 0;
  *extraout_ECX = 0;
  extraout_ECX[1] = 1;
  if ((~(byte)uVar3 & 1) == 0) {
    extraout_ECX[0xf] = 0x40;
  }
  else {
    extraout_ECX[0xf] = 0x10;
  }
  uVar3 = *(undefined4 *)(unaff_EBP + 0x14);
  extraout_ECX[6] = 1;
  extraout_ECX[0xb] = uVar3;
  iVar2 = *(int *)(unaff_EBP + 0x10);
  extraout_ECX[0x10] = 0x89;
  extraout_ECX[2] = 0;
  if (iVar2 < 0x80) {
    extraout_ECX[7] = 0x80;
    extraout_ECX[0xb] = 0;
  }
  else {
    extraout_ECX[7] = iVar2;
  }
  iVar2 = extraout_ECX[0xb];
  *(undefined4 *)(unaff_EBP + 0x10) = extraout_ECX[7];
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*piVar1 + 0x50))(3,0,0,0);
    extraout_ECX[2] = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_00492f17(extraout_ECX[7]);
      extraout_ECX[0xb] = uVar3;
      extraout_ECX[6] = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
    }
  }
  iVar4 = *(int *)(unaff_EBP + 0x10) + extraout_ECX[0xb];
  extraout_ECX[10] = iVar4;
  iVar2 = extraout_ECX[0xb];
  if ((*(byte *)(extraout_ECX + 5) & 1) != 0) {
    iVar2 = iVar4;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[9] = iVar2;
  return extraout_ECX;
}

