// Function: FUN_00447fb0
// Entry:    00447fb0
// Size:     354 bytes
// Conv:     unknown
// Signature: undefined FUN_00447fb0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00447fb0(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_4;
  
  local_4 = 0;
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else if ((*(uint *)(param_1 + 0x74) & 6) != 0) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_out_of_place_02fb25b0);
    return;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 2) != 0)) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_duplicate_02fb25fc);
    return;
  }
  uVar1 = 3;
  if (*(char *)(param_1 + 0x157) != '\x03') {
    uVar1 = (uint)*(byte *)(param_1 + 0x15b);
  }
  if ((param_3 == uVar1) && (param_3 < 5)) {
    FUN_004479c0(param_1,&local_4,uVar1);
    iVar2 = FUN_004479f0(param_1,0);
    if (iVar2 == 0) {
      if ((*(byte *)(param_1 + 0x157) & 2) != 0) {
        *(undefined1 *)(param_1 + 0x1a9) = local_4._1_1_;
        *(undefined1 *)(param_1 + 0x1a8) = (undefined1)local_4;
        *(undefined1 *)(param_1 + 0x1aa) = local_4._2_1_;
        *(undefined1 *)(param_1 + 0x1ac) = local_4._3_1_;
        FUN_00450bb0(param_1,param_2,(undefined1 *)(param_1 + 0x1a8));
        return;
      }
      *(undefined1 *)(param_1 + 0x1ab) = (undefined1)local_4;
      *(undefined1 *)(param_1 + 0x1a9) = (undefined1)local_4;
      *(undefined1 *)(param_1 + 0x1a8) = (undefined1)local_4;
      *(undefined1 *)(param_1 + 0x1aa) = (undefined1)local_4;
      *(undefined1 *)(param_1 + 0x1ac) = local_4._1_1_;
      FUN_00450bb0(param_1,param_2,(undefined1 *)(param_1 + 0x1a8));
      return;
    }
  }
  else {
    FUN_004467e0(param_1,s_invalid_02fb25a8);
    FUN_004479f0(param_1,param_3);
  }
  return;
}

