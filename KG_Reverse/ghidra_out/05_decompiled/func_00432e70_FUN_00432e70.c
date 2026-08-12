// Function: FUN_00432e70
// Entry:    00432e70
// Size:     317 bytes
// Conv:     unknown
// Signature: undefined FUN_00432e70(void)
// Decompiled by Ghidra 12.1.2


int __thiscall
FUN_00432e70(int param_1,undefined4 param_2,int param_3,int param_4,undefined2 *param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004062a0();
  local_4 = 0;
  if (param_5 == (undefined2 *)0x0) {
    param_5 = (undefined2 *)FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    iVar2 = FUN_00431c90(param_2,param_5);
    if (iVar2 != 0) {
      local_4 = 0xffffffff;
      FUN_004064a0();
      ExceptionList = local_c;
      return iVar2;
    }
  }
  sVar1 = param_5[1];
  iVar3 = FUN_00432b10(param_5,param_3);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  puVar7 = (undefined4 *)(iVar3 + 4);
  iVar3 = (sVar1 - param_3) * (iVar2 + 4);
  if (0 < iVar3) {
    FUN_00483180((undefined1 *)(iVar2 + 4 + (int)puVar7),puVar7,iVar3);
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
  puVar6 = (undefined4 *)(param_4 + 8);
  puVar8 = puVar7;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + (int)puVar7) =
       *(undefined4 *)(param_4 + 4);
  *param_5 = 1;
  param_5[1] = param_5[1] + 1;
  iVar2 = FUN_00431e20(param_2,param_5);
  local_4 = 0xffffffff;
  FUN_004064a0();
  ExceptionList = local_c;
  return iVar2;
}

