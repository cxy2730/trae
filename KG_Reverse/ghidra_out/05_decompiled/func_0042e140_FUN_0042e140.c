// Function: FUN_0042e140
// Entry:    0042e140
// Size:     464 bytes
// Conv:     unknown
// Signature: undefined FUN_0042e140(void)
// Decompiled by Ghidra 12.1.2


int * FUN_0042e140(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_48 [60];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a00c8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    *param_1 = -1;
    param_1[1] = -1;
    param_1[2] = -1;
    param_1[3] = -1;
    ExceptionList = pvStack_c;
    return param_1;
  }
  FUN_00429700();
  uStack_4 = 0;
  iVar1 = FUN_00427a00(auStack_48,param_2,param_3,0);
  if (iVar1 != 0) {
    uVar2 = FUN_004297e0();
    while ((uVar2 & 0x40000) != 0) {
      param_3 = param_3 + -1;
      FUN_00427a00(auStack_48,param_2,param_3,0);
      uVar2 = FUN_004297e0();
    }
    uVar2 = FUN_004297e0();
    while ((uVar2 & 0x80000) != 0) {
      param_2 = param_2 + -1;
      FUN_00427a00(auStack_48,param_2,param_3,0);
      uVar2 = FUN_004297e0();
    }
    uVar2 = FUN_004297e0();
    iVar1 = param_3;
    while ((uVar2 & 0x100000) != 0) {
      iVar1 = iVar1 + 1;
      FUN_00427a00(auStack_48,param_2,iVar1,0);
      uVar2 = FUN_004297e0();
    }
    uVar2 = FUN_004297e0();
    iVar3 = param_2;
    while ((uVar2 & 0x200000) != 0) {
      iVar3 = iVar3 + 1;
      FUN_00427a00(auStack_48,iVar3,iVar1,0);
      uVar2 = FUN_004297e0();
    }
    uStack_4 = 0xffffffff;
    *param_1 = param_3;
    param_1[1] = param_2;
    param_1[2] = iVar1;
    param_1[3] = iVar3;
    thunk_FUN_00429740();
    ExceptionList = pvStack_c;
    return param_1;
  }
  *param_1 = -1;
  uStack_4 = 0xffffffff;
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[3] = -1;
  thunk_FUN_00429740();
  ExceptionList = pvStack_c;
  return param_1;
}

