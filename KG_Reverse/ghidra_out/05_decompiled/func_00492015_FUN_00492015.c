// Function: FUN_00492015
// Entry:    00492015
// Size:     71 bytes
// Conv:     unknown
// Signature: undefined FUN_00492015(void)
// Decompiled by Ghidra 12.1.2


void FUN_00492015(void)

{
  CWnd *this;
  int unaff_EBP;
  
  FUN_004858b8();
  *(CWnd **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_02f9c69c;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_004953fe();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00492d76();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

