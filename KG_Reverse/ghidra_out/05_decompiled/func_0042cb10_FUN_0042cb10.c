// Function: FUN_0042cb10
// Entry:    0042cb10
// Size:     499 bytes
// Conv:     unknown
// Signature: undefined FUN_0042cb10(void)
// Decompiled by Ghidra 12.1.2


int * __thiscall FUN_0042cb10(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_48 [8];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  tagRECT tStack_30;
  undefined1 auStack_20 [8];
  HDC pHStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049ffc0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0042a650();
  if (iVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar2 = FUN_004279f0();
  iVar2 = iVar2 + param_3;
  iStack_40 = iVar2;
  iStack_3c = FUN_004279e0();
  iStack_3c = iStack_3c + param_4;
  piVar3 = (int *)FUN_0042c1c0(auStack_48);
  iVar1 = *piVar3;
  iVar7 = piVar3[1];
  GetClientRect(*(HWND *)(param_1 + 0x1c),&tStack_30);
  FUN_00499b75(0);
  uStack_4 = 0;
  FUN_00442c00(auStack_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
  FUN_0042a070(auStack_20);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  DPtoLP(pHStack_18,(LPPOINT)&tStack_30,2);
  iVar4 = FUN_00427960();
  if (iVar2 < iVar4) {
    do {
      uVar5 = FUN_0042a180(iVar2);
      iVar1 = FUN_0042a340(iVar1,uVar5);
      if (tStack_30.right < iVar1) {
        iVar6 = iVar2;
        if (iVar4 <= iVar2) goto LAB_0042cc34;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar4;
    } while (iVar2 < iVar4);
  }
  else {
LAB_0042cc34:
    iVar6 = iVar4;
  }
  if (iVar6 + -1 < iStack_40) {
    iStack_38 = iStack_40;
  }
  else {
    if (iVar4 <= iVar2) {
      iVar2 = iVar4;
    }
    iStack_38 = iVar2 + -1;
  }
  iVar2 = FUN_00427920();
  iVar1 = iStack_3c;
  do {
    iVar4 = iVar2;
    if (iVar2 <= iVar1) {
LAB_0042cca7:
      iVar7 = iStack_3c;
      if (iStack_3c <= iVar4 + -1) {
        if (iVar2 <= iVar1) {
          iVar1 = iVar2;
        }
        iVar7 = iVar1 + -1;
      }
      *param_2 = iStack_40;
      param_2[1] = iStack_3c;
      param_2[2] = iStack_38;
      param_2[3] = iVar7;
      FUN_0042a090();
      uStack_4 = 0xffffffff;
      FID_conflict__CClientDC();
      ExceptionList = pvStack_c;
      return param_2;
    }
    uVar5 = FUN_0042a0a0(iVar1);
    iVar7 = FUN_0042a470(iVar7,uVar5);
    if (tStack_30.bottom < iVar7) {
      if (iVar1 < iVar2) {
        iVar4 = iVar1;
      }
      goto LAB_0042cca7;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

