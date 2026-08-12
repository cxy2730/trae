// Function: FUN_0049935b
// Entry:    0049935b
// Size:     54 bytes
// Conv:     unknown
// Signature: undefined FUN_0049935b(void)
// Decompiled by Ghidra 12.1.2


void FUN_0049935b(void)

{
  HDC__ *hdc;
  CDC *this;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CDC **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_02f9adc8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(this + 4) != 0) {
    hdc = CDC::Detach(this);
    DeleteDC(hdc);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

