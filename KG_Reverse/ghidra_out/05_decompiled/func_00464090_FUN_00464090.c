// Function: FUN_00464090
// Entry:    00464090
// Size:     139 bytes
// Conv:     unknown
// Signature: undefined FUN_00464090(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00464090(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  
  iVar1 = param_1[1];
  if (*(int *)(*param_1 + 0xa4) == 0) {
    return param_2 == 0;
  }
  iVar2 = *(int *)(*param_1 + 0xa0);
  piVar4 = (int *)(iVar2 + iVar1);
  iVar2 = *(int *)(iVar2 + iVar1);
  while (iVar2 != 0) {
    uVar6 = 0;
    puVar5 = (ushort *)(piVar4 + 2);
    if ((piVar4[1] - 8U & 0xfffffffe) != 0) {
      do {
        if ((*puVar5 & 0xf000) == 0x3000) {
          piVar3 = (int *)((*puVar5 & 0xfff) + iVar2 + iVar1);
          *piVar3 = *piVar3 + param_2;
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (uVar6 < piVar4[1] - 8U >> 1);
    }
    piVar4 = (int *)((int)piVar4 + piVar4[1]);
    iVar2 = *piVar4;
  }
  return true;
}

