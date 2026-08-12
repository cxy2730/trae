// Function: FUN_00436e30
// Entry:    00436e30
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_00436e30(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00436e30(int param_1,int param_2)

{
  if (*(int *)(param_1 + 4) != param_2) {
    if (*(int *)(param_1 + 4) != 0) {
      FUN_004276e0(param_1);
    }
    *(int *)(param_1 + 4) = param_2;
    if (param_2 != 0) {
      FUN_00427590(param_1);
    }
  }
  return;
}

