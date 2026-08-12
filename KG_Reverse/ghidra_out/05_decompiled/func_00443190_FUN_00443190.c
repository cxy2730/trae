// Function: FUN_00443190
// Entry:    00443190
// Size:     267 bytes
// Conv:     unknown
// Signature: undefined FUN_00443190(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00443190(int param_1)

{
  int iVar1;
  HDC hdc;
  int iVar2;
  
  iVar1 = FUN_0042a650();
  if (iVar1 != 0) {
    iVar1 = FUN_00428970();
    if (iVar1 == 0) {
      FUN_00429540();
    }
    else {
      FUN_00429600(iVar1);
    }
    hdc = (HDC)FUN_00428980();
    if (hdc == (HDC)0x0) {
      *(undefined4 *)(param_1 + 0x48) = 0x834;
      *(undefined4 *)(param_1 + 0x4c) = 0xb9a;
      *(undefined4 *)(param_1 + 0x50) = 0x834;
      *(undefined4 *)(param_1 + 0x54) = 0xb9a;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    else {
      FUN_00442a30(hdc,param_1 + 0x48,param_1 + 0x4c,param_1 + 0x50,param_1 + 0x54,param_1 + 0x58,
                   param_1 + 0x5c,param_1 + 0x60,param_1 + 100);
      DeleteDC(hdc);
    }
    iVar1 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x70)) - *(int *)(param_1 + 0x68);
    iVar2 = (*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x74)) - *(int *)(param_1 + 0x6c);
    *(int *)(param_1 + 0xcc) = iVar2;
    *(int *)(param_1 + 200) = iVar1;
    FUN_00428da0(iVar1,iVar2,(int *)(param_1 + 0x68),param_1 + 0xd8);
    FUN_004432a0();
    FUN_004430f0();
    InvalidateRect(*(HWND *)(param_1 + 0x1c),(RECT *)0x0,1);
  }
  return;
}

