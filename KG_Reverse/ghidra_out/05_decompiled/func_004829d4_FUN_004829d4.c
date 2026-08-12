// Function: FUN_004829d4
// Entry:    004829d4
// Size:     114 bytes
// Conv:     unknown
// Signature: undefined FUN_004829d4(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004829d4(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 4) & 0x66) != 0) {
    *(undefined4 *)(param_2 + 0x24) = 1;
    return 1;
  }
  FUN_00489eb0(param_1,*(undefined4 *)(param_2 + 0xc),param_3,0,*(undefined4 *)(param_2 + 8),
               *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),1);
  if (*(int *)(param_2 + 0x24) == 0) {
    FUN_00482820(param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00482a3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_2 + 0x18))();
  return uVar1;
}

