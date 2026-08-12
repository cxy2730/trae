// Function: FUN_0046d340
// Entry:    0046d340
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d340(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0046d340(int param_1,LPSTR param_2)

{
  LPWAVEHDR pwh;
  
  pwh = (LPWAVEHDR)FUN_0046d450(0);
  if (pwh == (LPWAVEHDR)0x0) {
    return 0x1c;
  }
  pwh->dwBufferLength = *(DWORD *)(param_1 + 0x54);
  pwh->lpData = param_2;
  waveOutPrepareHeader(*(HWAVEOUT *)(param_1 + 0x3c),pwh,*(UINT *)(param_1 + 0x50));
  waveOutWrite(*(HWAVEOUT *)(param_1 + 0x3c),pwh,*(UINT *)(param_1 + 0x50));
  return 0;
}

