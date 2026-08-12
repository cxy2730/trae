// Function: FUN_00497a7a
// Entry:    00497a7a
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00497a7a(void)
// Decompiled by Ghidra 12.1.2


void FUN_00497a7a(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x1c))(extraout_ECX);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

