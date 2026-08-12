// Function: FUN_00439a30
// Entry:    00439a30
// Size:     19 bytes
// Conv:     unknown
// Signature: undefined FUN_00439a30(void)
// Decompiled by Ghidra 12.1.2


int FUN_00439a30(HWAVEOUT param_1)

{
  MMRESULT MVar1;
  
  MVar1 = waveOutClose(param_1);
  return (-(uint)(MVar1 != 0) & 0xfffffffe) + 1;
}

