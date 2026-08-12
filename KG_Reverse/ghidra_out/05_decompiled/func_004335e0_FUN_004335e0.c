// Function: FUN_004335e0
// Entry:    004335e0
// Size:     997 bytes
// Conv:     unknown
// Signature: undefined FUN_004335e0(void)
// Decompiled by Ghidra 12.1.2


int __thiscall
FUN_004335e0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 local_f0;
  int local_ec;
  undefined **local_e8;
  int local_d4;
  undefined **local_d0;
  int local_bc;
  undefined1 local_b8 [84];
  int local_64 [22];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004a0506;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004062a0();
  local_4 = 0;
  puVar3 = (undefined2 *)
           FUN_004062c0(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4 +
                        *(int *)(*(int *)(param_1 + 4) + 8));
  iVar4 = FUN_00433430(param_2,&local_d4,param_4,param_5,puVar3);
  if (iVar4 != 0) {
LAB_00433659:
    local_4 = 0xffffffff;
    local_e8 = &PTR_FUN_02f96460;
    FUN_004064a0();
    ExceptionList = local_c;
    return iVar4;
  }
  if ((local_d4 == -1) || (param_3 < local_d4)) {
LAB_00433723:
    iVar4 = *param_5;
    if (*(int *)(iVar4 + 0xc) < *(int *)(*(int *)(param_1 + 4) + 0x10)) {
      iVar4 = FUN_00432fb0(*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x10),param_2,param_3,
                           puVar3);
      local_4 = 0xffffffff;
      local_e8 = &PTR_FUN_02f96460;
      FUN_004064a0();
      ExceptionList = local_c;
      return iVar4;
    }
    FUN_004062a0();
    local_4 = CONCAT31(local_4._1_3_,1);
    uVar5 = FUN_004062c0(*(int *)(*(int *)(param_1 + 4) + 0xc) + 4 +
                         *(int *)(*(int *)(param_1 + 4) + 8));
    local_bc = *(int *)(*param_5 + 8);
    local_f0 = uVar5;
    local_ec = FUN_004330e0(local_b8,uVar5);
    if (local_ec != 0) {
LAB_004337c3:
      local_4 = local_4 & 0xffffff00;
      local_d0 = &PTR_FUN_02f96460;
      FUN_004064a0();
      local_4 = 0xffffffff;
      local_e8 = &PTR_FUN_02f96460;
      FUN_004064a0();
      ExceptionList = local_c;
      return local_ec;
    }
    iVar4 = FUN_00433140(&local_bc,puVar3,*(undefined4 *)(*param_5 + 0x10),param_2,param_3,uVar5);
    if (iVar4 == 0) {
      piVar9 = &local_bc;
      piVar8 = local_64;
      for (puVar1 = *(undefined4 **)*param_5; piVar2 = piVar9, puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        if ((int)puVar1[3] < *(int *)(*(int *)(param_1 + 4) + 0x10)) {
          if (puVar1 != (undefined4 *)0x0) {
            FUN_00432e70(puVar1[2],puVar1[4],piVar2,0);
            goto LAB_00433976;
          }
          break;
        }
        *piVar8 = puVar1[2];
        local_ec = FUN_004330e0(piVar8 + 1,local_f0);
        if ((local_ec != 0) ||
           (local_ec = FUN_004332a0(piVar8,puVar1[4],piVar2,puVar3,local_f0), local_ec != 0))
        goto LAB_004337c3;
        local_ec = 0;
        piVar9 = piVar8;
        piVar8 = piVar2;
      }
      iVar4 = FUN_004330e0(&local_f0,puVar3);
      if (iVar4 == 0) {
        FUN_00406ca0(puVar3,*(undefined4 *)(*(int *)(param_1 + 4) + 8));
        *puVar3 = 1;
        puVar3[1] = 1;
        *(int *)(puVar3 + 2) = *piVar2;
        uVar7 = *(uint *)(*(int *)(param_1 + 4) + 0xc);
        piVar8 = piVar2 + 2;
        piVar9 = (int *)(puVar3 + 4);
        for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *piVar9 = *piVar8;
          piVar8 = piVar8 + 1;
          piVar9 = piVar9 + 1;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(char *)piVar9 = (char)*piVar8;
          piVar8 = (int *)((int)piVar8 + 1);
          piVar9 = (int *)((int)piVar9 + 1);
        }
        *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 8 + (int)puVar3) = piVar2[1];
        iVar4 = FUN_00431e20(local_f0,puVar3);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x3c) = local_f0;
LAB_00433976:
          local_4 = local_4 & 0xffffff00;
          local_d0 = &PTR_FUN_02f96460;
          FUN_004064a0();
          goto LAB_0043399f;
        }
      }
    }
    local_4 = local_4 & 0xffffff00;
    local_d0 = &PTR_FUN_02f96460;
    FUN_004064a0();
    local_4 = 0xffffffff;
    local_e8 = &PTR_FUN_02f96460;
    FUN_004064a0();
  }
  else {
    if (param_3 != local_d4) {
      while (iVar4 = FUN_00432cf0(param_4,param_5,puVar3), iVar4 != -0x39) {
        if (iVar4 != 0) goto LAB_00433659;
        local_d4 = FUN_00432b50(puVar3,*(undefined4 *)(*param_5 + 0x10));
        if (param_3 == local_d4) goto LAB_0043399f;
        uVar5 = FUN_00432b30(puVar3,*(undefined4 *)(*param_5 + 0x10));
        iVar4 = FUN_004325d0(param_2,uVar5);
        if ((iVar4 != 0) || (param_3 < local_d4)) goto LAB_00433723;
      }
      *(int *)(*param_5 + 0x10) = *(int *)(*param_5 + 0x10) + 1;
      goto LAB_00433723;
    }
LAB_0043399f:
    local_4 = 0xffffffff;
    local_e8 = &PTR_FUN_02f96460;
    FUN_004064a0();
    iVar4 = 0;
  }
  ExceptionList = local_c;
  return iVar4;
}

