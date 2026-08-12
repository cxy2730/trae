// Function: FUN_00449280
// Entry:    00449280
// Size:     318 bytes
// Conv:     unknown
// Signature: undefined FUN_00449280(void)
// Decompiled by Ghidra 12.1.2


void FUN_00449280(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  ushort local_202;
  short local_200 [256];
  
  uVar1 = *(uint *)(param_1 + 0x74);
  if ((uVar1 & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else {
    if (((uVar1 & 4) != 0) || ((uVar1 & 2) == 0)) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_out_of_place_02fb25b0);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x40) != 0)) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_duplicate_02fb25fc);
      return;
    }
  }
  uVar1 = param_3 >> 1;
  if ((uVar1 != *(ushort *)(param_1 + 0x148)) || (0x100 < uVar1)) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_invalid_02fb25a8);
    return;
  }
  if (uVar1 != 0) {
    psVar3 = local_200;
    do {
      FUN_004479c0(param_1,&local_202,2);
      *psVar3 = local_202 * 0x100 + (local_202 >> 8);
      psVar3 = psVar3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  iVar2 = FUN_004479f0(param_1,0);
  if (iVar2 != 0) {
    return;
  }
  FUN_004504b0(param_1,param_2,local_200);
  return;
}

