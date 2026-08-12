// Function: FUN_0040a3e0
// Entry:    0040a3e0
// Size:     48 bytes
// Conv:     unknown
// Signature: undefined FUN_0040a3e0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0040a3e0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_2;
  uVar2 = FUN_00406fe0(*(undefined4 *)(param_1 + 0x48));
  (**(code **)(iVar1 + 0x2c))(uVar2);
  if (param_1 == -0x68) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x6c);
}

