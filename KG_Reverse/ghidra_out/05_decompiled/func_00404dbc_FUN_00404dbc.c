// Function: FUN_00404dbc
// Entry:    00404dbc
// Size:     484 bytes
// Conv:     unknown
// Signature: undefined FUN_00404dbc(void)
// Decompiled by Ghidra 12.1.2


undefined1 * FUN_00404dbc(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  int *piStack_30;
  undefined1 auStack_2c [4];
  undefined1 *local_28;
  double local_24;
  undefined8 local_1c;
  undefined1 *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = (undefined1 *)0x0;
  piStack_30 = (int *)&DAT_02ee8650;
  puStack_34 = (undefined1 *)*param_1;
  uStack_38 = 0x404df5;
  piStack_30 = (int *)FUN_0040234c();
  local_1c._4_4_ = (undefined1 *)piStack_30;
  if (local_8 != 0) {
    puStack_34 = (undefined1 *)local_8;
    uStack_38 = 0x404e0c;
    thunk_FUN_0041b7c0();
  }
  local_8 = (int)piStack_30;
  piStack_30 = &local_8;
  puStack_34 = (undefined1 *)0x404e1c;
  piStack_30 = (int *)FUN_004025f5();
  local_c = (int)piStack_30;
  if (piStack_30 != (int *)0x0) {
    puStack_34 = (undefined1 *)0x404e39;
    local_1c._0_4_ = (undefined4 *)auStack_2c;
    iVar2 = thunk_FUN_0041b1c0();
    if ((undefined4 *)local_1c != (undefined4 *)auStack_2c) {
      piStack_30 = (int *)0xcc;
      puStack_34 = (undefined1 *)0x401a334;
      uStack_38 = 6;
      iStack_3c = 0x404e55;
      iVar2 = thunk_FUN_0041b540();
    }
    local_24 = (double)CONCAT44(local_24._4_4_,iVar2);
    if (0 < iVar2) {
      bVar1 = true;
      goto LAB_00404e71;
    }
  }
  bVar1 = false;
LAB_00404e71:
  if (bVar1) {
    piStack_30 = (int *)0x0;
    puStack_34 = (undefined1 *)0x0;
    uStack_38 = 0xffffffff;
    iStack_3c = local_c;
    uStack_40 = 0;
    uStack_44 = param_2;
    local_1c._4_4_ = auStack_2c;
    iVar2 = thunk_FUN_0041b1c0();
    if ((undefined4 *)local_1c._4_4_ != &uStack_44) {
      iVar2 = thunk_FUN_0041b540(6,0x401a334,0x10b);
    }
    local_1c = (double)iVar2;
    local_24 = local_1c * 2.0;
    local_10 = iVar2;
    uVar3 = FUN_00401c3a();
    puVar4 = (undefined1 *)thunk_FUN_0041b210(1,uVar3,0,0x80000301);
    local_28 = puVar4;
    if (local_14 != (undefined1 *)0x0) {
      thunk_FUN_0041b7c0(local_14);
    }
    local_14 = puVar4;
    local_1c._4_4_ = (undefined1 *)FUN_0040220c(&local_14);
    local_1c._0_4_ = &uStack_44;
    thunk_FUN_0041b1c0(param_2,0,local_c,0xffffffff,local_1c._4_4_,local_10);
    if ((undefined4 *)local_1c != (undefined4 *)auStack_2c) {
      piStack_30 = (int *)0x1d3;
      puStack_34 = (undefined1 *)0x401a334;
      uStack_38 = 6;
      iStack_3c = 0x404f56;
      thunk_FUN_0041b540();
    }
  }
  puVar4 = (undefined1 *)0x0;
  if (local_14 != (undefined1 *)0x0) {
    piStack_30 = (int *)local_14;
    puStack_34 = (undefined1 *)(*(int *)(local_14 + 4) + 8);
    uStack_38 = 0x404f6d;
    puVar4 = (undefined1 *)thunk_FUN_0041b6c0();
    puVar5 = puVar4;
    for (; puStack_34 != (undefined1 *)0x0; puStack_34 = (undefined1 *)((int)puStack_34 + -1)) {
      *puVar5 = *(undefined1 *)piStack_30;
      piStack_30 = (int *)((int)piStack_30 + 1);
      puVar5 = puVar5 + 1;
    }
  }
  piStack_30 = (int *)puVar4;
  if (local_8 != 0) {
    puStack_34 = (undefined1 *)local_8;
    uStack_38 = 0x404f86;
    thunk_FUN_0041b7c0();
  }
  if (local_14 != (undefined1 *)0x0) {
    puStack_34 = local_14;
    uStack_38 = 0x404f96;
    thunk_FUN_0041b7c0();
  }
  return (undefined1 *)piStack_30;
}

