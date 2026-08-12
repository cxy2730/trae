// Function: FUN_0046d280
// Entry:    0046d280
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d280(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_0046d280(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *(char *)((int)param_1 + 0x1d);
  while( true ) {
    if ((cVar1 != '\0') || ((char)param_1[7] != '\0')) {
      return 0;
    }
    FUN_0046bae0();
    iVar3 = param_1[0x16];
    iVar4 = 0;
    if (iVar3 != 0) {
      piVar2 = (int *)(param_1[0xe] + 0xc);
      do {
        if (0 < *piVar2) {
          iVar4 = iVar4 + 1;
        }
        piVar2 = piVar2 + 8;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_0046baf0();
    if (iVar4 == 0) break;
    (**(code **)(*param_1 + 0x38))();
    cVar1 = *(char *)((int)param_1 + 0x1d);
  }
  return 1;
}

