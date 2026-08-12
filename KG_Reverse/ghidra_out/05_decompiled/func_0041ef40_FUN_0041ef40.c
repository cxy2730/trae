// Function: FUN_0041ef40
// Entry:    0041ef40
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_0041ef40(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0041ef40(int param_1)

{
  LRESULT LVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    if ((*(byte *)(*(int *)(param_1 + 0x3c) + 0x170) & 1) != 0) {
      LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0xf0,0,0);
      SendMessageA(*(HWND *)(param_1 + 0x1c),0xf1,(uint)(LVar1 == 0),0);
      return;
    }
  }
  else {
    uVar2 = FUN_004974d5();
    FUN_0041e8b0(uVar2);
  }
  return;
}

