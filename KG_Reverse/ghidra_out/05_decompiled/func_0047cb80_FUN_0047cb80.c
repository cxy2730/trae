// Function: FUN_0047cb80
// Entry:    0047cb80
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_0047cb80(void)
// Decompiled by Ghidra 12.1.2


void FUN_0047cb80(int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  
  iVar5 = 9;
  iVar1 = (param_2 + 0x11) / 0x12;
  pfVar4 = (float *)(param_1 + 0x84);
  do {
    if (0 < iVar1) {
      uVar3 = iVar1 + 1U >> 1;
      pfVar2 = pfVar4;
      do {
        *pfVar2 = -*pfVar2;
        pfVar2 = pfVar2 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    pfVar4 = pfVar4 + 0x40;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

