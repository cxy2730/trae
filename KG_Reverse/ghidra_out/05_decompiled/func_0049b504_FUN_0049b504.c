// Function: FUN_0049b504
// Entry:    0049b504
// Size:     39 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b504(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0049b504(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xa0))(0x199,param_2,0);
  if ((iVar1 == -1) || (iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

