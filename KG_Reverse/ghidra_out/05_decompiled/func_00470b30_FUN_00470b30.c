// Function: FUN_00470b30
// Entry:    00470b30
// Size:     333 bytes
// Conv:     unknown
// Signature: undefined FUN_00470b30(void)
// Decompiled by Ghidra 12.1.2


void FUN_00470b30(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  undefined1 *puVar8;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    uVar1 = __ftol();
    *(undefined4 *)((int)&DAT_03003950 + iVar3) = uVar1;
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x44);
  iVar3 = 0;
  do {
    *(int *)((int)&DAT_02fff530 + iVar3) = 0x10 - *(int *)((int)&DAT_02fd2858 + iVar3);
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x44);
  piVar4 = &DAT_02fff3c0;
  do {
    FUN_00482010();
    iVar3 = __ftol();
    if (0x7fffffff < iVar3) {
      iVar3 = 0x7fffffff;
    }
    *piVar4 = iVar3;
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0x2fff4c0);
  puVar8 = &DAT_02fff4c0;
  do {
    iVar5 = 0;
    iVar3 = iVar2;
    do {
      puVar8[iVar5] = (char)(iVar3 % 3) + -1;
      iVar3 = iVar3 / 3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    puVar8 = puVar8 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)puVar8 < 0x2fff520);
  iVar2 = 0;
  puVar8 = &DAT_03003788;
  do {
    iVar5 = 0;
    iVar3 = iVar2;
    do {
      puVar8[iVar5] = (char)(iVar3 % 5) + -2;
      iVar3 = iVar3 / 5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    puVar8 = puVar8 + 3;
    iVar2 = iVar2 + 1;
  } while ((int)puVar8 < 0x3003908);
  iVar2 = 0;
  psVar6 = &DAT_02fff874;
  do {
    iVar5 = 3;
    iVar3 = iVar2;
    psVar7 = psVar6;
    do {
      psVar6 = psVar7 + 1;
      *psVar7 = (short)(iVar3 % 9) + -4;
      iVar3 = iVar3 / 9;
      iVar5 = iVar5 + -1;
      psVar7 = psVar6;
    } while (iVar5 != 0);
    iVar2 = iVar2 + 1;
  } while ((int)psVar6 < 0x3001074);
  return;
}

