// Function: FUN_00430070
// Entry:    00430070
// Size:     617 bytes
// Conv:     unknown
// Signature: undefined FUN_00430070(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00430070(int param_1,undefined *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  RECT *lprcSrc;
  BOOL BVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined *puStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined **ppuStack_68;
  undefined4 uStack_64;
  tagRECT tStack_58;
  undefined1 auStack_48 [60];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a022a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  FUN_0042a650();
  iVar1 = FUN_00427c10();
  if (iVar1 != 0) {
    ExceptionList = pvStack_c;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x48) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x48);
  }
  iVar9 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x54)) {
    iVar9 = *(int *)(param_1 + 0x4c);
  }
  iVar2 = FUN_0042a7f0(iVar1);
  if (iVar2 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  iVar2 = FUN_0042a830(iVar9);
  if (iVar2 == 0) {
    ExceptionList = pvStack_c;
    return;
  }
  FUN_00429700();
  iStack_4 = 0;
  FUN_00427a00(auStack_48,iVar1,iVar9,1);
  uVar3 = FUN_004297e0();
  if ((uVar3 & 0x8000000) != 0) goto LAB_004302b0;
  FUN_0042c940(iVar1,iVar9,0,2,1);
  uStack_70 = 0;
  puStack_74 = PTR_DAT_02fd8088;
  iStack_4._0_1_ = 1;
  if (param_2 == (undefined *)0x0) {
    FUN_00429990(&puStack_74);
    param_2 = puStack_74;
  }
  else {
    uStack_70 = 1;
  }
  uVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x4c);
  uVar7 = (int)uVar3 >> 0x1f;
  uVar4 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x48);
  uVar8 = (int)uVar4 >> 0x1f;
  iVar2 = *(int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x4c) < *(int *)(param_1 + 0x54)) {
    iVar2 = *(int *)(param_1 + 0x4c);
  }
  iVar10 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) <= *(int *)(param_1 + 0x48)) {
    iVar10 = *(int *)(param_1 + 0x50);
  }
  lprcSrc = (RECT *)FUN_0042c530(&ppuStack_68,iVar10,iVar2,((uVar4 ^ uVar8) - uVar8) + 1,
                                 ((uVar3 ^ uVar7) - uVar7) + 1);
  CopyRect(&tStack_58,lprcSrc);
  BVar5 = IsRectEmpty(&tStack_58);
  if (BVar5 == 0) {
    iVar2 = FUN_00427c00();
    if (iVar2 == -0x1000000) {
      iVar2 = *(int *)(param_1 + 0x40);
    }
    uStack_64 = 0;
    ppuStack_68 = &PTR_LAB_02f9640c;
    iStack_4._0_1_ = 2;
    FUN_0042d2b0(auStack_48,&ppuStack_68,1);
    iStack_6c = FUN_00492f17(0x6c);
    iStack_4 = CONCAT31(iStack_4._1_3_,3);
    if (iStack_6c == 0) {
LAB_0043027c:
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00436e20(iVar2);
      iVar1 = FUN_00443ce0(param_1,&tStack_58,8,iVar1,iVar9,param_2,uStack_70,&ppuStack_68,uVar6,
                           iVar2);
      if (iVar1 == 0) goto LAB_0043027c;
      uVar6 = *(undefined4 *)(iVar1 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x68) = uVar6;
    ppuStack_68 = &PTR_LAB_02f96400;
    iStack_4._0_1_ = 4;
    FUN_00499e74();
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  FUN_004931d6();
LAB_004302b0:
  iStack_4 = 0xffffffff;
  thunk_FUN_00429740();
  ExceptionList = pvStack_c;
  return;
}

