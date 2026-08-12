// Function: FUN_0040dd20
// Entry:    0040dd20
// Size:     174 bytes
// Conv:     unknown
// Signature: undefined FUN_0040dd20(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0040dd20(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e2c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004952bc();
  FUN_00427750(0);
  puVar6 = (undefined4 *)0x0;
  uVar8 = 0;
  iVar7 = 0;
  uVar9 = 5;
  local_4 = 0;
  FUN_00415c70(*(undefined4 *)(param_1 + 0x70),0xffffffff);
  puVar3 = *(undefined4 **)(param_1 + 0x6c);
  puVar5 = puVar6;
  for (uVar1 = *(uint *)(param_1 + 0x70) & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  iVar4 = 0;
  iVar2 = iVar7;
  if (0 < iVar7) {
    do {
      FUN_00436e30(0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar7);
  }
  if (puVar6 != (undefined4 *)0x0) {
    FUN_00492f40(puVar6,puVar6,iVar2,uVar8,uVar9);
  }
  ExceptionList = local_c;
  return;
}

