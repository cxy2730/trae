// Function: FUN_00457e10
// Entry:    00457e10
// Size:     229 bytes
// Conv:     unknown
// Signature: undefined FUN_00457e10(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00457e10(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (param_3 < param_5) {
    iVar1 = FUN_00457d20(param_1,param_2,param_3,param_5);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    param_2 = *(int *)(param_1 + 0xc);
    param_3 = *(int *)(param_1 + 0x10);
  }
  param_3 = param_3 - param_5;
  piVar3 = (int *)(param_4 + 0x44 + param_5 * 4);
  uVar2 = param_2 >> ((byte)param_3 & 0x1f) & (1 << ((byte)param_5 & 0x1f)) - 1U;
  if (*piVar3 < (int)uVar2) {
    do {
      if (param_3 < 1) {
        iVar1 = FUN_00457d20(param_1,param_2,param_3,1);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        param_2 = *(int *)(param_1 + 0xc);
        param_3 = *(int *)(param_1 + 0x10);
      }
      param_3 = param_3 + -1;
      piVar3 = piVar3 + 1;
      uVar2 = uVar2 << 1 | param_2 >> ((byte)param_3 & 0x1f) & 1U;
      param_5 = param_5 + 1;
    } while (*piVar3 < (int)uVar2);
  }
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0xc) = param_2;
  if (0x10 < param_5) {
    (**(code **)(**(int **)(param_1 + 0x14) + 4))(*(int **)(param_1 + 0x14),0xffffffff);
    return 0;
  }
  return (uint)*(byte *)((*(int *)(param_4 + 0x8c + param_5 * 4) - *(int *)(param_4 + param_5 * 4))
                         + *(int *)(param_4 + 0xd0) + 0x11 + uVar2);
}

