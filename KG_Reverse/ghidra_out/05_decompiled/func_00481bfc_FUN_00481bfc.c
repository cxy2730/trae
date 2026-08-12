// Function: FUN_00481bfc
// Entry:    00481bfc
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_00481bfc(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00481bfc(int param_1)

{
  LRESULT LVar1;
  
  LVar1 = SendMessageA(*(HWND *)(param_1 + 0x1c),0x31,0,0);
  FUN_00499e08(LVar1);
  return;
}

