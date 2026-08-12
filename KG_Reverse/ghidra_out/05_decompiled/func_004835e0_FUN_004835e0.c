// Function: FUN_004835e0
// Entry:    004835e0
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_004835e0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Unable to track spacebase fully for stack */

void FUN_004835e0(void)

{
  uint in_EAX;
  undefined1 *puVar1;
  undefined4 unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(undefined4 *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}

