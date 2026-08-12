// Function: FUN_00401d0d
// Entry:    00401d0d
// Size:     1133 bytes
// Conv:     unknown
// Signature: undefined FUN_00401d0d(void)
// Decompiled by Ghidra 12.1.2


undefined * FUN_00401d0d(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int local_44;
  double local_40;
  undefined8 local_38;
  double local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)0x0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  puVar2 = (undefined1 *)thunk_FUN_0041b210(1,0x208,0,0x80000301);
  local_20._4_4_ = puVar2;
  if (local_8 != (undefined1 *)0x0) {
    thunk_FUN_0041b7c0(local_8);
  }
  local_8 = puVar2;
  local_c = FUN_0040220c(&local_8);
  uVar3 = (uint)(param_4 == 0);
  local_20 = (double)CONCAT44(local_20._4_4_,uVar3);
  if (uVar3 == 0) {
    local_20 = (double)(ZEXT48(&local_44) << 0x20);
    iVar4 = thunk_FUN_0041b1c0(0,local_c,param_3,0);
    if ((int *)local_20._4_4_ != &local_44) {
      iVar4 = thunk_FUN_0041b540(6,0x401a9d3,0xe9);
    }
    local_28 = (double)CONCAT44(iVar4,(undefined4)local_28);
    if (iVar4 == 0) {
      puVar5 = &DAT_004a5fbc;
    }
    else {
      local_20 = (double)CONCAT44(&local_44,(undefined4)local_20);
      iVar4 = thunk_FUN_0041b1c0(local_c);
      if ((int *)local_20._4_4_ != &local_44) {
        iVar4 = thunk_FUN_0041b540(6,0x401a9d3,0x147);
      }
      local_10 = iVar4;
      if (iVar4 == 0) {
        puVar5 = &DAT_004a5fbc;
      }
      else {
        local_20 = (double)iVar4;
        local_28 = local_20 * 2.0;
        local_30 = (double)local_c;
        local_38 = local_30 + local_28;
        local_40 = local_38 - 2.0;
        uVar6 = FUN_00401c3a(2,0,0x80000301);
        iVar4 = thunk_FUN_0041b210(2,uVar6,0,0x80000301);
        local_44 = iVar4;
        if (local_14 != 0) {
          thunk_FUN_0041b7c0(local_14);
        }
        iVar8 = 0;
        if (iVar4 != 0) {
          iVar8 = *(int *)(iVar4 + 4);
        }
        iVar7 = 1;
        local_14 = iVar4;
        if (iVar8 == 2) {
          iVar7 = FUN_00401c61(iVar4 + 8,&DAT_004a5fd4,2);
        }
        if (iVar7 != 0) {
          local_20 = (double)local_10;
          local_28 = local_20 * 2.0;
          uVar10 = 0x5c;
          uVar6 = FUN_00401c3a(0x5c);
          FUN_00402233(local_c,uVar6,uVar10);
          local_10 = local_10 + 1;
        }
        local_20 = (double)local_10;
        local_28 = local_20 * 2.0;
        local_30 = local_28 + 2.0;
        uVar6 = FUN_00401c3a();
        puVar2 = (undefined1 *)thunk_FUN_0041b210(2,local_c,0,0x80000301,uVar6,0,0x80000301);
        local_38 = (double)CONCAT44(puVar2,(undefined4)local_38);
        if (local_8 != (undefined1 *)0x0) {
          thunk_FUN_0041b7c0(local_8);
        }
        puVar5 = (undefined *)0x0;
        local_8 = puVar2;
        if (puVar2 != (undefined1 *)0x0) {
          iVar4 = *(int *)(puVar2 + 4) + 8;
          puVar5 = (undefined *)thunk_FUN_0041b6c0();
          puVar9 = puVar5;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar9 = puVar9 + 1;
          }
        }
      }
    }
  }
  else {
    if ((param_1 < 1) || (0xd < param_1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      param_1 = 3;
    }
    if ((param_1 < 1) || (10 < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((param_1 < 1) || (10 < param_1)) {
        param_1 = thunk_FUN_0041b540(9,0x401a9d3,0x4cb);
      }
                    /* WARNING: Could not recover jumptable at 0x00402016. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar5 = (undefined *)(*(code *)(*(int *)(&DAT_004a5fd6 + (param_1 + -1) * 4) + 0x40200e))();
      return puVar5;
    }
    if (param_1 == 0xb) {
      local_20 = (double)CONCAT44(&local_44,uVar3);
      iVar4 = thunk_FUN_0041b1c0(0x104,local_c);
      if ((int *)local_20._4_4_ != &local_44) {
        iVar4 = thunk_FUN_0041b540(6,0x401a9d3,0x596);
      }
      local_10 = iVar4;
      if (iVar4 == 0) {
        puVar5 = &DAT_004a5fbc;
      }
      else {
        local_20 = (double)iVar4;
        local_28 = local_20 * 2.0;
        local_30 = local_28 + 2.0;
        uVar6 = FUN_00401c3a();
        puVar2 = (undefined1 *)thunk_FUN_0041b210(2,local_c,0,0x80000301,uVar6,0,0x80000301);
        local_38 = (double)CONCAT44(puVar2,(undefined4)local_38);
        if (local_8 != (undefined1 *)0x0) {
          thunk_FUN_0041b7c0(local_8);
        }
        puVar5 = (undefined *)0x0;
        local_8 = puVar2;
        if (puVar2 != (undefined1 *)0x0) {
          iVar4 = *(int *)(puVar2 + 4) + 8;
          puVar5 = (undefined *)thunk_FUN_0041b6c0();
          puVar9 = puVar5;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar9 = puVar9 + 1;
          }
        }
      }
    }
    else if (param_1 == 0xc) {
      local_20 = (double)(ulonglong)uVar3;
      puVar5 = (undefined *)FUN_00401d0d(0,0,0x20,1);
      local_20 = (double)CONCAT44(local_20._4_4_,puVar5);
    }
    else if (param_1 == 0xd) {
      local_20 = (double)(ulonglong)uVar3;
      puVar5 = (undefined *)FUN_00401d0d(0,0,0x23,1);
      local_20 = (double)CONCAT44(local_20._4_4_,puVar5);
    }
    else {
      puVar5 = &DAT_004a5fbc;
    }
  }
  if (local_8 != (undefined1 *)0x0) {
    thunk_FUN_0041b7c0(local_8);
  }
  if (local_14 != 0) {
    thunk_FUN_0041b7c0(local_14);
  }
  return puVar5;
}

