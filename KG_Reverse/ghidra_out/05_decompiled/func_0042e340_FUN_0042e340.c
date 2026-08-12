// Function: FUN_0042e340
// Entry:    0042e340
// Size:     129 bytes
// Conv:     unknown
// Signature: undefined FUN_0042e340(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042e340(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0049633f(0);
  switch(param_2) {
  case 0:
    uVar1 = uVar1 - 1;
    break;
  case 1:
    uVar1 = uVar1 + 1;
    break;
  case 2:
    uVar1 = uVar1 - 5;
    break;
  case 3:
    uVar1 = uVar1 + 5;
    break;
  case 4:
  case 5:
    uVar1 = param_3;
  }
  FUN_0042a600(1);
  FUN_0042c270();
  *(undefined4 *)(param_1 + 0x44c) = 0;
  FUN_0042eed0(((int)uVar1 < 0) - 1 & uVar1,0xffffffff,1);
  UpdateWindow(*(HWND *)(param_1 + 0x1c));
  FUN_0042c270();
  *(undefined4 *)(param_1 + 0x44c) = 1;
  return;
}

