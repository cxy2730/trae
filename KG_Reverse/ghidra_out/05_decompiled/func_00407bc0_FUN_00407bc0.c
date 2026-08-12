// Function: FUN_00407bc0
// Entry:    00407bc0
// Size:     62 bytes
// Conv:     unknown
// Signature: undefined FUN_00407bc0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00407bc0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_2 + 0x30))(*(undefined4 *)(param_1 + 0x48));
  iVar1 = *param_2;
  uVar2 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x4c));
  (**(code **)(iVar1 + 0x2c))(uVar2);
  if (param_1 == -0xa8) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0xac);
}

