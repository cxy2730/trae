// Function: FUN_00431c90
// Entry:    00431c90
// Size:     310 bytes
// Conv:     unknown
// Signature: undefined FUN_00431c90(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00431c90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a03d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0 < (int)param_1[0x76]) {
    ExceptionList = &local_10;
    iVar1 = FUN_00406c00(param_1 + 0x77,param_1[0x76],param_2);
    if (iVar1 != -1) {
      if (param_1[0x92] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0x90];
      }
      uVar3 = *(uint *)(param_1[1] + 8);
      puVar5 = (undefined4 *)(uVar3 * iVar1 + iVar4);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_3 = *puVar5;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + 1;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)param_3 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        param_3 = (undefined4 *)((int)param_3 + 1);
      }
      ExceptionList = local_10;
      return 0;
    }
  }
  FUN_00493768();
  iVar4 = *(int *)(param_1[1] + 8) * param_2;
  local_8 = 1;
  (**(code **)(*(int *)*param_1 + 0x28))(iVar4,0);
  uVar6 = *(undefined4 *)(param_1[1] + 8);
  iVar1 = (**(code **)(*(int *)*param_1 + 0x34))(param_3,uVar6);
  if (iVar1 != *(int *)(param_1[1] + 8)) {
    local_8 = 0xffffffff;
    FUN_004937a6();
    ExceptionList = local_10;
    return -0x34;
  }
  iVar1 = FUN_00431b50();
  if (iVar1 == 0) {
    param_1[param_1[0x76] + 0x77] = param_2;
    *(undefined1 *)((int)param_1 + param_1[0x76] + 0x224) = 0;
    FUN_004069d0(param_3,*(undefined4 *)(param_1[1] + 8));
    param_1[0x76] = param_1[0x76] + 1;
    iVar1 = FUN_00431df4(uVar6,iVar4);
    return iVar1;
  }
  local_8 = 0xffffffff;
  FUN_004937a6();
  ExceptionList = local_10;
  return iVar1;
}

