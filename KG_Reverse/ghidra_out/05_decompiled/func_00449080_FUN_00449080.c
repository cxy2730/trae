// Function: FUN_00449080
// Entry:    00449080
// Size:     502 bytes
// Conv:     unknown
// Signature: undefined FUN_00449080(void)
// Decompiled by Ghidra 12.1.2


void FUN_00449080(int param_1,int param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 local_14;
  byte local_10;
  byte local_f;
  undefined1 local_c [2];
  ushort local_a;
  ushort local_8;
  ushort local_6;
  ushort local_4;
  
  uVar1 = *(uint *)(param_1 + 0x74);
  if ((uVar1 & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else {
    if (((uVar1 & 4) != 0) || ((*(char *)(param_1 + 0x157) == '\x03' && ((uVar1 & 2) == 0)))) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_out_of_place_02fb25b0);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x20) != 0)) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_duplicate_02fb25fc);
      return;
    }
  }
  if (*(byte *)(param_1 + 0x157) == 3) {
    iVar3 = 1;
  }
  else {
    iVar3 = (uint)(*(byte *)(param_1 + 0x157) & 2 | 1) << 1;
  }
  if (param_3 != iVar3) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_invalid_02fb25a8);
    return;
  }
  FUN_004479c0(param_1,&local_14,iVar3);
  iVar3 = FUN_004479f0(param_1,0);
  if (iVar3 != 0) {
    return;
  }
  local_c[0] = (undefined1)local_14;
  uVar2 = (ushort)local_14;
  if (*(byte *)(param_1 + 0x157) == 3) {
    if ((param_2 == 0) || (*(ushort *)(param_2 + 0x14) == 0)) {
      local_6 = 0;
      local_8 = 0;
      local_a = 0;
    }
    else {
      if (*(ushort *)(param_2 + 0x14) <= (uVar2 & 0xff)) {
        FUN_004467e0(param_1,s_invalid_index_02fb27e0);
        return;
      }
      pbVar4 = (byte *)((local_14 & 0xff) * 3 + *(int *)(param_1 + 0x144));
      local_a = (ushort)*pbVar4;
      local_8 = (ushort)pbVar4[1];
      local_6 = (ushort)pbVar4[2];
    }
  }
  else {
    local_c[0] = 0;
    if ((*(byte *)(param_1 + 0x157) & 2) == 0) {
      local_a = uVar2 * 0x100 + ((ushort)(local_14 >> 8) & 0xff);
      local_8 = local_a;
      local_6 = local_a;
      local_4 = local_a;
      goto LAB_00449240;
    }
    local_a = uVar2 * 0x100 + (ushort)(byte)(local_14 >> 8);
    local_8 = (ushort)local_14._2_1_ * 0x100 + (ushort)local_14._3_1_;
    local_6 = (ushort)local_10 * 0x100 + (ushort)local_f;
  }
  local_4 = 0;
LAB_00449240:
  FUN_00450470(param_1,param_2,local_c);
  return;
}

