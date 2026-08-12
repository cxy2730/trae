// Function: FUN_00446ac0
// Entry:    00446ac0
// Size:     73 bytes
// Conv:     unknown
// Signature: undefined FUN_00446ac0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00446ac0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_328 [202];
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1;
    puVar3 = local_328;
    for (iVar1 = 0xca; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    puVar2 = param_1;
    for (iVar1 = 0xca; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_00446d20(local_328,param_1);
    FUN_00446870(local_328);
  }
  return;
}

