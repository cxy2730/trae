// Function: FUN_0042ee70
// Entry:    0042ee70
// Size:     87 bytes
// Conv:     unknown
// Signature: undefined FUN_0042ee70(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0042ee70(int param_1)

{
  HWND pHVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  pHVar1 = GetCapture();
  iVar2 = FUN_00494bb2(pHVar1);
  if (iVar2 == param_1) {
    *(undefined4 *)(param_1 + 0x434) = 1;
    iVar2 = FUN_0042e4a0(&stack0x00000008,&local_4,&local_8);
    if (iVar2 == 1) {
      FUN_0042c940(local_4,local_8,1,2,1);
    }
  }
  return;
}

