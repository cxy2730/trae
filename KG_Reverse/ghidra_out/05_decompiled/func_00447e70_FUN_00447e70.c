// Function: FUN_00447e70
// Entry:    00447e70
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_00447e70(void)
// Decompiled by Ghidra 12.1.2


void FUN_00447e70(int param_1,undefined4 param_2,int param_3)

{
  if (((*(uint *)(param_1 + 0x74) & 1) == 0) || ((*(uint *)(param_1 + 0x74) & 4) == 0)) {
    FUN_00446680(param_1,s_out_of_place_02fb25b0);
  }
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x18;
  FUN_004479f0(param_1,param_3);
  if (param_3 != 0) {
    FUN_004467e0(param_1,s_invalid_02fb25a8);
  }
  return;
}

