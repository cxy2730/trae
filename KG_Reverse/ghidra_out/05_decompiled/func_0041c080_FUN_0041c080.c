// Function: FUN_0041c080
// Entry:    0041c080
// Size:     943 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c080(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0041c080(undefined4 param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined8 local_2c;
  undefined **local_20 [2];
  byte *local_18;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049ee08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004062a0();
  local_4 = 0;
  FUN_0041bfe0(param_1,local_20,0);
  if (((local_10 == 0) || (local_18 == (byte *)0x0)) || (*local_18 == 0)) goto LAB_0041c401;
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  iVar2 = 0;
  do {
    bVar1 = *local_18;
    if (((bVar1 == 0) || (bVar1 < 0x30)) || (0x39 < bVar1)) break;
    local_18 = local_18 + 1;
    iVar2 = iVar2 + 1;
    local_3c = (bVar1 - 0x30) + local_3c * 10;
  } while (iVar2 < 4);
  iVar2 = local_3c;
  bVar1 = *local_18;
  if (bVar1 != 0) {
    if (((bVar1 == 0x2f) || (bVar1 == 0x2d)) || ((bVar1 == 0x3a || (bVar1 == 0x2e)))) {
      local_18 = local_18 + 1;
    }
    else if (CONCAT11(bVar1,local_18[1]) == -0x3b16) {
      local_18 = local_18 + 2;
    }
  }
  iVar3 = 0;
  do {
    bVar1 = *local_18;
    if (((bVar1 == 0) || (bVar1 < 0x30)) || (0x39 < bVar1)) break;
    local_18 = local_18 + 1;
    iVar3 = iVar3 + 1;
    local_40 = (bVar1 - 0x30) + local_40 * 10;
  } while (iVar3 < 2);
  iVar3 = local_40;
  bVar1 = *local_18;
  if (bVar1 == 0) {
LAB_0041c1b1:
    iVar4 = 0;
  }
  else {
    if (((bVar1 == 0x2f) || (bVar1 == 0x2d)) || ((bVar1 == 0x3a || (bVar1 == 0x2e)))) {
      local_18 = local_18 + 1;
      goto LAB_0041c1b1;
    }
    if (CONCAT11(bVar1,local_18[1]) != -0x2b3e) goto LAB_0041c1b1;
    local_18 = local_18 + 2;
    iVar4 = 0;
  }
  do {
    bVar1 = *local_18;
    if (((bVar1 == 0) || (bVar1 < 0x30)) || (0x39 < bVar1)) break;
    local_18 = local_18 + 1;
    iVar4 = iVar4 + 1;
    local_48 = (bVar1 - 0x30) + local_48 * 10;
  } while (iVar4 < 2);
  iVar4 = local_48;
  bVar1 = *local_18;
  if (bVar1 == 0) {
LAB_0041c224:
    iVar5 = 0;
    local_44 = 0;
  }
  else {
    if ((((bVar1 == 0x2f) || (bVar1 == 0x2d)) || (bVar1 == 0x3a)) ||
       ((bVar1 == 0x20 || (bVar1 == 0x2e)))) {
      local_18 = local_18 + 1;
      goto LAB_0041c224;
    }
    if (CONCAT11(bVar1,local_18[1]) != -0x372b) goto LAB_0041c224;
    local_18 = local_18 + 2;
    local_44 = 0;
    iVar5 = 0;
  }
  do {
    bVar1 = *local_18;
    if (((bVar1 == 0) || (bVar1 < 0x30)) || (0x39 < bVar1)) break;
    local_18 = local_18 + 1;
    iVar5 = iVar5 + 1;
    local_44 = (bVar1 - 0x30) + local_44 * 10;
  } while (iVar5 < 2);
  bVar1 = *local_18;
  if (bVar1 != 0) {
    if ((((bVar1 == 0x2f) || (bVar1 == 0x2d)) || (bVar1 == 0x3a)) || (bVar1 == 0x2e)) {
      local_18 = local_18 + 1;
    }
    else if (CONCAT11(bVar1,local_18[1]) == -0x354f) {
      local_18 = local_18 + 2;
    }
  }
  iVar5 = 0;
  local_38 = 0;
  do {
    bVar1 = *local_18;
    if (((bVar1 == 0) || (bVar1 < 0x30)) || (0x39 < bVar1)) break;
    local_18 = local_18 + 1;
    iVar5 = iVar5 + 1;
    local_38 = (bVar1 - 0x30) + local_38 * 10;
  } while (iVar5 < 2);
  iVar5 = local_38;
  bVar1 = *local_18;
  if (bVar1 != 0) {
    if (((bVar1 == 0x2f) || (bVar1 == 0x2d)) || ((bVar1 == 0x3a || (bVar1 == 0x2e)))) {
      local_18 = local_18 + 1;
    }
    else if (CONCAT11(bVar1,local_18[1]) == -0x482a) {
      local_18 = local_18 + 2;
    }
  }
  iVar6 = 0;
  local_34 = 0;
  do {
    bVar1 = *local_18;
    if (((bVar1 == 0) || (bVar1 < 0x30)) || (0x39 < bVar1)) break;
    local_18 = local_18 + 1;
    iVar6 = iVar6 + 1;
    local_34 = (bVar1 - 0x30) + local_34 * 10;
  } while (iVar6 < 2);
  iVar6 = local_34;
  if ((*local_18 == 0) || (CONCAT11(*local_18,local_18[1]) == -0x3c15)) {
    local_30 = local_44;
    FUN_0041ba60(&local_3c,&local_40,&local_48,&local_44,&local_38,&local_34);
    if ((((iVar2 == local_3c) && ((iVar3 == local_40 && (iVar4 == local_48)))) &&
        (local_30 == local_44)) && ((iVar5 == local_38 && (iVar6 == local_34)))) {
      FUN_00481676(local_3c,local_40,local_48,local_44,local_38,local_34);
      local_4 = 0xffffffff;
      local_20[0] = &PTR_FUN_02f95a00;
      *param_2 = local_2c;
      FUN_004064a0();
      ExceptionList = local_c;
      return 1;
    }
  }
LAB_0041c401:
  local_4 = 0xffffffff;
  local_20[0] = &PTR_FUN_02f95a00;
  FUN_004064a0();
  ExceptionList = local_c;
  return 0;
}

