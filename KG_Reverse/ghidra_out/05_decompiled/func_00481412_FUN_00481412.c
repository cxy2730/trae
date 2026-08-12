// Function: FUN_00481412
// Entry:    00481412
// Size:     106 bytes
// Conv:     unknown
// Signature: undefined FUN_00481412(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00481412(undefined8 *param_1,undefined2 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 local_28 [2];
  undefined2 local_24;
  undefined2 local_20;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  short local_10;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 1) == 0) {
    iVar1 = FUN_0048111d(*param_1,local_28);
    if (iVar1 != 0) {
      *param_2 = local_14;
      param_2[1] = local_18;
      param_2[7] = 0;
      param_2[2] = local_10 + -1;
      param_2[3] = local_1c;
      param_2[4] = local_20;
      param_2[5] = local_24;
      param_2[6] = local_28[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}

