// Function: FUN_00442a30
// Entry:    00442a30
// Size:     462 bytes
// Conv:     unknown
// Signature: undefined FUN_00442a30(void)
// Decompiled by Ghidra 12.1.2


void FUN_00442a30(HDC param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
                 int *param_7,int *param_8,int *param_9)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  
  iVar3 = GetDeviceCaps(param_1,0x58);
  iVar4 = GetDeviceCaps(param_1,0x5a);
  dVar1 = (double)iVar3;
  iVar3 = GetDeviceCaps(param_1,0x6e);
  dVar2 = (double)iVar4;
  iVar4 = GetDeviceCaps(param_1,0x6f);
  iVar5 = GetDeviceCaps(param_1,0x70);
  iVar6 = GetDeviceCaps(param_1,0x71);
  iVar7 = GetDeviceCaps(param_1,8);
  iVar8 = GetDeviceCaps(param_1,10);
  fVar10 = (float10)FUN_00442870((double)iVar3 / dVar1,3,5);
  iVar9 = FUN_00442810((double)fVar10);
  *param_2 = iVar9;
  fVar10 = (float10)FUN_00442870((double)iVar4 / dVar2,3,5);
  iVar9 = FUN_00442810((double)fVar10);
  *param_3 = iVar9;
  fVar10 = (float10)FUN_00442870((double)iVar5 / dVar1,3,5);
  iVar9 = FUN_00442840((double)fVar10);
  *param_6 = iVar9;
  fVar10 = (float10)FUN_00442870((double)iVar6 / dVar2,3,5);
  iVar9 = FUN_00442840((double)fVar10);
  *param_7 = iVar9;
  fVar10 = (float10)FUN_00442870(((double)iVar3 / dVar1 - (double)iVar7 / dVar1) -
                                 (double)iVar5 / dVar1,3,5);
  iVar3 = FUN_00442840((double)fVar10);
  *param_8 = iVar3;
  fVar10 = (float10)FUN_00442870(((double)iVar4 / dVar2 - (double)iVar8 / dVar2) -
                                 (double)iVar6 / dVar2,3,5);
  iVar3 = FUN_00442840((double)fVar10);
  *param_9 = iVar3;
  *param_4 = (*param_2 - *param_6) - *param_8;
  *param_5 = (*param_3 - *param_7) - *param_9;
  return;
}

