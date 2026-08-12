// Function: FUN_004023a3
// Entry:    004023a3
// Size:     594 bytes
// Conv:     unknown
// Signature: undefined FUN_004023a3(void)
// Decompiled by Ghidra 12.1.2


undefined1 * FUN_004023a3(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *puStack_58;
  undefined1 **ppuStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 **ppuStack_34;
  undefined1 auStack_30 [8];
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)0x0;
  local_c = 0;
  local_10 = 0;
  local_14 = (undefined1 *)0x0;
  local_18 = 0;
  ppuStack_34 = (undefined1 **)&DAT_004a5ffe;
  puStack_38 = (undefined1 *)*param_1;
  uStack_3c = 0x4023e3;
  ppuStack_34 = (undefined1 **)FUN_0040234c();
  local_1c = (undefined1 *)ppuStack_34;
  if (local_8 != (undefined1 *)0x0) {
    puStack_38 = local_8;
    uStack_3c = 0x4023fa;
    thunk_FUN_0041b7c0();
  }
  local_8 = (undefined1 *)ppuStack_34;
  ppuStack_34 = &local_8;
  puStack_38 = (undefined1 *)0x40240a;
  ppuStack_34 = (undefined1 **)FUN_004025f5();
  local_c = (int)ppuStack_34;
  if (ppuStack_34 != (undefined1 **)0x0) {
    puStack_38 = (undefined1 *)0x402427;
    local_20 = auStack_30;
    local_28 = thunk_FUN_0041b1c0();
    if (local_20 != auStack_30) {
      ppuStack_34 = (undefined1 **)0xd5;
      puStack_38 = (undefined1 *)0x401a335;
      uStack_3c = 6;
      uStack_40 = 0x402440;
      local_28 = thunk_FUN_0041b540();
    }
    if (0 < local_28) {
      bVar1 = true;
      goto LAB_0040245c;
    }
  }
  bVar1 = false;
LAB_0040245c:
  if (bVar1) {
    ppuStack_34 = (undefined1 **)0x0;
    puStack_38 = (undefined1 *)0x0;
    uStack_3c = 0;
    uStack_40 = 0;
    uStack_44 = 0xffffffff;
    iStack_48 = local_c;
    uStack_4c = 0;
    uStack_50 = param_2;
    ppuStack_54 = (undefined1 **)0x402495;
    local_1c = auStack_30;
    uStack_5c = thunk_FUN_0041b1c0();
    if ((undefined4 *)local_1c != &uStack_50) {
      ppuStack_54 = (undefined1 **)0x114;
      puStack_58 = (undefined1 *)0x401a335;
      uStack_5c = 6;
      uStack_60 = 0x4024ae;
      uStack_5c = thunk_FUN_0041b540();
    }
    ppuStack_54 = (undefined1 **)0x80000301;
    puStack_58 = (undefined1 *)0x0;
    uStack_60 = 1;
    uStack_64 = 0x4024cd;
    local_10 = uStack_5c;
    ppuStack_54 = (undefined1 **)thunk_FUN_0041b210();
    local_1c = (undefined1 *)ppuStack_54;
    if (local_14 != (undefined1 *)0x0) {
      puStack_58 = local_14;
      uStack_5c = 0x4024e4;
      thunk_FUN_0041b7c0();
    }
    local_14 = (undefined1 *)ppuStack_54;
    ppuStack_54 = &local_14;
    puStack_58 = (undefined1 *)0x4024f4;
    uStack_60 = FUN_0040220c();
    ppuStack_54 = (undefined1 **)0x0;
    puStack_58 = (undefined1 *)0x0;
    uStack_5c = local_10;
    uStack_64 = 0xffffffff;
    iStack_68 = local_c;
    uStack_6c = 0;
    uStack_70 = param_2;
    local_1c = (undefined1 *)&uStack_50;
    local_18 = uStack_60;
    thunk_FUN_0041b1c0();
    if ((undefined4 *)local_1c != &uStack_70) {
      thunk_FUN_0041b540(6,0x401a335,0x1d4);
    }
    local_1c = (undefined1 *)&uStack_70;
    uStack_3c = thunk_FUN_0041b1c0(local_18);
    if (local_1c != auStack_30) {
      ppuStack_34 = (undefined1 **)0x267;
      puStack_38 = (undefined1 *)0x401a335;
      uStack_3c = 6;
      uStack_40 = 0x40256c;
      uStack_3c = thunk_FUN_0041b540();
    }
    ppuStack_34 = (undefined1 **)0x80000301;
    puStack_38 = (undefined1 *)0x0;
    uStack_40 = 0x80000301;
    uStack_44 = 0;
    iStack_48 = local_18;
    uStack_4c = 2;
    uStack_50 = 0x402590;
    ppuStack_34 = (undefined1 **)thunk_FUN_0041b210();
    local_24 = (undefined1 *)ppuStack_34;
    if (local_14 != (undefined1 *)0x0) {
      puStack_38 = local_14;
      uStack_3c = 0x4025a7;
      thunk_FUN_0041b7c0();
    }
    local_14 = (undefined1 *)ppuStack_34;
  }
  puVar2 = (undefined1 *)0x0;
  if (local_14 != (undefined1 *)0x0) {
    ppuStack_34 = (undefined1 **)local_14;
    puStack_38 = (undefined1 *)(*(int *)(local_14 + 4) + 8);
    uStack_3c = 0x4025c2;
    puVar2 = (undefined1 *)thunk_FUN_0041b6c0();
    puVar3 = puVar2;
    for (; puStack_38 != (undefined1 *)0x0; puStack_38 = (undefined1 *)((int)puStack_38 + -1)) {
      *puVar3 = *(undefined1 *)ppuStack_34;
      ppuStack_34 = (undefined1 **)((int)ppuStack_34 + 1);
      puVar3 = puVar3 + 1;
    }
  }
  ppuStack_34 = (undefined1 **)puVar2;
  if (local_8 != (undefined1 *)0x0) {
    puStack_38 = local_8;
    uStack_3c = 0x4025db;
    thunk_FUN_0041b7c0();
  }
  if (local_14 != (undefined1 *)0x0) {
    puStack_38 = local_14;
    uStack_3c = 0x4025eb;
    thunk_FUN_0041b7c0();
  }
  return (undefined1 *)ppuStack_34;
}

