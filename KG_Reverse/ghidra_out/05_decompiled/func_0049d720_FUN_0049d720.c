// Function: FUN_0049d720
// Entry:    0049d720
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_0049d720(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049d720(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_004858b8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_02f9c4c8;
  iVar2 = DAT_03010c98;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar2 != 0) && (pcVar1 = *(code **)(iVar2 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)(extraout_ECX);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

