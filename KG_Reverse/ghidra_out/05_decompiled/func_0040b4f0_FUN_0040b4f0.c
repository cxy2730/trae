// Function: FUN_0040b4f0
// Entry:    0040b4f0
// Size:     171 bytes
// Conv:     unknown
// Signature: undefined FUN_0040b4f0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040b4f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0049e108;
  local_c = ExceptionList;
  local_10 = PTR_DAT_02fd8088;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_00436e20();
  if (iVar1 != 0) {
    iVar1 = FUN_004291c0(*(undefined4 *)(param_1 + 0x90));
    if (iVar1 != -1) {
      ppuVar3 = &local_10;
      uVar2 = FUN_00427c00(iVar1,ppuVar3);
      FUN_00427b70(uVar2,iVar1,ppuVar3);
    }
  }
  iVar1 = FUN_00429420(local_10);
  SendMessageA(*(HWND *)(param_1 + 0x1c),0xf1,(uint)(iVar1 != 0),0);
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

