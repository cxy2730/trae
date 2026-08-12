// Function: FUN_004929c3
// Entry:    004929c3
// Size:     25 bytes
// Conv:     unknown
// Signature: undefined FUN_004929c3(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004929c3(int param_1,undefined4 *param_2)

{
  int *piVar1;
  
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  piVar1 = (int *)(param_1 + 0xc);
  *piVar1 = *piVar1 + -1;
  *(undefined4 **)(param_1 + 0x10) = param_2;
  if (*piVar1 == 0) {
    RemoveAll();
  }
  return;
}

