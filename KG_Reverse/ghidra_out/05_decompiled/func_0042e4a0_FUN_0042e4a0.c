// Function: FUN_0042e4a0
// Entry:    0042e4a0
// Size:     463 bytes
// Conv:     unknown
// Signature: undefined FUN_0042e4a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0042e4a0(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  tagPOINT tStack_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  HDC pHStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_004a00f0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_0042a650();
  if (iVar1 != 0) {
    iVar1 = FUN_00427920();
    iVar2 = FUN_00427960();
    if ((iVar1 != 0) && (iVar2 != 0)) {
      iVar3 = FUN_0049633f(1);
      iVar4 = FUN_004279e0();
      iVar3 = iVar3 + iVar4;
      iVar5 = FUN_0049633f(0);
      iVar6 = FUN_004279f0();
      iVar4 = 0;
      iVar5 = iVar5 + iVar6;
      FUN_00499b75(0);
      uStack_4 = 0;
      FUN_00442c00(auStack_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
      FUN_0042a070(auStack_20);
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      tStack_30.x = *param_2;
      tStack_30.y = param_2[1];
      DPtoLP(pHStack_18,&tStack_30,1);
      piVar7 = (int *)FUN_0042c1c0(auStack_28);
      tStack_30.x = tStack_30.x - *piVar7;
      tStack_30.y = tStack_30.y - piVar7[1];
      if ((-1 < tStack_30.x) && (-1 < tStack_30.y)) {
        for (; iVar3 < iVar1; iVar3 = iVar3 + 1) {
          uVar8 = FUN_0042a0a0(iVar3);
          iVar6 = FUN_0042a470(iVar4,uVar8);
          if ((iVar4 <= tStack_30.y) && (tStack_30.y < iVar6)) {
            if (iVar3 < iVar1) {
              *param_3 = iVar3;
              iVar1 = 0;
              for (; iVar5 < iVar2; iVar5 = iVar5 + 1) {
                uVar8 = FUN_0042a180(iVar5);
                iVar3 = FUN_0042a340(iVar1,uVar8);
                if ((iVar1 <= tStack_30.x) && (tStack_30.x < iVar3)) {
                  *param_4 = iVar5;
                  FUN_0042a090();
                  uStack_4 = 0xffffffff;
                  FID_conflict__CClientDC();
                  ExceptionList = pvStack_c;
                  return 1;
                }
                iVar1 = iVar3;
              }
            }
            break;
          }
          iVar4 = iVar6;
        }
      }
      FUN_0042a090();
      uStack_4 = 0xffffffff;
      FID_conflict__CClientDC();
    }
  }
  ExceptionList = pvStack_c;
  return 0;
}

