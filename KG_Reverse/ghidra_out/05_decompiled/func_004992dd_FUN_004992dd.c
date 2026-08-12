// Function: FUN_004992dd
// Entry:    004992dd
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_004992dd(void)
// Decompiled by Ghidra 12.1.2


bool __thiscall FUN_004992dd(int *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    FUN_00499256(1);
    param_1[1] = param_2;
    puVar1 = (undefined4 *)FUN_00492b98(param_2);
    *puVar1 = param_1;
    (**(code **)(*param_1 + 0xc))(param_1[1]);
  }
  return param_2 != 0;
}

