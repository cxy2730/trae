// Function: FUN_0040bd60
// Entry:    0040bd60
// Size:     197 bytes
// Conv:     unknown
// Signature: undefined FUN_0040bd60(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040bd60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  undefined **ppuVar4;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049e148;
  local_c = ExceptionList;
  local_10 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00436e20();
  if (iVar1 != 0) {
    iVar1 = FUN_004291c0(*(undefined4 *)(param_1 + 0xa0));
    if (iVar1 != -1) {
      ppuVar4 = &local_10;
      uVar2 = FUN_00427c00(iVar1,ppuVar4);
      FUN_00427b70(uVar2,iVar1,ppuVar4);
    }
  }
  *(undefined4 *)(param_1 + 0xe4) = 1;
  LVar3 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x18c,0xffffffff,(LPARAM)local_10);
  if (LVar3 == -1) {
    SendMessageA(*(HWND *)(param_1 + 0x1c),0x186,0xffffffff,0);
  }
  *(undefined4 *)(param_1 + 0xe4) = 0;
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

