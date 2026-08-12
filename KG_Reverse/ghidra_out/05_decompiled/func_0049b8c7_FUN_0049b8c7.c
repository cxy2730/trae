// Function: FUN_0049b8c7
// Entry:    0049b8c7
// Size:     365 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b8c7(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049b8c7(int param_1,int param_2)

{
  LPARAM lParam;
  WPARAM wParam;
  HWND pHVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  LRESULT LVar5;
  int iVar6;
  UINT Msg;
  
  if (param_2 != 0x20) {
LAB_0049ba25:
    FUN_00494b19();
    return;
  }
  wParam = SendMessageA(*(HWND *)(param_1 + 0x1c),0x19f,0,0);
  pHVar1 = GetParent(*(HWND *)(param_1 + 0x1c));
  iVar2 = FUN_00494bb2(pHVar1);
  if (((wParam == 0xffffffff) || (*(int *)(param_1 + 0x40) == 2)) || (*(int *)(param_1 + 0x40) == 5)
     ) goto LAB_0049ba25;
  uVar3 = FUN_00497418();
  if ((uVar3 & 8) == 0) {
    iVar4 = FUN_0049b504(wParam);
    if (iVar4 != 0) {
      iVar4 = (*(int *)(param_1 + 0x40) == 6) + 2;
      iVar6 = FUN_0049b4df(wParam);
      if (iVar6 == iVar4) {
        iVar6 = iVar6 + -1;
      }
      iVar4 = (iVar6 + 1) % iVar4;
      FUN_0049b464(wParam,iVar4);
      FUN_0049b5c6(wParam);
      uVar3 = FUN_00497418();
      if ((uVar3 & 0x800) != 0) {
        FUN_0049b718(iVar4);
      }
      wParam = *(WPARAM *)(param_1 + 0x1c);
      uVar3 = FUN_004974d5();
      uVar3 = uVar3 & 0xffff | 0x280000;
      Msg = 0x111;
      pHVar1 = *(HWND *)(iVar2 + 0x1c);
      goto LAB_0049ba21;
    }
LAB_0049b9a7:
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_0049b504(wParam);
    if (iVar4 == 0) goto LAB_0049b9a7;
    LVar5 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x187,wParam,0);
    if (LVar5 != 0) {
      iVar4 = (*(int *)(param_1 + 0x40) == 6) + 2;
      iVar6 = FUN_0049b4df(wParam);
      if (iVar6 == iVar4) {
        iVar6 = iVar6 + -1;
      }
      FUN_0049b464(wParam,(iVar6 + 1) % iVar4);
      lParam = *(LPARAM *)(param_1 + 0x1c);
      uVar3 = FUN_004974d5();
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x111,uVar3 & 0xffff | 0x280000,lParam);
    }
    uVar3 = (uint)(LVar5 == 0);
  }
  Msg = 0x185;
  pHVar1 = *(HWND *)(param_1 + 0x1c);
LAB_0049ba21:
  SendMessageA(pHVar1,Msg,uVar3,wParam);
  return;
}

