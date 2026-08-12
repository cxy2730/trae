// Function: FUN_00449af0
// Entry:    00449af0
// Size:     235 bytes
// Conv:     unknown
// Signature: undefined FUN_00449af0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00449af0(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte local_10;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  short local_8;
  undefined1 local_6;
  undefined1 local_5;
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
  if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x200) != 0)) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_duplicate_02fb25fc);
    return;
  }
  if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 8;
  }
  if (param_3 != 7) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_invalid_02fb25a8);
    return;
  }
  FUN_004479c0(param_1,&local_10,7);
  iVar1 = FUN_004479f0(param_1,0);
  if (iVar1 == 0) {
    local_2 = local_a;
    local_3 = local_b;
    local_4 = local_c;
    local_5 = local_d;
    local_6 = local_e;
    local_8 = (ushort)local_10 * 0x100 + (ushort)local_f;
    FUN_00450f10(param_1,param_2,&local_8);
  }
  return;
}

