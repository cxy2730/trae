// Function: FUN_0046b790
// Entry:    0046b790
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b790(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046b790(int param_1)

{
  if (*(int **)(param_1 + 0x234) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x234) + 4))();
    if (*(undefined4 **)(param_1 + 0x234) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x234))(1);
    }
    *(undefined4 *)(param_1 + 0x234) = 0;
  }
  FUN_0046b770(3);
  return;
}

