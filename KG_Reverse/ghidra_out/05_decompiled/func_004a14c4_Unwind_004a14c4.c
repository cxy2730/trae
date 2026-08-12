// Function: Unwind@004a14c4
// Entry:    004a14c4
// Size:     23 bytes
// Conv:     unknown
// Signature: undefined Unwind@004a14c4(void)
// Decompiled by Ghidra 12.1.2


void Unwind_004a14c4(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_004931d6();
    return;
  }
  return;
}

