// Function: FUN_00426d20
// Entry:    00426d20
// Size:     56 bytes
// Conv:     unknown
// Signature: undefined FUN_00426d20(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00426d20(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(code **)(param_1 + 4) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 4))();
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(param_1 + 8))(param_2);
  return uVar2;
}

