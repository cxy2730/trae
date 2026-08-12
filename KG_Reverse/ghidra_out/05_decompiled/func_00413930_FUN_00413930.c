// Function: FUN_00413930
// Entry:    00413930
// Size:     913 bytes
// Conv:     unknown
// Signature: undefined FUN_00413930(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00413930(int param_1,UINT param_2)

{
  HMODULE hLibModule;
  DWORD DVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 unaff_EBX;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 unaff_EDI;
  int iVar8;
  
  puVar6 = &stack0xfffffffc;
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
  if ((*(int *)(param_1 + 0x228) == 0) ||
     (DVar1 = GetCurrentThreadId(), DVar1 == *(DWORD *)(param_1 + 0x228))) {
    *(undefined4 *)(param_1 + 0x42c) = 1;
    FUN_00412500();
    (**(code **)(*(int *)(param_1 + 0x104) + 8))();
    iVar4 = 0;
    uVar3 = *(uint *)(param_1 + 0x420) >> 2;
    puVar7 = &stack0xfffffffc;
    if (uVar3 != 0) {
      do {
        DAT_02fdc180 = *(code **)(*(int *)(param_1 + 0x418) + iVar4 * 4);
        if (DAT_02fdc180 != (code *)0x0) {
          (*DAT_02fdc180)(unaff_EDI,param_1,puVar6,&stack0xffffffe8,unaff_EBX,DAT_02fdc180,iVar4,
                          uVar3);
          param_1 = *(int *)(puVar6 + -4);
          iVar4 = *(int *)(puVar6 + 8);
          uVar3 = *(uint *)(puVar6 + -8);
        }
        iVar4 = iVar4 + 1;
        *(int *)(puVar6 + 8) = iVar4;
        puVar7 = puVar6;
      } while (iVar4 < (int)uVar3);
    }
    FUN_004064a0();
    iVar4 = 0;
    uVar3 = *(uint *)(param_1 + 0x130) >> 2;
    if (uVar3 != 0) {
      do {
        iVar8 = *(int *)(*(int *)(param_1 + 0x128) + iVar4 * 4);
        if (iVar8 != 0) {
          (**(code **)(iVar8 + 0x78))(6,*(undefined4 *)(*(int *)(param_1 + 0x13c) + iVar4 * 4),0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar3);
    }
    FUN_004064a0();
    FUN_004064a0();
    uVar3 = *(uint *)(param_1 + 0x180) >> 2;
    if (uVar3 != 0) {
      iVar4 = 0;
      if (uVar3 != 0) {
        do {
          hLibModule = *(HMODULE *)(*(int *)(param_1 + 0x178) + iVar4 * 4);
          if (hLibModule != (HMODULE)0x0) {
            FreeLibrary(hLibModule);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar3);
      }
      FUN_004064a0();
      FUN_004064a0();
      FUN_004064a0();
      FUN_004064a0();
    }
    uVar3 = *(uint *)(param_1 + 0x1b0) >> 2;
    if (uVar3 != 0) {
      iVar4 = 0;
      if (uVar3 != 0) {
        do {
          FreeLibrary(*(HMODULE *)(*(int *)(param_1 + 0x1a8) + iVar4 * 4));
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar3);
      }
      FUN_004064a0();
      FUN_00492438(0,0xffffffff);
    }
    FUN_00412b90();
    FUN_00493161();
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(HICON *)(param_1 + 0x424) != (HICON)0x0) {
      DestroyIcon(*(HICON *)(param_1 + 0x424));
      *(undefined4 *)(param_1 + 0x424) = 0;
    }
    if (*(HICON *)(param_1 + 0x428) != (HICON)0x0) {
      DestroyIcon(*(HICON *)(param_1 + 0x428));
      *(undefined4 *)(param_1 + 0x428) = 0;
    }
    if ((*(HWND *)(param_1 + 0x3e4) != (HWND)0x0) &&
       (BVar2 = IsWindow(*(HWND *)(param_1 + 0x3e4)), BVar2 != 0)) {
      iVar4 = FUN_00494b40(0);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(param_1 + 0x3c8) + 0x58))();
      }
      *(undefined4 *)(param_1 + 0x3e4) = 0;
    }
    FUN_00411300();
    iVar4 = *(int *)(param_1 + 0x3ac);
    iVar8 = 0;
    *(int *)(puVar7 + 8) = iVar4;
    if (0 < iVar4) {
      do {
        puVar5 = *(undefined4 **)(*(int *)(param_1 + 0x3a8) + iVar8 * 4);
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
          iVar4 = *(int *)(puVar7 + 8);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
    }
    FUN_0049228c(0,0xffffffff);
    FUN_00415c00(1);
    if (*(int *)(param_1 + 0x264) == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = *(undefined4 **)(param_1 + 0x25c);
    }
    uVar3 = *(uint *)(param_1 + 0x264) >> 2;
    if (uVar3 != 0) {
      *(undefined4 **)(puVar7 + 8) = puVar5;
      *(uint *)(puVar7 + -4) = uVar3;
      do {
        puVar5 = (undefined4 *)*puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[5] = 0;
          if ((HICON)puVar5[3] != (HICON)0x0) {
            DestroyIcon((HICON)puVar5[3]);
            puVar5[3] = 0;
          }
          if (puVar5[4] != 0) {
            FUN_00492f40(puVar5[4]);
            puVar5[4] = 0;
          }
          FUN_00492f40(puVar5);
        }
        iVar4 = *(int *)(puVar7 + -4);
        puVar5 = (undefined4 *)(*(int *)(puVar7 + 8) + 4);
        *(undefined4 **)(puVar7 + 8) = puVar5;
        *(int *)(puVar7 + -4) = iVar4 + -1;
      } while (iVar4 + -1 != 0);
    }
    FUN_004064a0();
    if (*(int *)(param_1 + 0x3a0) == 1) {
      Ordinal_116();
      *(undefined4 *)(param_1 + 0x3a0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0xf8);
    iVar8 = 0;
    if (0 < iVar4) {
      do {
        FUN_00413520(*(undefined4 *)(*(int *)(param_1 + 0xe0) + iVar8 * 4),
                     *(undefined4 *)(*(int *)(param_1 + 0xf4) + iVar8 * 4),0);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar4);
    }
    FUN_00492438(0,0xffffffff);
    FUN_00492438(0,0xffffffff);
    if (*(int *)(param_1 + 0x404) != 0) {
      OleUninitialize();
      *(undefined4 *)(param_1 + 0x404) = 0;
    }
    return;
  }
  if ((*(HWND *)(param_1 + 0x3e4) != (HWND)0x0) &&
     (BVar2 = IsWindow(*(HWND *)(param_1 + 0x3e4)), BVar2 != 0)) {
    SendMessageA(*(HWND *)(param_1 + 0x3e4),0x83e7,param_2,0);
  }
  if (*(int *)(param_1 + 0x42c) != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_2);
}

