// Function: FUN_0046b5c0
// Entry:    0046b5c0
// Size:     140 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b5c0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046b5c0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  while( true ) {
    if (iVar3 != 0) {
      return;
    }
    piVar1 = *(int **)(param_1 + 0xc);
    FUN_0046bae0();
    iVar3 = 0;
    if (*piVar1 != 0) {
      iVar3 = *(int *)(*piVar1 + 4);
    }
    FUN_0046baf0();
    if ((iVar3 == 0) && (FUN_0046bb40(), *(int *)(param_1 + 0x10) == 1)) break;
    piVar1 = *(int **)(param_1 + 0xc);
    FUN_0046bae0();
    piVar2 = (int *)*piVar1;
    iVar3 = 0;
    if (piVar2 != (int *)0x0) {
      iVar3 = piVar2[1];
      *piVar1 = *piVar2;
      FUN_00492f40(piVar2);
    }
    if (*piVar1 == 0) {
      piVar1[1] = 0;
    }
    FUN_0046baf0();
    if (iVar3 != 0) {
      FUN_0046b650(iVar3);
    }
    iVar3 = *(int *)(param_1 + 0x10);
  }
  return;
}

