// Function: FUN_004399f0
// Entry:    004399f0
// Size:     55 bytes
// Conv:     unknown
// Signature: undefined FUN_004399f0(void)
// Decompiled by Ghidra 12.1.2


int FUN_004399f0(LPHWAVEOUT param_1,LPCWAVEFORMATEX param_2,DWORD_PTR param_3,DWORD_PTR param_4)

{
  UINT UVar1;
  MMRESULT MVar2;
  
  UVar1 = waveOutGetNumDevs();
  if (UVar1 == 0) {
    return -1;
  }
  MVar2 = waveOutOpen(param_1,0xffffffff,param_2,param_4,param_3,0x30000);
  return (-(uint)(MVar2 != 0) & 0xfffffffe) + 1;
}

