// Function: FUN_0040189a
// Entry:    0040189a
// Size:     692 bytes
// Conv:     unknown
// Signature: undefined FUN_0040189a(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0040189a(undefined4 *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puStack_3c;
  char *pcStack_38;
  undefined *puStack_34;
  char *pcStack_30;
  undefined *puStack_2c;
  char *pcStack_28;
  undefined *puStack_24;
  undefined4 *puStack_20;
  undefined *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  undefined4 *local_c;
  undefined *local_8;
  
  local_8 = (undefined *)0x0;
  puStack_20 = (undefined4 *)0xc;
  puStack_24 = (undefined *)0x4018b4;
  local_c = (undefined4 *)thunk_FUN_0041b6c0();
  *local_c = 0;
  local_c[1] = 0;
  local_c[2] = 0;
  puStack_20 = (undefined4 *)0x80000301;
  puStack_24 = (undefined *)0x0;
  pcStack_28 = (char *)0xb;
  puStack_2c = (undefined *)0x1;
  pcStack_30 = (char *)0x4018f0;
  local_10 = (undefined1 *)thunk_FUN_0041b1d0();
  puStack_20 = (undefined4 *)0x0;
  puStack_24 = (undefined *)0x401905;
  pcStack_28 = (char *)thunk_FUN_0041b210();
  puStack_20 = (undefined4 *)0x80000301;
  puStack_24 = (undefined *)0x0;
  puStack_2c = (undefined *)0x1;
  pcStack_30 = (char *)0x40191f;
  puStack_20 = (undefined4 *)thunk_FUN_0041b210();
  puStack_24 = local_10;
  pcStack_28 = (char *)0x401935;
  local_18 = (undefined1 *)puStack_20;
  local_1c = (undefined *)FUN_00401383();
  if (local_10 != (undefined *)0x0) {
    puStack_20 = (undefined4 *)local_10;
    puStack_24 = (undefined *)0x401948;
    thunk_FUN_0041b7c0();
  }
  if (local_18 != (undefined1 *)0x0) {
    puStack_20 = (undefined4 *)local_18;
    puStack_24 = (undefined *)0x401958;
    thunk_FUN_0041b7c0();
  }
  puStack_20 = (undefined4 *)local_1c;
  if (local_8 != (undefined *)0x0) {
    puStack_24 = local_8;
    pcStack_28 = (char *)0x40196c;
    thunk_FUN_0041b7c0();
  }
  puStack_24 = (undefined *)puStack_20;
  local_10 = (undefined1 *)&local_1c;
  local_8 = (undefined *)puStack_20;
  puStack_20 = local_c;
  pcStack_28 = (char *)0x401986;
  thunk_FUN_0041b1c0();
  if ((undefined **)local_10 != &puStack_24) {
    pcStack_28 = (char *)0x6f;
    puStack_2c = (undefined *)0x4023f3c;
    pcStack_30 = (char *)0x6;
    puStack_34 = (undefined *)0x40199f;
    thunk_FUN_0041b540();
  }
  pcStack_28 = "\\....\\";
  puStack_2c = local_8;
  pcStack_30 = (char *)0x4019b4;
  puStack_2c = (undefined *)FUN_00401383();
  pcStack_28 = (char *)local_c;
  pcStack_30 = (char *)0x4019cd;
  local_14 = (undefined1 *)&puStack_24;
  local_10 = puStack_2c;
  thunk_FUN_0041b1c0();
  if ((undefined **)local_14 != &puStack_2c) {
    pcStack_30 = (char *)0xa2;
    puStack_34 = (undefined *)0x4023f3c;
    pcStack_38 = (char *)0x6;
    puStack_3c = (undefined *)0x4019e6;
    thunk_FUN_0041b540();
  }
  if (local_10 != (undefined *)0x0) {
    pcStack_30 = local_10;
    puStack_34 = (undefined *)0x4019f6;
    thunk_FUN_0041b7c0();
  }
  pcStack_30 = "\\....\\TemporaryFile";
  puStack_34 = local_8;
  pcStack_38 = (char *)0x401a0b;
  pcStack_30 = (char *)FUN_00401383();
  puStack_34 = (undefined *)*param_1;
  pcStack_38 = (char *)0x401a26;
  local_14 = (undefined1 *)&puStack_2c;
  local_10 = pcStack_30;
  thunk_FUN_0041b1c0();
  if ((undefined **)local_14 != &puStack_34) {
    pcStack_38 = (char *)0xe9;
    puStack_3c = (undefined *)0x4023f3c;
    thunk_FUN_0041b540(6);
  }
  if (local_10 != (undefined1 *)0x0) {
    pcStack_38 = local_10;
    puStack_3c = (undefined *)0x401a4f;
    thunk_FUN_0041b7c0();
  }
  pcStack_38 = "\\....\\";
  puStack_3c = local_8;
  local_10 = (undefined1 *)FUN_00401383();
  pcStack_38 = "\\TemporaryFile";
  puStack_3c = local_8;
  pcStack_38 = (char *)FUN_00401383();
  puStack_3c = local_10;
  local_18 = (undefined1 *)&puStack_34;
  local_14 = pcStack_38;
  thunk_FUN_0041b1c0();
  if ((undefined **)local_18 != &puStack_3c) {
    thunk_FUN_0041b540(6,0x4023f3c,0x155);
  }
  if (local_10 != (undefined *)0x0) {
    thunk_FUN_0041b7c0(local_10);
  }
  if (local_14 != (undefined1 *)0x0) {
    thunk_FUN_0041b7c0(local_14);
  }
  puVar1 = local_8;
  if (local_8 == (undefined *)0x0) {
    puVar1 = &DAT_004a5d3c;
  }
  thunk_FUN_0041b210(1,puVar1,0,0x80000004);
  puVar1 = (undefined *)*param_1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_004a5d3c;
  }
  uVar2 = thunk_FUN_0041b210(1,puVar1,0,0x80000004);
  uVar2 = uVar2 & 1 ^ 1;
  if (local_8 != (undefined *)0x0) {
    thunk_FUN_0041b7c0(local_8);
  }
  thunk_FUN_0041b7c0(local_c);
  return uVar2;
}

