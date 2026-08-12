// Function: FUN_004047cc
// Entry:    004047cc
// Size:     1217 bytes
// Conv:     unknown
// Signature: undefined FUN_004047cc(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004047cc(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  int *piStack_24;
  undefined1 auStack_20 [4];
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  piStack_24 = (int *)0x28;
  uStack_28 = 0x4047e6;
  local_c = (int *)thunk_FUN_0041b6c0();
  piVar3 = local_c;
  for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  piStack_24 = local_c + 9;
  uStack_28 = 0x10c;
  piStack_2c = (int *)0x404807;
  puVar2 = (undefined4 *)thunk_FUN_0041b6c0();
  local_14 = (int *)auStack_20;
  *piStack_24 = (int)puVar2;
  puVar1 = puVar2 + 1;
  *puVar2 = 1;
  *puVar1 = 0x104;
  for (iVar7 = 0x41; puVar1 = puVar1 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar1 = 0;
  }
  local_10 = (int *)0x0;
  piStack_24 = (int *)0x0;
  uStack_28 = 0xf;
  piStack_2c = (int *)0x40483f;
  piVar3 = (int *)thunk_FUN_0041b1c0();
  if (local_14 != &uStack_28) {
    piStack_2c = (int *)0x19;
    piStack_30 = (int *)0x4019dd7;
    piStack_34 = (int *)0x6;
    piStack_38 = (int *)0x404858;
    piVar3 = (int *)thunk_FUN_0041b540();
  }
  local_8 = piVar3;
  if (piVar3 == (int *)0xffffffff) {
    piStack_2c = (int *)0x0;
  }
  else {
    *local_c = 0x128;
    piStack_2c = local_c;
    piStack_30 = (int *)0x128;
    piStack_34 = (int *)0x404892;
    local_14 = &uStack_28;
    local_18 = (int *)thunk_FUN_0041b6c0();
    local_1c = piStack_2c;
    *local_18 = *piStack_2c;
    local_18[1] = piStack_2c[1];
    local_18[2] = piStack_2c[2];
    local_18[3] = piStack_2c[3];
    local_18[4] = piStack_2c[4];
    local_18[5] = piStack_2c[5];
    local_18[6] = piStack_2c[6];
    local_18[7] = piStack_2c[7];
    local_18[8] = piStack_2c[8];
    puVar6 = (undefined1 *)(piStack_2c[9] + 8);
    piVar3 = local_18 + 9;
    for (iVar7 = 0x104; iVar7 != 0; iVar7 = iVar7 + -1) {
      *(undefined1 *)piVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      piVar3 = (int *)((int)piVar3 + 1);
    }
    piStack_30 = local_8;
    piStack_34 = (int *)0x40491c;
    piStack_2c = local_18;
    piStack_34 = (int *)thunk_FUN_0041b1c0();
    if ((int **)local_14 != &piStack_30) {
      piStack_34 = (int *)0xe1;
      piStack_38 = (int *)0x4019dd7;
      piStack_34 = (int *)thunk_FUN_0041b540(6);
    }
    piStack_38 = local_18;
    *local_1c = *local_18;
    local_1c[1] = local_18[1];
    local_1c[2] = local_18[2];
    local_1c[3] = local_18[3];
    local_1c[4] = local_18[4];
    local_1c[5] = local_18[5];
    local_1c[6] = local_18[6];
    local_1c[7] = local_18[7];
    piVar3 = local_18 + 9;
    local_1c[8] = local_18[8];
    piVar8 = local_1c + 9;
    thunk_FUN_0041b190(1);
    iVar7 = *(int *)*piVar8;
    piVar8 = (int *)*piVar8 + 1;
    iVar4 = 0;
    if (iVar7 != 0) {
      iVar4 = *piVar8;
      while( true ) {
        piVar8 = piVar8 + 1;
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) break;
        iVar4 = iVar4 * *piVar8;
      }
    }
    if (0x104 < iVar4) {
      iVar4 = 0x104;
    }
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(char *)piVar8 = (char)*piVar3;
      piVar3 = (int *)((int)piVar3 + 1);
      piVar8 = (int *)((int)piVar8 + 1);
    }
    thunk_FUN_0041b7c0();
    local_10 = piStack_34;
    while( true ) {
      local_14 = (int *)&piStack_30;
      if (local_10 == (int *)0x0) break;
      local_14 = local_c + 9;
      piStack_34 = (int *)0xa0000101;
      piStack_38 = (int *)0x0;
      local_18 = (int *)thunk_FUN_0041b210(1,*local_14);
      piStack_34 = (int *)0x80000002;
      piStack_38 = (int *)0x0;
      piVar3 = local_18;
      if (local_18 == (int *)0x0) {
        piVar3 = (int *)&DAT_004a5d3c;
      }
      puVar5 = (undefined *)*param_1;
      if (puVar5 == (undefined *)0x0) {
        puVar5 = &DAT_004a5d3c;
      }
      local_1c = (int *)thunk_FUN_0041b210(3,puVar5,0,0x80000004,piVar3,0,0x80000004,param_2);
      if (local_18 != (int *)0x0) {
        piStack_34 = local_18;
        piStack_38 = (int *)0x404a7b;
        thunk_FUN_0041b7c0();
      }
      if (local_1c == (int *)0x0) {
        piStack_34 = local_8;
        piStack_38 = (int *)0x404a98;
        local_14 = (int *)&piStack_30;
        thunk_FUN_0041b1c0();
        if (local_14 != &uStack_28) {
          piStack_2c = (int *)0x1ac;
          piStack_30 = (int *)0x4019dd7;
          piStack_34 = (int *)0x6;
          piStack_38 = (int *)0x404ab1;
          thunk_FUN_0041b540();
        }
        piStack_2c = (int *)0x1;
        goto LAB_00404c69;
      }
      piStack_34 = local_c;
      piStack_38 = (int *)0x128;
      local_14 = (int *)&piStack_30;
      local_18 = (int *)thunk_FUN_0041b6c0();
      local_1c = piStack_34;
      *local_18 = *piStack_34;
      local_18[1] = piStack_34[1];
      local_18[2] = piStack_34[2];
      local_18[3] = piStack_34[3];
      local_18[4] = piStack_34[4];
      local_18[5] = piStack_34[5];
      local_18[6] = piStack_34[6];
      local_18[7] = piStack_34[7];
      local_18[8] = piStack_34[8];
      puVar6 = (undefined1 *)(piStack_34[9] + 8);
      piVar3 = local_18 + 9;
      for (iVar7 = 0x104; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(undefined1 *)piVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        piVar3 = (int *)((int)piVar3 + 1);
      }
      piStack_38 = local_8;
      piStack_34 = local_18;
      puVar6 = (undefined1 *)thunk_FUN_0041b1c0();
      if ((int **)local_14 != &piStack_38) {
        puVar6 = (undefined1 *)thunk_FUN_0041b540(6,0x4019dd7,0x1f7);
      }
      *local_1c = *local_18;
      local_1c[1] = local_18[1];
      local_1c[2] = local_18[2];
      local_1c[3] = local_18[3];
      local_1c[4] = local_18[4];
      local_1c[5] = local_18[5];
      local_1c[6] = local_18[6];
      local_1c[7] = local_18[7];
      local_1c[8] = local_18[8];
      piVar3 = local_18;
      thunk_FUN_0041b190(1,local_1c + 9,local_18 + 9);
      iVar7 = *(int *)*piVar3;
      piVar3 = (int *)*piVar3 + 1;
      iVar4 = 0;
      if (iVar7 != 0) {
        iVar4 = *piVar3;
        while( true ) {
          piVar3 = piVar3 + 1;
          iVar7 = iVar7 + -1;
          if (iVar7 == 0) break;
          iVar4 = iVar4 * *piVar3;
        }
      }
      if (0x104 < iVar4) {
        iVar4 = 0x104;
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)piVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        piVar3 = (int *)((int)piVar3 + 1);
      }
      thunk_FUN_0041b7c0();
      local_10 = piStack_34;
    }
    piStack_34 = local_8;
    piStack_38 = (int *)0x404c43;
    thunk_FUN_0041b1c0();
    if (local_14 != &uStack_28) {
      piStack_2c = (int *)0x22d;
      piStack_30 = (int *)0x4019dd7;
      piStack_34 = (int *)0x6;
      piStack_38 = (int *)0x404c5c;
      thunk_FUN_0041b540();
    }
    piStack_2c = (int *)0x0;
  }
LAB_00404c69:
  piStack_30 = local_c;
  piStack_34 = local_c + 9;
  piStack_38 = (int *)*piStack_34;
  thunk_FUN_0041b7c0();
  piStack_34 = (int *)0x404c83;
  thunk_FUN_0041b7c0();
  return piStack_2c;
}

