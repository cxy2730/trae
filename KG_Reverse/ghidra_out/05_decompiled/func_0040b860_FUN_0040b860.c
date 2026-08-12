// Function: FUN_0040b860
// Entry:    0040b860
// Size:     241 bytes
// Conv:     unknown
// Signature: undefined FUN_0040b860(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040b860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  undefined **ppuVar4;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049e128;
  local_c = ExceptionList;
  local_10 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00436e20();
  if (iVar1 != 0) {
    iVar1 = FUN_004291c0(*(undefined4 *)(param_1 + 0xa8));
    if (iVar1 != -1) {
      ppuVar4 = &local_10;
      uVar2 = FUN_00427c00(iVar1,ppuVar4);
      FUN_00427b70(uVar2,iVar1,ppuVar4);
    }
  }
  *(undefined4 *)(param_1 + 0xf0) = 1;
  if (*(int *)(param_1 + 0x40) == 2) {
    LVar3 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x14d,0xffffffff,(LPARAM)local_10);
    if (LVar3 == -1) {
      SendMessageA(*(HWND *)(param_1 + 0x1c),0x14e,0xffffffff,0);
    }
  }
  else {
    FUN_004974ae(local_10);
    SendMessageA(*(HWND *)(param_1 + 0x1c),0x142,0,-0x10000);
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

