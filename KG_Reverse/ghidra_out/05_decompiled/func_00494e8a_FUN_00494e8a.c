// Function: FUN_00494e8a
// Entry:    00494e8a
// Size:     502 bytes
// Conv:     unknown
// Signature: undefined FUN_00494e8a(void)
// Decompiled by Ghidra 12.1.2


LRESULT FUN_00494e8a(int param_1,HWND param_2,int *param_3)

{
  int *piVar1;
  LRESULT LVar2;
  int iVar3;
  DWORD DVar4;
  int *lpString1;
  int iVar5;
  LONG *pLVar6;
  LONG LVar7;
  HANDLE hData;
  HANDLE pvVar8;
  code *dwNewLong;
  int local_14 [2];
  uint local_c;
  int local_8;
  
  local_8 = FUN_0049ccac(&LAB_0049c02d);
  if (param_1 != 3) {
    LVar2 = CallNextHookEx(*(HHOOK *)(local_8 + 0x2c),param_1,(WPARAM)param_2,(LPARAM)param_3);
    return LVar2;
  }
  piVar1 = *(int **)(local_8 + 0x14);
  iVar5 = *param_3;
  iVar3 = FUN_0049c724();
  local_c = (uint)*(byte *)(iVar3 + 0x14);
  if ((piVar1 == (int *)0x0) && (((*(byte *)(iVar5 + 0x23) & 0x40) != 0 || (local_c != 0))))
  goto LAB_00495053;
  if (DAT_03010d0c != 0) {
    DVar4 = GetClassLongA(param_2,-0x1a);
    if ((DVar4 & 0x10000) != 0) goto LAB_00495053;
    lpString1 = *(int **)(iVar5 + 0x28);
    if ((short)((uint)lpString1 >> 0x10) == 0) {
      local_14[0] = CONCAT31(local_14[0]._1_3_,(byte)local_14[0] & (byte)((uint)lpString1 >> 0x10));
      GlobalGetAtomNameA(*(ATOM *)(iVar5 + 0x28),(LPSTR)local_14,5);
      lpString1 = local_14;
    }
    iVar5 = lstrcmpiA((LPCSTR)lpString1,(LPCSTR)&PTR_DAT_02f9b748);
    if (iVar5 == 0) goto LAB_00495053;
  }
  if (piVar1 == (int *)0x0) {
    hData = (HANDLE)GetWindowLongA(param_2,-4);
    if ((hData != (HANDLE)0x0) &&
       (pvVar8 = GetPropA(param_2,"AfxOldWndProc423"), pvVar8 == (HANDLE)0x0)) {
      SetPropA(param_2,"AfxOldWndProc423",hData);
      pvVar8 = GetPropA(param_2,"AfxOldWndProc423");
      if (pvVar8 == hData) {
        GlobalAddAtomA("AfxOldWndProc423");
        dwNewLong = FUN_00494e0e;
        if (*(int *)(local_8 + 0x28) == 0) {
          dwNewLong = FUN_00494caf;
        }
        SetWindowLongA(param_2,-4,(LONG)dwNewLong);
      }
    }
    goto LAB_00495053;
  }
  FUN_00494bf7(param_2);
  (**(code **)(*piVar1 + 0x50))();
  pLVar6 = (LONG *)(**(code **)(*piVar1 + 0x80))();
  iVar5 = DAT_03010c98;
  if ((((DAT_03010cfc == 0) && (local_c == 0)) && (DAT_03010c98 != 0)) &&
     ((*(int *)(DAT_03010c98 + 0x20) != 0 &&
      (local_14[0] = FUN_004949e7(piVar1,param_2,0x36f,0,0), local_14[0] != 0)))) {
    iVar3 = FUN_00494ca9();
    LVar7 = GetWindowLongA(param_2,-4);
    (**(code **)(iVar5 + 0x20))(param_2,local_14[0]);
    if (LVar7 != iVar3) {
      LVar7 = SetWindowLongA(param_2,-4,iVar3);
LAB_00494fe7:
      *pLVar6 = LVar7;
    }
  }
  else {
    iVar5 = FUN_00494ca9();
    LVar7 = SetWindowLongA(param_2,-4,iVar5);
    if (LVar7 != iVar5) goto LAB_00494fe7;
  }
  *(undefined4 *)(local_8 + 0x14) = 0;
LAB_00495053:
  iVar5 = local_8;
  LVar2 = CallNextHookEx(*(HHOOK *)(local_8 + 0x2c),3,(WPARAM)param_2,(LPARAM)param_3);
  if (local_c != 0) {
    UnhookWindowsHookEx(*(HHOOK *)(iVar5 + 0x2c));
    *(undefined4 *)(iVar5 + 0x2c) = 0;
  }
  return LVar2;
}

