// Function: FUN_00483fb7
// Entry:    00483fb7
// Size:     29 bytes
// Conv:     unknown
// Signature: undefined FUN_00483fb7(void)
// Decompiled by Ghidra 12.1.2


int FUN_00483fb7(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}

