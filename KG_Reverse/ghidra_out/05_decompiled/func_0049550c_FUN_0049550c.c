// Function: FUN_0049550c
// Entry:    0049550c
// Size:     113 bytes
// Conv:     unknown
// Signature: undefined FUN_0049550c(void)
// Decompiled by Ghidra 12.1.2


uint __thiscall FUN_0049550c(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  
  hWnd = (HWND)FUN_0049a6df(*(undefined4 *)(param_1 + 0x1c),param_2,param_3);
  if (hWnd == (HWND)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = GetDlgCtrlID(hWnd);
    uVar1 = uVar1 & 0xffff;
    if ((param_4 != (uint *)0x0) && (0x27 < *param_4)) {
      uVar2 = *(uint *)(param_1 + 0x1c);
      param_4[1] = param_4[1] | 1;
      param_4[9] = 0xffffffff;
      param_4[2] = uVar2;
      param_4[3] = (uint)hWnd;
      uVar2 = SendMessageA(hWnd,0x87,0,0);
      if ((uVar2 & 0x2000) == 0) {
        param_4[1] = param_4[1] | 0x80000002;
      }
    }
  }
  return uVar1;
}

