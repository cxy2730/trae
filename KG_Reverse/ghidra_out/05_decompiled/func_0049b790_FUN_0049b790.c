// Function: FUN_0049b790
// Entry:    0049b790
// Size:     253 bytes
// Conv:     unknown
// Signature: undefined FUN_0049b790(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049b790(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPARAM lParam;
  WPARAM wParam;
  int iVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  LRESULT LVar6;
  int local_8;
  
  local_8 = param_1;
  FUN_004975e9();
  wParam = FUN_0049b618(param_3,param_4,&local_8);
  iVar1 = FUN_0049b504(wParam);
  if (iVar1 == 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x40) != 2) && (*(int *)(param_1 + 0x40) != 5)) && (local_8 != 0)) {
    pHVar2 = GetParent(*(HWND *)(param_1 + 0x1c));
    iVar1 = FUN_00494bb2(pHVar2);
    iVar3 = (*(int *)(param_1 + 0x40) == 6) + 2;
    iVar4 = FUN_0049b4df(wParam);
    if (iVar4 == iVar3) {
      iVar4 = iVar4 + -1;
    }
    iVar3 = (iVar4 + 1) % iVar3;
    FUN_0049b464(wParam,iVar3);
    FUN_0049b5c6(wParam);
    uVar5 = FUN_00497418();
    if (((uVar5 & 0x808) == 0) ||
       (LVar6 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x187,wParam,0), LVar6 == 0)) {
      FUN_00494b19();
    }
    else {
      FUN_0049b718(iVar3);
    }
    lParam = *(LPARAM *)(param_1 + 0x1c);
    uVar5 = FUN_004974d5();
    SendMessageA(*(HWND *)(iVar1 + 0x1c),0x111,uVar5 & 0xffff | 0x280000,lParam);
    return;
  }
  FUN_00494b19();
  return;
}

