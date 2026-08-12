// Function: FUN_00431360
// Entry:    00431360
// Size:     1615 bytes
// Conv:     unknown
// Signature: undefined FUN_00431360(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00431360(int param_1,int *param_2,uint param_3,int param_4,int *param_5)

{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int local_278 [132];
  int local_68;
  undefined **local_64 [5];
  undefined4 local_50 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar2 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a0380;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd7c;
  ExceptionList = &local_10;
  if (param_5 != (int *)0x0) {
    ExceptionList = &local_10;
    *param_5 = 0;
  }
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(*(int *)(param_1 + 4) + 4) == -1)) {
    ExceptionList = pvVar2;
    return -0x3b;
  }
  local_18 = 0;
  local_68 = param_1;
  FUN_004062a0();
  local_8 = 0;
  puVar11 = local_50;
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  local_50[0] = 0x54444557;
  local_50[1] = 0x10000;
  local_20 = 0;
  local_1c = 0;
  FUN_00493768();
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar7 = 0;
  for (; 0 < (int)param_3; param_3 = param_3 - local_278[2]) {
    if (param_4 == 0) {
      if (local_20 == 0) {
        local_18 = FUN_00430fe0(*(undefined4 *)(param_1 + 4),0,1);
        if (local_18 != 0) goto code_r0x004319c5;
        local_20 = 1;
        (**(code **)(**(int **)(param_1 + 4) + 0x28))(0,0);
        iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(local_50,0x20);
        if (iVar7 != 0x20) {
          local_18 = 0xffffffc5;
          iVar7 = FUN_004319c5();
          return iVar7;
        }
      }
      iVar7 = local_38;
      if (local_3c < 1) {
        local_30 = local_40;
        iVar7 = local_40;
        local_40 = local_40 + 1;
      }
      else {
        local_30 = local_38;
        (**(code **)(**(int **)(param_1 + 4) + 0x28))(local_38 << 9,0);
        iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(&local_2c,0xc);
        if (iVar3 != 0xc) {
          local_18 = 0xffffffc5;
          iVar7 = FUN_004319c5();
          return iVar7;
        }
        local_38 = local_28;
        local_3c = local_3c + -1;
      }
    }
    else {
      local_30 = param_4;
      iVar7 = param_4;
    }
    if ((param_5 != (int *)0x0) && (*param_5 == 0)) {
      *param_5 = iVar7;
    }
    local_18 = FUN_00431140(*(undefined4 *)(param_1 + 4),iVar7 << 9,local_64);
    if (local_18 != 0) goto code_r0x004319c5;
    if (param_4 != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar7 << 9,0);
      iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(&local_2c,0xc);
      if (iVar7 != 0xc) {
        local_18 = 0xffffffc5;
        iVar7 = FUN_004319c5();
        return iVar7;
      }
      param_4 = local_28;
    }
    if (local_1c != 0) {
      local_278[1] = local_30;
      iVar7 = local_1c << 9;
      (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar7,0);
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(local_278,0x200);
      FUN_004311a0(*(undefined4 *)(param_1 + 4),iVar7,local_64);
    }
    local_278[2] = param_3;
    if (500 < param_3) {
      local_278[2] = 500;
    }
    if (param_2 == (int *)0x0) {
      piVar9 = local_278 + 3;
      for (iVar7 = 0x7d; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      }
    }
    else {
      piVar9 = param_2;
      piVar10 = local_278 + 3;
      for (uVar8 = (uint)local_278[2] >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *piVar10 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar10 = piVar10 + 1;
      }
      for (uVar8 = local_278[2] & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(char *)piVar10 = (char)*piVar9;
        piVar9 = (int *)((int)piVar9 + 1);
        piVar10 = (int *)((int)piVar10 + 1);
      }
      puVar11 = (undefined4 *)((int)local_278 + local_278[2] + 0xcU);
      for (uVar8 = 500U - local_278[2] >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = 500U - local_278[2] & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = 0;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      param_2 = (int *)((int)param_2 + local_278[2]);
    }
    local_278[0] = local_1c;
    local_1c = local_30;
    local_278[1] = 0;
    iVar7 = local_30;
  }
  if (iVar7 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar7 << 9,0);
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(local_278,0x200);
  }
  if (param_4 != 0) {
    if (local_20 == 0) {
      local_18 = FUN_00430fe0(*(undefined4 *)(param_1 + 4),0,1);
      if (local_18 != 0) goto code_r0x004319c5;
      local_20 = 1;
      (**(code **)(**(int **)(param_1 + 4) + 0x28))(0,0);
      iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(local_50,0x20);
      if (iVar7 != 0x20) {
        local_18 = 0xffffffc5;
        iVar7 = FUN_004319c5();
        return iVar7;
      }
    }
    piVar9 = local_278;
    for (iVar7 = 0x80; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = 0;
      piVar9 = piVar9 + 1;
    }
    local_1c = 0;
    param_3 = 0;
    bVar1 = false;
    FUN_00431200(*(undefined4 *)(param_1 + 4),local_64,0);
    param_2 = (int *)param_4;
    while (!bVar1) {
      if (param_2 == (int *)(local_40 + -1)) {
        local_1c = 1;
      }
      iVar7 = (int)param_2 << 9;
      local_18 = FUN_00431290(*(undefined4 *)(param_1 + 4),iVar7,local_64);
      if (local_18 != 0) goto code_r0x004319c5;
      (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar7,0);
      iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(local_278,0xc);
      if (iVar3 != 0xc) {
        local_18 = 0xffffffc5;
        iVar7 = FUN_004319c5();
        return iVar7;
      }
      local_278[2] = 0;
      if (param_3 == 0) {
        local_278[0] = 0;
      }
      if (local_278[1] == 0) {
        bVar1 = true;
        local_278[1] = local_38;
        if (local_38 != 0) {
          iVar3 = local_38 << 9;
          iVar4 = FUN_00431140(*(undefined4 *)(param_1 + 4),iVar3,local_64);
          local_18 = iVar4;
          if (iVar4 != 0) goto code_r0x004319c5;
          iVar6 = iVar3;
          (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar3,0);
          uVar12 = 0xc;
          iVar5 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(&local_2c,0xc);
          if (iVar5 != 0xc) {
            local_18 = 0xffffffc5;
            iVar7 = FUN_004319c5(uVar12,iVar6,iVar4);
            return iVar7;
          }
          local_2c = (int)param_2;
          (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar3,0);
          (**(code **)(**(int **)(param_1 + 4) + 0x38))(&local_2c,0xc);
          FUN_004311a0(*(undefined4 *)(param_1 + 4),iVar3,local_64);
        }
      }
      (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar7,0);
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(local_278,0x200);
      param_3 = param_3 + 1;
      param_2 = (int *)local_278[1];
    }
    local_3c = local_3c + param_3;
    local_38 = param_4;
    FUN_00431200(*(undefined4 *)(param_1 + 4),local_64,0);
    if (local_1c == 1) {
      param_2 = (int *)(local_40 + -1);
      while (0 < (int)param_2) {
        local_18 = FUN_00431290(*(undefined4 *)(param_1 + 4),(int)param_2 << 9,local_64);
        if (local_18 != 0) break;
        (**(code **)(**(int **)(param_1 + 4) + 0x28))((int)param_2 << 9,0);
        iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(&local_2c,0xc);
        iVar3 = local_28;
        iVar7 = local_2c;
        if (iVar4 != 0xc) {
          local_18 = -0x3b;
          break;
        }
        if (0 < local_24) break;
        if (param_2 != (int *)local_38) {
          if (local_2c == 0) goto LAB_004318df;
          iVar4 = local_2c << 9;
          (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar4,0);
          iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(&local_2c,0xc);
          if (iVar6 == 0xc) {
            (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar4,0);
            (**(code **)(**(int **)(param_1 + 4) + 0x38))(&local_2c,0xc);
            goto LAB_004318df;
          }
LAB_0043193b:
          local_18 = -0x3b;
          break;
        }
        iVar7 = 0;
        local_38 = local_28;
LAB_004318df:
        if (iVar3 != 0) {
          iVar3 = iVar3 << 9;
          (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar3,0);
          iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0x34))(&local_2c,0xc);
          if (iVar4 != 0xc) goto LAB_0043193b;
          local_2c = iVar7;
          (**(code **)(**(int **)(param_1 + 4) + 0x28))(iVar3,0);
          (**(code **)(**(int **)(param_1 + 4) + 0x38))(&local_2c,0xc);
        }
        param_2 = (int *)((int)param_2 + -1);
        if (0 < local_3c) {
          local_3c = local_3c + -1;
        }
      }
      FUN_00431200(*(undefined4 *)(param_1 + 4),local_64,0);
      iVar7 = (int)param_2 + 1;
      if (local_40 != iVar7) {
        local_40 = iVar7;
        (**(code **)(**(int **)(param_1 + 4) + 0x2c))(iVar7 * 0x200);
      }
      if (local_18 != 0) goto code_r0x004319c5;
    }
  }
  if (local_20 == 1) {
    uVar14 = 0;
    uVar13 = 0;
    (**(code **)(**(int **)(param_1 + 4) + 0x28))(0,0);
    uVar12 = 0x20;
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(local_50,0x20);
    iVar7 = FUN_004319c5(uVar12,uVar13,uVar14);
    return iVar7;
  }
code_r0x004319c5:
  local_8 = 0;
  FUN_004937a6();
  if (local_20 == 1) {
    FUN_00430fe0(*(undefined4 *)(param_1 + 4),0,0);
  }
  FUN_00431200(*(undefined4 *)(param_1 + 4),local_64,0);
  local_8 = 0xffffffff;
  local_64[0] = &PTR_FUN_02f9645c;
  FUN_004064a0();
  ExceptionList = local_10;
  return local_18;
}

