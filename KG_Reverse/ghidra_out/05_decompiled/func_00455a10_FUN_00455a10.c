// Function: FUN_00455a10
// Entry:    00455a10
// Size:     113 bytes
// Conv:     unknown
// Signature: undefined FUN_00455a10(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00455a10(int *param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar2 = param_1[1];
  uVar3 = uVar2;
  if (param_3 < uVar2) {
    uVar3 = param_3;
  }
  if (uVar3 == 0) {
    return 0;
  }
  param_1[1] = uVar2 - uVar3;
  if (*(int *)(param_1[7] + 0x18) == 0) {
    iVar1 = FUN_004474e0(param_1[0xc],*param_1,uVar3);
    param_1[0xc] = iVar1;
  }
  puVar4 = (undefined4 *)*param_1;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  *param_1 = *param_1 + uVar3;
  param_1[2] = param_1[2] + uVar3;
  return uVar3;
}

