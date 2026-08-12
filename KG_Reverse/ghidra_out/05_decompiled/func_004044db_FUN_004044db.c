// Function: FUN_004044db
// Entry:    004044db
// Size:     753 bytes
// Conv:     unknown
// Signature: undefined FUN_004044db(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004044db(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  puStack_28 = (undefined4 *)0x8;
  puStack_2c = (undefined4 *)0x4044fc;
  local_10 = (undefined4 *)thunk_FUN_0041b6c0();
  *local_10 = 0;
  local_10[1] = 0;
  puStack_28 = (undefined4 *)0x10;
  puStack_2c = (undefined4 *)0x40451b;
  local_14 = (undefined4 *)thunk_FUN_0041b6c0();
  local_1c = (undefined1 *)&uStack_24;
  *local_14 = 0;
  local_14[1] = 0;
  local_14[2] = 0;
  local_14[3] = 0;
  local_18 = 0;
  if (param_1 == 0) {
    puStack_28 = (undefined4 *)0x40455c;
    local_1c = (undefined1 *)&uStack_24;
    iVar1 = thunk_FUN_0041b1c0();
    if ((undefined4 *)local_1c != &uStack_24) {
      puStack_28 = (undefined4 *)0x4f;
      puStack_2c = (undefined4 *)0x4019e11;
      iStack_30 = 6;
      puStack_34 = (undefined4 *)0x404575;
      iVar1 = thunk_FUN_0041b540();
    }
  }
  else {
    puStack_28 = (undefined4 *)param_1;
    puStack_2c = (undefined4 *)0x0;
    iStack_30 = 0x1f0fff;
    puStack_34 = (undefined4 *)0x40459a;
    iVar1 = thunk_FUN_0041b1c0();
    if ((undefined4 *)local_1c != &uStack_24) {
      puStack_28 = (undefined4 *)0x7d;
      puStack_2c = (undefined4 *)0x4019e11;
      iStack_30 = 6;
      puStack_34 = (undefined4 *)0x4045b3;
      iVar1 = thunk_FUN_0041b540();
    }
  }
  local_8 = iVar1;
  if (local_8 == 0) {
    puStack_28 = (undefined4 *)0;
  }
  else {
    puStack_28 = (undefined4 *)0x80000301;
    puStack_2c = (undefined4 *)0x0;
    iStack_30 = 0x20;
    puStack_34 = (undefined4 *)0x80000301;
    pcStack_38 = (char *)0x0;
    uStack_3c = 8;
    uStack_40 = 2;
    uStack_44 = 0x4045f4;
    puStack_2c = (undefined4 *)thunk_FUN_0041b210();
    puStack_28 = &local_c;
    iStack_30 = local_8;
    puStack_34 = (undefined4 *)0x404611;
    local_20 = &uStack_24;
    local_1c = (undefined1 *)puStack_2c;
    iVar1 = thunk_FUN_0041b1c0();
    if (local_20 != &iStack_30) {
      puStack_34 = (undefined4 *)0x121;
      pcStack_38 = (char *)0x4019e11;
      uStack_3c = 6;
      uStack_40 = 0x40462a;
      iVar1 = thunk_FUN_0041b540();
    }
    if (iVar1 != 0) {
      if (param_4 == 0) {
        puStack_34 = local_10;
        pcStack_38 = "SeDebugPrivilege";
        uStack_3c = 0;
        uStack_40 = 0x404659;
        local_1c = (undefined1 *)&iStack_30;
        thunk_FUN_0041b1c0();
        if ((undefined4 *)local_1c != &uStack_3c) {
          uStack_40 = 0x174;
          uStack_44 = 0x4019e11;
          uStack_48 = 6;
          puStack_4c = (undefined4 *)0x404672;
          thunk_FUN_0041b540();
        }
      }
      else {
        puStack_34 = local_10;
        pcStack_38 = (char *)*param_3;
        uStack_3c = 0;
        uStack_40 = 0x404694;
        local_1c = (undefined1 *)&iStack_30;
        thunk_FUN_0041b1c0();
        if ((undefined4 *)local_1c != &uStack_3c) {
          uStack_40 = 0x199;
          uStack_44 = 0x4019e11;
          uStack_48 = 6;
          puStack_4c = (undefined4 *)0x4046ad;
          thunk_FUN_0041b540();
        }
      }
      local_1c = (undefined1 *)&uStack_3c;
      *local_14 = 1;
      local_14[1] = *local_10;
      local_20 = local_10 + 1;
      local_14[2] = *local_20;
      local_14[3] = 2;
      uStack_40 = 0;
      uStack_44 = 0;
      uStack_48 = 0x10;
      puStack_4c = local_14;
      uStack_50 = 0;
      uStack_54 = local_c;
      uVar2 = thunk_FUN_0041b1c0();
      if ((undefined4 *)local_1c != &uStack_54) {
        uVar2 = thunk_FUN_0041b540(6,0x4019e11,0x294);
      }
      local_1c = (undefined1 *)&uStack_54;
      local_18 = uVar2;
      thunk_FUN_0041b1c0(local_c);
      if ((int *)local_1c != &iStack_30) {
        puStack_34 = (undefined4 *)0x2cc;
        pcStack_38 = (char *)0x4019e11;
        uStack_3c = 6;
        uStack_40 = 0x404775;
        thunk_FUN_0041b540();
      }
    }
    local_1c = (undefined1 *)&iStack_30;
    puStack_34 = (undefined4 *)local_8;
    pcStack_38 = (char *)0x404788;
    thunk_FUN_0041b1c0();
    puStack_28 = (undefined4 *)local_18;
    if ((undefined4 *)local_1c != &uStack_24) {
      puStack_28 = (undefined4 *)0x2e8;
      puStack_2c = (undefined4 *)0x4019e11;
      iStack_30 = 6;
      puStack_34 = (undefined4 *)0x4047a1;
      thunk_FUN_0041b540();
      puStack_28 = (undefined4 *)local_18;
    }
  }
  puStack_2c = local_10;
  iStack_30 = 0x4047b6;
  thunk_FUN_0041b7c0();
  puStack_2c = local_14;
  iStack_30 = 0x4047c2;
  thunk_FUN_0041b7c0();
  return puStack_28;
}

