// Function: FUN_0049bb94
// Entry:    0049bb94
// Size:     129 bytes
// Conv:     unknown
// Signature: undefined FUN_0049bb94(void)
// Decompiled by Ghidra 12.1.2


WPARAM __thiscall FUN_0049bb94(int *param_1,WPARAM param_2,int param_3)

{
  uint uVar1;
  WPARAM WVar2;
  LRESULT LVar3;
  HWND hWnd;
  
  uVar1 = FUN_00497418();
  if ((uVar1 & 0x42) == 0) {
    if (param_2 == 0xffffffff) {
      param_2 = 0;
    }
    hWnd = (HWND)param_1[7];
    for (; LVar3 = SendMessageA(hWnd,0x18b,0,0), (int)param_2 < LVar3; param_2 = param_2 + 1) {
      LVar3 = SendMessageA((HWND)param_1[7],0x199,param_2,0);
      if (param_3 == LVar3) {
        return param_2;
      }
      hWnd = (HWND)param_1[7];
    }
    WVar2 = 0xffffffff;
  }
  else {
    WVar2 = (**(code **)(*param_1 + 0xa0))(0x1a2,param_2,param_3);
  }
  return WVar2;
}

