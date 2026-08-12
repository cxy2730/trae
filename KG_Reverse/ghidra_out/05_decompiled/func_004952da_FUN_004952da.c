// Function: FUN_004952da
// Entry:    004952da
// Size:     274 bytes
// Conv:     unknown
// Signature: undefined FUN_004952da(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004952da(CWnd *param_1)

{
  CWinThread *pCVar1;
  int iVar2;
  LONG LVar3;
  LONG LVar4;
  int *piVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 == (CWinThread *)0x0) goto LAB_00495325;
  if (*(CWnd **)(pCVar1 + 0x1c) == param_1) {
    iVar2 = FUN_0049c724();
    if (*(char *)(iVar2 + 0x14) == '\0') {
      iVar2 = FUN_0049c724();
      if (pCVar1 == *(CWinThread **)(iVar2 + 4)) {
        iVar2 = FUN_0049bfa4();
        if (iVar2 == 0) goto LAB_0049531a;
      }
      AfxPostQuitMessage(0);
    }
LAB_0049531a:
    *(undefined4 *)(pCVar1 + 0x1c) = 0;
  }
  if (*(CWnd **)(pCVar1 + 0x20) == param_1) {
    *(undefined4 *)(pCVar1 + 0x20) = 0;
  }
LAB_00495325:
  if (*(int **)(param_1 + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x30) + 0x50))();
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 4))(1);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (((byte)param_1[0x24] & 1) != 0) {
    iVar2 = FUN_0049c4f2();
    iVar2 = *(int *)(iVar2 + 0xcc);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) != 0)) {
      _memset(&local_30,0,0x2c);
      local_28 = *(undefined4 *)(param_1 + 0x1c);
      local_30 = 0x28;
      local_2c = 1;
      local_24 = local_28;
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x405,0,(LPARAM)&local_30);
    }
  }
  LVar3 = GetWindowLongA(*(HWND *)(param_1 + 0x1c),-4);
  FUN_00494b19();
  LVar4 = GetWindowLongA(*(HWND *)(param_1 + 0x1c),-4);
  if (LVar4 == LVar3) {
    piVar5 = (int *)(**(code **)(*(int *)param_1 + 0x80))();
    if (*piVar5 != 0) {
      SetWindowLongA(*(HWND *)(param_1 + 0x1c),-4,*piVar5);
    }
  }
  CWnd::Detach(param_1);
  (**(code **)(*(int *)param_1 + 0xa4))();
  return;
}

