// Function: FUN_0040bbb0
// Entry:    0040bbb0
// Size:     62 bytes
// Conv:     unknown
// Signature: undefined FUN_0040bbb0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0040bbb0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_2 + 0x30))(*(undefined4 *)(param_1 + 0x5c));
  iVar1 = *param_2;
  uVar2 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x60));
  (**(code **)(iVar1 + 0x2c))(uVar2);
  if (param_1 == -0xb8) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0xbc);
}

