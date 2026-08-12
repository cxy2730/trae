// Function: FUN_0046e260
// Entry:    0046e260
// Size:     76 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e260(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046e260(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FUN_00475a20(param_1,param_2,param_3);
  uVar2 = 0;
  do {
    if ((uVar2 & 1) == 0) {
      uVar1 = *(undefined1 *)(uVar2 + param_3);
      *(undefined1 *)(uVar2 + param_3) = *(undefined1 *)(uVar2 + 1 + param_3);
      *(undefined1 *)(uVar2 + 1 + param_3) = uVar1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x20);
  iVar3 = 0;
  puVar4 = (undefined1 *)(param_3 + 0x1f);
  do {
    uVar1 = *(undefined1 *)(iVar3 + param_3);
    *(undefined1 *)(iVar3 + param_3) = *puVar4;
    *puVar4 = uVar1;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + -1;
  } while (iVar3 < 0x10);
  return;
}

