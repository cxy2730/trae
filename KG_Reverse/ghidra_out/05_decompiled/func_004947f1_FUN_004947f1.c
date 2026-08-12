// Function: FUN_004947f1
// Entry:    004947f1
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_004947f1(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004947f1(HWND param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = GetWindowLongA(param_1,param_2);
  param_4 = ~param_3 & uVar1 | param_4;
  if (uVar1 == param_4) {
    uVar2 = 0;
  }
  else {
    SetWindowLongA(param_1,param_2,param_4);
    if (param_5 != 0) {
      SetWindowPos(param_1,(HWND)0x0,0,0,0,0,param_5 | 0x17);
    }
    uVar2 = 1;
  }
  return uVar2;
}

