// Function: FUN_00413430
// Entry:    00413430
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_00413430(void)
// Decompiled by Ghidra 12.1.2


void FUN_00413430(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  
  piVar8 = (int *)*param_2;
  iVar2 = FUN_00415c20(piVar8);
  if (iVar2 != 0) {
    iVar2 = *piVar8;
    piVar6 = piVar8 + 1;
    iVar3 = 1;
    if (0 < iVar2) {
      do {
        iVar1 = *piVar6;
        piVar6 = piVar6 + 1;
        iVar3 = iVar3 * iVar1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    puVar4 = (undefined1 *)((iVar3 * param_1 - (int)piVar8) + (int)piVar6);
    if (puVar4 != (undefined1 *)0x0) {
      piVar5 = (int *)FUN_0041b6c0(puVar4);
      piVar6 = piVar5;
      for (uVar7 = (uint)puVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *piVar6 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar6 = piVar6 + 1;
      }
      for (uVar7 = (uint)puVar4 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)piVar6 = (char)*piVar8;
        piVar8 = (int *)((int)piVar8 + 1);
        piVar6 = (int *)((int)piVar6 + 1);
      }
      *param_2 = piVar5;
    }
  }
  return;
}

