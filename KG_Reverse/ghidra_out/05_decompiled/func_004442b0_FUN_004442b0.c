// Function: FUN_004442b0
// Entry:    004442b0
// Size:     62 bytes
// Conv:     unknown
// Signature: undefined FUN_004442b0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004442b0(MSG *param_1)

{
  UINT UVar1;
  undefined4 uVar2;
  
  UVar1 = param_1->message;
  if ((UVar1 == 0x100) || (UVar1 == 0x101)) {
    TranslateMessage(param_1);
    DispatchMessageA(param_1);
  }
  else if (UVar1 != 0x106) {
    uVar2 = FUN_00495496(param_1);
    return uVar2;
  }
  return 1;
}

