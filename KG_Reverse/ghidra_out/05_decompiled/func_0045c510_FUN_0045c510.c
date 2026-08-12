// Function: FUN_0045c510
// Entry:    0045c510
// Size:     88 bytes
// Conv:     unknown
// Signature: undefined FUN_0045c510(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045c510(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c8);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x78)) {
    piVar5 = (int *)(iVar1 + 0x34);
    do {
      iVar2 = 0;
      if (0 < iVar4) {
        piVar3 = (int *)(iVar1 + 0x20);
        do {
          if (piVar5[-5] == *piVar3) {
            iVar2 = *(int *)(iVar1 + 0x34 + iVar2 * 4);
            if (iVar2 != 0) goto LAB_0045c556;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar2 < iVar4);
      }
      iVar2 = FUN_0045c570(param_1,piVar5[-5]);
LAB_0045c556:
      *piVar5 = iVar2;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x78));
  }
  return;
}

