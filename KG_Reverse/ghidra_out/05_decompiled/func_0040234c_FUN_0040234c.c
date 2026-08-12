// Function: FUN_0040234c
// Entry:    0040234c
// Size:     87 bytes
// Conv:     unknown
// Signature: undefined FUN_0040234c(void)
// Decompiled by Ghidra 12.1.2


undefined4 * __fastcall FUN_0040234c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  iVar3 = 0;
  iVar2 = param_1;
  piVar4 = (int *)register0x00000010;
  do {
    piVar4 = piVar4 + 1;
    if (*piVar4 != 0) {
      iVar3 = iVar3 + *(int *)(*piVar4 + 4);
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)thunk_FUN_0041b6c0(iVar3 + 8);
    *puVar1 = 1;
    puVar1[1] = iVar3;
    puVar6 = puVar1 + 2;
    do {
      register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
      iVar2 = *(int *)register0x00000010;
      if (iVar2 != 0) {
        puVar5 = (undefined1 *)(iVar2 + 8);
        for (iVar3 = *(int *)(iVar2 + 4); iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
      }
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return puVar1;
}

