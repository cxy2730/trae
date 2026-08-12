// Function: FUN_004875f8
// Entry:    004875f8
// Size:     90 bytes
// Conv:     unknown
// Signature: undefined FUN_004875f8(void)
// Decompiled by Ghidra 12.1.2


void FUN_004875f8(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_00484f2c((int)*param_1);
  if (iVar3 != 0x65) {
    do {
      param_1 = param_1 + 1;
      if (DAT_02fd9ac0 < 2) {
        uVar4 = (byte)PTR_DAT_02fd98b4[*param_1 * 2] & 4;
      }
      else {
        uVar4 = FUN_0048a852((int)*param_1,4);
      }
    } while (uVar4 != 0);
  }
  cVar2 = *param_1;
  *param_1 = DAT_02fd9ac4;
  do {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
    *param_1 = cVar2;
    cVar2 = cVar1;
  } while (*param_1 != '\0');
  return;
}

