// Function: FUN_00436860
// Entry:    00436860
// Size:     103 bytes
// Conv:     unknown
// Signature: undefined FUN_00436860(void)
// Decompiled by Ghidra 12.1.2


void FUN_00436860(uint param_1,LPSTR param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar1 = iVar2 / 10;
  iVar2 = iVar2 % 10;
  if ((int)param_1 < 0) {
    *param_2 = '-';
    param_2 = param_2 + 1;
  }
  if (iVar2 == 0) {
    wsprintfA(param_2,&DAT_02fb1004,iVar1);
    return;
  }
  wsprintfA(param_2,s__d__d_02fb10c4,iVar1,iVar2);
  return;
}

