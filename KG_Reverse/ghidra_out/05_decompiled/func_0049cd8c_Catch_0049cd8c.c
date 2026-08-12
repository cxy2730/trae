// Function: Catch@0049cd8c
// Entry:    0049cd8c
// Size:     53 bytes
// Conv:     unknown
// Signature: undefined Catch@0049cd8c(void)
// Decompiled by Ghidra 12.1.2


void Catch_0049cd8c(void)

{
  int *extraout_ECX;
  
  FUN_0049d9fa(0x10);
  __CxxThrowException_8(0,0);
  if (*extraout_ECX != 0) {
    if ((undefined4 *)*extraout_ECX != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*extraout_ECX)(1);
    }
  }
  return;
}

