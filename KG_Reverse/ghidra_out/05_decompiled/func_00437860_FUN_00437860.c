// Function: FUN_00437860
// Entry:    00437860
// Size:     47 bytes
// Conv:     unknown
// Signature: undefined FUN_00437860(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00437860(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbc) == 5) {
    *(undefined4 *)(param_1 + 0xbc) = 1;
    iVar1 = *(int *)(param_1 + 0xbc);
    while (iVar1 != 2) {
      iVar1 = *(int *)(param_1 + 0xbc);
    }
  }
  return;
}

