// Function: FUN_0042a260
// Entry:    0042a260
// Size:     220 bytes
// Conv:     unknown
// Signature: undefined FUN_0042a260(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0042a260(int param_1,undefined4 *param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049fd28;
  local_c = ExceptionList;
  if ((*(byte *)(param_1 + 0x44) & 2) == 0) {
    local_24 = 0;
    *param_2 = 0;
  }
  else {
    local_24 = *(undefined4 *)(param_1 + 100);
    local_28 = *(undefined4 *)(param_1 + 0x60);
    if (DAT_02fe8c60 == 0) {
      ExceptionList = &local_c;
      FUN_00499b75(0);
      local_4 = 0;
      FUN_00442c00(local_20,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c));
      FUN_00499aa3(&local_28);
      FUN_00499b0c(&local_28);
      local_4 = 0xffffffff;
      FID_conflict__CClientDC();
    }
    else {
      ExceptionList = &local_c;
      FUN_00499aa3(&local_28);
      FUN_00499b0c(&local_28);
    }
    *param_2 = local_28;
  }
  param_2[1] = local_24;
  ExceptionList = local_c;
  return;
}

