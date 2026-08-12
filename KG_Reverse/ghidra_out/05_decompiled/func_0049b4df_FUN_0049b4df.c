// Function: FUN_0049b4df
// Entry:    0049b4df
// Size:     37 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b4df(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0049b4df(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xa0))(0x199,param_2,0);
  if ((puVar1 == (undefined4 *)0xffffffff) || (puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}

