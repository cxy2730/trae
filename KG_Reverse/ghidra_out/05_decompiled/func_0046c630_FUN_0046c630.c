// Function: FUN_0046c630
// Entry:    0046c630
// Size:     400 bytes
// Conv:     unknown
// Signature: undefined FUN_0046c630(void)
// Decompiled by Ghidra 12.1.2


int __thiscall
FUN_0046c630(int param_1,float *param_2,float *param_3,uint *param_4,int *param_5,
            undefined4 *param_6)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *param_3 = 0.0;
  *param_2 = 0.0;
  *param_6 = 0;
  *param_5 = 0;
  *param_4 = 0;
  if ((*(int *)(param_1 + 0x2c) == 0) && (*(int *)(param_1 + 0xa4) == 0)) {
    return 0xf;
  }
  if ((*(int *)(param_1 + 0x38) < 0) && (iVar2 = FUN_0046c0e0(), iVar2 != 0)) {
    return iVar2;
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))((undefined4 *)(param_1 + 0x44));
    if (iVar2 == 0x14) {
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
  }
  else {
    FUN_00484e21(*(int *)(param_1 + 0xa4),0,2);
    uVar3 = FUN_00484c9e(*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0x44) = uVar3;
    FUN_00484e21(*(undefined4 *)(param_1 + 0xa4),0,0);
  }
  iVar2 = *(int *)(&DAT_02fd26d8 + (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x4c) * 4) * 4);
  *param_5 = iVar2;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    *param_5 = iVar2 / 2;
  }
  *param_6 = *(undefined4 *)(&DAT_02fd26f8 + *(int *)(param_1 + 0x50) * 4);
  if (*(int *)(param_1 + 0x4c) == 1) {
    fVar1 = 1.152e+06;
  }
  else {
    fVar1 = 576000.0;
  }
  *param_3 = fVar1 / (float)*param_5;
  if (*(uint *)(param_1 + 0x44) == 0) {
    *param_4 = 0xffffffff;
    *param_2 = -1.0;
    return 0;
  }
  if (*(int *)(param_1 + 0xa0) == 0) {
    uVar4 = *(uint *)(param_1 + 0x44) / *(uint *)(param_1 + 0x38);
    *param_4 = uVar4;
    *param_2 = *param_3 * (float)(int)uVar4 * 0.001 - 1.0;
    return 0;
  }
  uVar4 = *(uint *)(*(int *)(param_1 + 0xa0) + 0xc);
  *param_4 = uVar4;
  *param_2 = *param_3 * (float)(int)uVar4 * 0.001;
  return 0;
}

