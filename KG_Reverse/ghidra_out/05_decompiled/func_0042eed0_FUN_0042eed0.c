// Function: FUN_0042eed0
// Entry:    0042eed0
// Size:     811 bytes
// Conv:     unknown
// Signature: undefined FUN_0042eed0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042eed0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iStack_54;
  int iStack_50;
  int aiStack_4c [2];
  int iStack_44;
  int iStack_40;
  int iStack_38;
  int iStack_34;
  tagRECT tStack_30;
  undefined1 auStack_20 [20];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a0130;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0042a600(0);
  aiStack_4c[0] = FUN_0042a650();
  if (aiStack_4c[0] != 0) {
    FUN_00499b75(0);
    uStack_4 = 0;
    FUN_00442c00(auStack_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
    FUN_0042a070(auStack_20);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    iStack_38 = 0;
    iStack_34 = 0;
    iVar2 = FUN_0049633f(0);
    if (param_2 != -1) {
      FUN_0049639a(0,&iStack_50,&iStack_54);
      iVar4 = iStack_54;
      if (param_2 <= iStack_54) {
        iVar4 = param_2;
      }
      iVar6 = iStack_50;
      if ((iStack_50 <= iVar4) && (iVar6 = param_2, iStack_54 < param_2)) {
        iVar6 = iStack_54;
      }
      if (iVar6 != iVar2) {
        if (param_4 != 0) {
          iStack_44 = FUN_004279f0();
          iVar2 = iStack_44 + iVar2;
          iStack_44 = iStack_44 + iVar6;
          param_2 = iVar2;
          if (iVar2 <= iStack_44) {
            param_2 = iStack_44;
          }
          iVar4 = iVar2;
          if (iStack_44 <= iVar2) {
            iVar4 = iStack_44;
          }
          for (; iVar4 < param_2; iVar4 = iVar4 + 1) {
            uVar3 = FUN_0042a180(iVar4);
            iStack_38 = FUN_0042a340(iStack_38,uVar3);
          }
          if (iVar2 < iStack_44) {
            iStack_38 = -iStack_38;
          }
        }
        FUN_0049630f(0,iVar6,1);
      }
    }
    iVar2 = FUN_0049633f(1);
    if (param_3 != -1) {
      FUN_0049639a(1,&iStack_50,&iStack_54);
      iVar4 = iStack_54;
      if (param_3 <= iStack_54) {
        iVar4 = param_3;
      }
      iVar6 = iStack_50;
      if ((iStack_50 <= iVar4) && (iVar6 = param_3, iStack_54 < param_3)) {
        iVar6 = iStack_54;
      }
      if (iVar6 != iVar2) {
        if (param_4 != 0) {
          iVar4 = FUN_004279e0();
          iVar2 = iVar4 + iVar2;
          iVar4 = iVar4 + iVar6;
          param_2 = iVar2;
          if (iVar2 <= iVar4) {
            param_2 = iVar4;
          }
          iVar1 = iVar2;
          if (iVar4 <= iVar2) {
            iVar1 = iVar4;
          }
          for (; iVar1 < param_2; iVar1 = iVar1 + 1) {
            uVar3 = FUN_0042a0a0(iVar1);
            iStack_34 = FUN_0042a470(iStack_34,uVar3);
          }
          if (iVar2 < iVar4) {
            iStack_34 = -iStack_34;
          }
        }
        FUN_0049630f(1,iVar6,1);
      }
    }
    if ((param_4 != 0) && ((iStack_38 != 0 || (iStack_34 != 0)))) {
      FUN_00499aa3(&iStack_38);
      piVar5 = (int *)FUN_0042c1c0(aiStack_4c);
      iStack_44 = *piVar5;
      iStack_40 = piVar5[1];
      FUN_00499aa3(&iStack_44);
      GetClientRect(*(HWND *)(param_1 + 0x1c),&tStack_30);
      if (iStack_38 != 0) {
        tStack_30.left = tStack_30.left + iStack_44;
        if (iStack_44 != 0) {
          tStack_30.left = tStack_30.left + 1;
        }
        FUN_00497396(iStack_38,0,&tStack_30,&tStack_30,0,0,2);
      }
      if (iStack_34 != 0) {
        tStack_30.top = tStack_30.top + iStack_40;
        if (iStack_40 != 0) {
          tStack_30.top = tStack_30.top + 1;
        }
        FUN_00497396(0,iStack_34,&tStack_30,&tStack_30,0,0,2);
      }
      if (param_4 == 2) {
        UpdateWindow(*(HWND *)(param_1 + 0x1c));
      }
    }
    FUN_0042a090();
    uStack_4 = 0xffffffff;
    FID_conflict__CClientDC();
  }
  ExceptionList = pvStack_c;
  return;
}

