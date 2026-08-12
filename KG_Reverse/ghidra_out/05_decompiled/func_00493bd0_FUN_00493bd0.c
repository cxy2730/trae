// Function: FUN_00493bd0
// Entry:    00493bd0
// Size:     45 bytes
// Conv:     unknown
// Signature: undefined FUN_00493bd0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00493bd0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x28))(0,1);
  uVar2 = (**(code **)(*param_1 + 0x28))(0,2);
  (**(code **)(*param_1 + 0x28))(uVar1,0);
  return uVar2;
}

