// Function: FUN_0040aa20
// Entry:    0040aa20
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_0040aa20(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0040aa20(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_2 + 0x30))(*(undefined4 *)(param_1 + 0x7c));
  iVar1 = *param_2;
  uVar2 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x80));
  (**(code **)(iVar1 + 0x2c))(uVar2);
  if (param_1 == -0xa0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0xa4);
}

