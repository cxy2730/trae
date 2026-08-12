// Function: FUN_00426cd0
// Entry:    00426cd0
// Size:     77 bytes
// Conv:     unknown
// Signature: undefined FUN_00426cd0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00426cd0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((*(int *)(param_1 + 4) == 0) && (*(code **)(param_1 + 0xc) != (code *)0x0)) {
    (**(code **)(param_1 + 0xc))();
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    *(int *)(param_1 + 8) = param_3;
    *(int *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_4;
    return;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

