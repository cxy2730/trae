// Function: FUN_0046d2f0
// Entry:    0046d2f0
// Size:     29 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d2f0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046d2f0(int param_1)

{
  if (*(char *)(param_1 + 0x60) != '\0') {
    waveOutRestart(*(HWAVEOUT *)(param_1 + 0x3c));
  }
  FUN_0046bd40();
  return;
}

