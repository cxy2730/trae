// Function: FUN_0044bdb0
// Entry:    0044bdb0
// Size:     29 bytes
// Conv:     unknown
// Signature: undefined FUN_0044bdb0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044bdb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044bb60(param_1,0);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 0x2001000;
  }
  return;
}

