// Function: FUN_0049789b
// Entry:    0049789b
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_0049789b(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049789b(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00481913();
  *(undefined4 *)(param_1 + 0x84) = 0;
  PostMessageA((HWND)piVar1[7],0x36a,0,0);
  (**(code **)(*piVar1 + 0x6c))(param_2,param_3);
  return;
}

