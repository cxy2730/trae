// Function: FUN_004126d0
// Entry:    004126d0
// Size:     893 bytes
// Conv:     unknown
// Signature: undefined FUN_004126d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004126d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  HWND pHVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  HGLOBAL hMem;
  HWND pHVar11;
  SIZE_T SVar12;
  LPVOID pvVar13;
  BOOL BVar14;
  uint uVar15;
  WPARAM wParam;
  undefined4 uVar16;
  HWND local_5c;
  undefined4 uStack_54;
  code *pcStack_44;
  tagRECT tStack_30;
  undefined **ppuStack_20;
  int iStack_18;
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049e818;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = (undefined4 *)FUN_0040e730(param_4,0);
  FUN_0040e780(param_4);
  iVar4 = FUN_00413290(*puVar3,0);
  uVar1 = *(uint *)(iVar4 + 0x14);
  if ((uVar1 & 0x10) == 0) {
    iVar5 = FUN_00406cf0(puVar3 + 6);
    iVar5 = (int)(puVar3 + 6) + iVar5;
    iVar6 = FUN_00406cf0(iVar5);
    piVar2 = *(int **)(iVar5 + iVar6);
    pHVar7 = GetFocus();
    iVar8 = FUN_00494bb2(pHVar7);
    if (iVar8 == 0) {
      local_5c = (HWND)0x0;
    }
    else {
      local_5c = *(HWND *)(iVar8 + 0x1c);
    }
    pHVar7 = (HWND)piVar2[7];
    uVar9 = (**(code **)(iVar4 + 0x2c))(1);
    pcVar10 = (code *)(**(code **)(iVar4 + 0x2c))(5);
    hMem = (HGLOBAL)(*pcVar10)(piVar2);
    if (hMem != (HGLOBAL)0x0) {
      GetWindowRect((HWND)piVar2[7],&tStack_30);
      pHVar11 = GetParent((HWND)piVar2[7]);
      FUN_00494bb2(pHVar11);
      FUN_004999e3(&tStack_30);
      uStack_54 = 0;
      iVar8 = FUN_004975a7();
      if (iVar8 == 0) {
        uStack_54 = 0x8000000;
      }
      pHVar11 = GetParent((HWND)piVar2[7]);
      iVar8 = FUN_00494bb2(pHVar11);
      if (iVar8 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(iVar8 + 0x1c);
      }
      uVar9 = FUN_004974d5(0,tStack_30.left,tStack_30.top,tStack_30.right - tStack_30.left,
                           tStack_30.bottom - tStack_30.top,param_2,uVar9,0,0);
      SVar12 = GlobalSize(hMem);
      pvVar13 = GlobalLock(hMem);
      iVar8 = (*pcStack_44)(pvVar13,SVar12,uStack_54,uVar16,uVar9);
      if ((iVar8 != 0) && (BVar14 = IsWindow(*(HWND *)(iVar8 + 0x1c)), BVar14 != 0)) {
        if ((*(byte *)(iVar4 + 0x14) & 0x80) != 0) {
          FUN_004062a0();
          ppuStack_20 = &PTR_FUN_02f954b0;
          uStack_4 = 0;
          if ((HWND)piVar2[7] != (HWND)0x0) {
            for (pHVar11 = GetTopWindow((HWND)piVar2[7]); pHVar11 != (HWND)0x0;
                pHVar11 = GetWindow(pHVar11,2)) {
              FUN_004065a0(pHVar11);
            }
          }
          pHVar11 = *(HWND *)(iVar8 + 0x1c);
          uVar15 = uStack_10 >> 2;
          while (uVar15 = uVar15 - 1, -1 < (int)uVar15) {
            SetParent(*(HWND *)(iStack_18 + uVar15 * 4),pHVar11);
          }
          uStack_4 = 0xffffffff;
          ppuStack_20 = &PTR_FUN_02f95460;
          FUN_004064a0();
        }
        *(int *)(iVar5 + iVar6) = iVar8;
        FUN_00412a50(param_3,param_4);
        SendMessageA(*(HWND *)(iVar8 + 0x1c),0x806f,0,0);
        SendMessageA(*(HWND *)(iVar8 + 0x1c),0x8076,0,0);
        if ((*(uint *)(iVar4 + 0x14) & 0x100000) != 0) {
          pHVar11 = GetParent(*(HWND *)(iVar8 + 0x1c));
          iVar4 = FUN_00494bb2(pHVar11);
          SendMessageA(*(HWND *)(iVar4 + 0x1c),0x8004,0,0);
        }
        uVar15 = GetWindowLongA((HWND)piVar2[7],-0x10);
        if ((uVar15 & 0x10000000) != 0) {
          FUN_00497580(8);
        }
        if ((uVar1 >> 8 & 1) == 1) {
          wParam = SendMessageA((HWND)piVar2[7],0x130b,0,0);
          SendMessageA(*(HWND *)(iVar8 + 0x1c),0x130c,wParam,0);
          FUN_0040eeb0(puVar3,0,0x7fffffff);
        }
        *(undefined4 *)(param_1 + 0x1d8) = 1;
        (**(code **)(*piVar2 + 0x58))();
        *(undefined4 *)(param_1 + 0x1d8) = 0;
        if (pHVar7 == local_5c) {
          FUN_004975e9();
        }
        else if ((local_5c != (HWND)0x0) && (BVar14 = IsWindow(local_5c), BVar14 != 0)) {
          pHVar7 = GetFocus();
          iVar4 = FUN_00494bb2(pHVar7);
          pHVar7 = (HWND)0x0;
          if (iVar4 != 0) {
            pHVar7 = *(HWND *)(iVar4 + 0x1c);
          }
          if (pHVar7 != local_5c) {
            SetFocus(local_5c);
          }
        }
      }
      GlobalUnlock(hMem);
      GlobalFree(hMem);
    }
  }
  ExceptionList = local_c;
  return;
}

