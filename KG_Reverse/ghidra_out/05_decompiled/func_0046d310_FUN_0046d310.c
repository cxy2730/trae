// Function: FUN_0046d310
// Entry:    0046d310
// Size:     29 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d310(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046d310(int param_1)

{
  if (*(char *)(param_1 + 0x60) != '\0') {
    waveOutReset(*(HWAVEOUT *)(param_1 + 0x3c));
  }
  FUN_0046e650();
  return;
}

