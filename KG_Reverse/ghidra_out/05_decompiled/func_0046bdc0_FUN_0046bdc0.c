// Function: FUN_0046bdc0
// Entry:    0046bdc0
// Size:     36 bytes
// Conv:     unknown
// Signature: undefined FUN_0046bdc0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0046bdc0(int param_1)

{
  Sleep(1);
  if ((*(char *)(param_1 + 0x1d) == '\0') && (*(char *)(param_1 + 0x1c) == '\0')) {
    return 0;
  }
  return 1;
}

