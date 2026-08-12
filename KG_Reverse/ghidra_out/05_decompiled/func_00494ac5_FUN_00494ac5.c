// Function: FUN_00494ac5
// Entry:    00494ac5
// Size:     31 bytes
// Conv:     unknown
// Signature: undefined FUN_00494ac5(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00494ac5(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  puVar3 = (undefined4 *)(unaff_EBP + -0x40);
  puVar4 = (undefined4 *)(unaff_EBX + 0x34);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}

