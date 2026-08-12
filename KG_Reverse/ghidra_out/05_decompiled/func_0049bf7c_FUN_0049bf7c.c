// Function: FUN_0049bf7c
// Entry:    0049bf7c
// Size:     25 bytes
// Conv:     unknown
// Signature: undefined FUN_0049bf7c(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0049bf7c(int param_1)

{
  GlobalUnlock(*(HGLOBAL *)(param_1 + 0x2c));
  GlobalFree(*(HGLOBAL *)(param_1 + 0x2c));
  return;
}

