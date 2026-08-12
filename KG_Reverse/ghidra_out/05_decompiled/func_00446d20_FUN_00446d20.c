// Function: FUN_00446d20
// Entry:    00446d20
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00446d20(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446d20(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(code **)(param_1 + 0x278) != (code *)0x0) {
      (**(code **)(param_1 + 0x278))();
      return;
    }
    FUN_00446d50(param_1,param_2);
  }
  return;
}

