// Function: FUN_0042ff70
// Entry:    0042ff70
// Size:     249 bytes
// Conv:     unknown
// Signature: undefined FUN_0042ff70(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042ff70(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  BOOL BVar2;
  HANDLE hMem;
  SIZE_T SVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_0042a650();
  if (iVar1 != 0) {
    FUN_0042a650();
    iVar1 = FUN_00427c10();
    if (iVar1 == 0) {
      BVar2 = OpenClipboard((HWND)0x0);
      if (BVar2 != 0) {
        hMem = GetClipboardData(DAT_02fe8c40 & 0xffff);
        if (hMem == (HANDLE)0x0) {
          CloseClipboard();
          return;
        }
        piVar10 = &iStack_c;
        uVar11 = 1;
        puVar9 = &uStack_8;
        puVar8 = &uStack_4;
        uVar5 = (uint)param_1[0x11] >> 4 & 1;
        uVar6 = param_2;
        uVar7 = param_3;
        SVar3 = GlobalSize(hMem);
        pvVar4 = GlobalLock(hMem);
        FUN_0042a650(pvVar4,SVar3,uVar6,uVar7,uVar5,puVar8,puVar9,piVar10,uVar11);
        iVar1 = FUN_00427e40(pvVar4,SVar3,uVar6,uVar7,uVar5,puVar8,puVar9,piVar10,uVar11);
        GlobalUnlock(hMem);
        CloseClipboard();
        if ((param_4 == 1) && (iVar1 == 1)) {
          if (iStack_c == 1) {
            (**(code **)(*param_1 + 0xcc))();
          }
          (**(code **)(*param_1 + 0xc0))(param_2,param_3,uStack_4,uStack_8);
        }
      }
    }
  }
  return;
}

