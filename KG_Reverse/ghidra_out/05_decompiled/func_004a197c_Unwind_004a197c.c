// Function: Unwind@004a197c
// Entry:    004a197c
// Size:     23 bytes
// Conv:     unknown
// Signature: undefined Unwind@004a197c(void)
// Decompiled by Ghidra 12.1.2


void Unwind_004a197c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_004931d6();
    return;
  }
  return;
}

