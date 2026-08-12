// Function: FUN_00432fb0
// Entry:    00432fb0
// Size:     300 bytes
// Conv:     unknown
// Signature: undefined FUN_00432fb0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall
FUN_00432fb0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 param_5,
            undefined2 *param_6)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a04b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004062a0();
  local_4 = 0;
  if (param_6 == (undefined2 *)0x0) {
    param_6 = (undefined2 *)FUN_004062c0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
    iVar2 = FUN_00431c90(param_2,param_6);
    if (iVar2 != 0) {
      local_4 = 0xffffffff;
      FUN_004064a0();
      ExceptionList = local_c;
      return iVar2;
    }
  }
  sVar1 = param_6[1];
  puVar3 = (undefined4 *)FUN_00432b10(param_6,param_3);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0xc);
  iVar6 = (sVar1 - param_3) * (iVar2 + 4);
  if (0 < iVar6) {
    FUN_00483180((undefined1 *)(iVar2 + 4 + (int)puVar3),puVar3,iVar6);
  }
  *puVar3 = param_5;
  uVar5 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
  for (uVar4 = uVar5 >> 2; puVar3 = puVar3 + 1, uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_4;
    param_4 = (undefined4 *)((int)param_4 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *param_6 = 0;
  param_6[1] = param_6[1] + 1;
  iVar2 = FUN_00431e20(param_2,param_6);
  local_4 = 0xffffffff;
  FUN_004064a0();
  ExceptionList = local_c;
  return iVar2;
}

