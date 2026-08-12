// Function: FUN_00401383
// Entry:    00401383
// Size:     92 bytes
// Conv:     unknown
// Signature: undefined FUN_00401383(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Unable to track spacebase fully for stack */

undefined4 __fastcall FUN_00401383(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  int aiStack_10 [3];
  
  iVar2 = param_1 + 1;
  piVar6 = (int *)(&stack0xfffffffc + iVar2 * -4);
  piVar1 = aiStack_10;
  aiStack_10[2 - iVar2] = param_1;
  aiStack_10[2] = 1;
  do {
    aiStack_10[1 - iVar2] = param_1;
    aiStack_10[-iVar2] = 0x4013a7;
    iVar3 = FUN_00401318();
    param_1 = aiStack_10[1 - iVar2];
    aiStack_10[2] = aiStack_10[2] + iVar3;
    *piVar6 = iVar3;
    piVar6 = piVar6 + 1;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  aiStack_10[1 - iVar2] = aiStack_10[2];
  aiStack_10[-iVar2] = 0x4013bb;
  puVar4 = (undefined1 *)thunk_FUN_0041b6c0();
  iVar3 = aiStack_10[2 - iVar2];
  aiStack_10[2 - iVar2] = (int)puVar4;
  piVar6 = (int *)(&stack0xfffffffc + iVar2 * -4);
  do {
    register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4);
    puVar7 = *(undefined1 **)register0x00000010;
    for (iVar5 = *piVar6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar3 = iVar3 + -1;
    piVar6 = piVar6 + 1;
  } while (iVar3 != 0);
  *puVar4 = 0;
  return piVar1[2 - iVar2];
}

