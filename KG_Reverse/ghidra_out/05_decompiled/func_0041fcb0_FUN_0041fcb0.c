// Function: FUN_0041fcb0
// Entry:    0041fcb0
// Size:     101 bytes
// Conv:     unknown
// Signature: undefined FUN_0041fcb0(void)
// Decompiled by Ghidra 12.1.2


HMENU FUN_0041fcb0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5
                  ,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HMENU pHVar4;
  LPACCEL paccel;
  HACCEL pHVar5;
  WORD *pWVar6;
  int iVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined **appuStack_20 [4];
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar11 = param_5;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049f248;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_5 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_5 = 0;
  }
  if (param_3 == -1) {
    DAT_02fe8830 = 20000;
    FUN_004062a0();
    appuStack_20[0] = &PTR_FUN_02f95fa8;
    pppuVar8 = (undefined ***)0x0;
    uStack_4 = 0;
    if (puVar11 != (undefined4 *)0x0) {
      pppuVar8 = appuStack_20;
    }
    pHVar4 = CreateMenu();
    uVar3 = param_6;
    uVar2 = param_4;
    iVar7 = param_2;
    if (pHVar4 != (HMENU)0x0) {
      while (param_3 = iVar7, 0 < param_3) {
        FUN_0041fe80(pHVar4,&param_1,&param_3,uVar2,pppuVar8,uVar3);
        puVar11 = param_5;
        iVar7 = param_3;
      }
    }
    if ((puVar11 != (undefined4 *)0x0) && (uVar12 = uStack_10 >> 3, uVar12 != 0)) {
      paccel = (LPACCEL)FUN_00492f17(uVar12 * 6);
      if (pppuVar8[4] == (undefined **)0x0) {
        ppuVar9 = (undefined **)0x0;
      }
      else {
        ppuVar9 = pppuVar8[2];
      }
      iVar7 = 0;
      if (uVar12 != 0) {
        pWVar6 = &paccel->key;
        do {
          ppuVar10 = ppuVar9 + 1;
          pWVar6[1] = *(WORD *)ppuVar9;
          ppuVar9 = ppuVar9 + 2;
          iVar1 = (int)*ppuVar10 * 4;
          ((tagACCEL *)(pWVar6 + -1))->fVirt = (&DAT_02fafe04)[(int)*ppuVar10 * 4] | 3;
          *pWVar6 = *(WORD *)(&DAT_02fafe06 + iVar1);
          if (*(short *)(&DAT_02fafe06 + iVar1) != 0) {
            iVar7 = iVar7 + 1;
            pWVar6 = pWVar6 + 3;
          }
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
        if (0 < iVar7) {
          pHVar5 = CreateAcceleratorTableA(paccel,iVar7);
          *param_5 = pHVar5;
        }
      }
      FUN_00492f40(paccel);
    }
    uStack_4 = 0xffffffff;
    appuStack_20[0] = &PTR_FUN_02f95fa4;
    FUN_004064a0();
    ExceptionList = local_c;
    return pHVar4;
  }
  DAT_02fe8830 = param_3;
  pHVar4 = (HMENU)FUN_0041fe80(0,&param_1,&param_2,param_4,0,param_6);
  ExceptionList = local_c;
  return pHVar4;
}

