// Function: FUN_00448df0
// Entry:    00448df0
// Size:     649 bytes
// Conv:     unknown
// Signature: undefined FUN_00448df0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00448df0(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  byte local_108;
  byte local_107;
  byte local_106;
  byte local_105;
  byte local_104;
  byte local_103;
  ushort local_102;
  undefined1 local_100 [256];
  
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else {
    if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_out_of_place_02fb25b0);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_duplicate_02fb25fc);
      return;
    }
  }
  cVar1 = *(char *)(param_1 + 0x157);
  if (cVar1 == '\0') {
    if (param_3 != 2) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_invalid_02fb25a8);
      return;
    }
    FUN_004479c0(param_1,&local_102,2);
    *(undefined2 *)(param_1 + 0x150) = 1;
    *(ushort *)(param_1 + 0x1c0) = local_102 * 0x100 + (local_102 >> 8);
  }
  else if (cVar1 == '\x02') {
    if (param_3 != 6) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_invalid_02fb25a8);
      return;
    }
    FUN_004479c0(param_1,&local_108,6);
    *(ushort *)(param_1 + 0x1ba) = (ushort)local_108 * 0x100 + (ushort)local_107;
    *(undefined2 *)(param_1 + 0x150) = 1;
    *(ushort *)(param_1 + 0x1bc) = (ushort)local_106 * 0x100 + (ushort)local_105;
    *(ushort *)(param_1 + 0x1be) = (ushort)local_104 * 0x100 + (ushort)local_103;
  }
  else {
    if (cVar1 != '\x03') {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_invalid_with_alpha_channel_02fb27c4);
      return;
    }
    if ((*(byte *)(param_1 + 0x74) & 2) == 0) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_out_of_place_02fb25b0);
      return;
    }
    if (((*(ushort *)(param_1 + 0x148) < param_3) || (0x100 < param_3)) || (param_3 == 0)) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_invalid_02fb25a8);
      return;
    }
    FUN_004479c0(param_1,local_100,param_3);
    *(short *)(param_1 + 0x150) = (short)param_3;
  }
  iVar2 = FUN_004479f0(param_1,0);
  if (iVar2 != 0) {
    *(undefined2 *)(param_1 + 0x150) = 0;
    return;
  }
  FUN_00450f90(param_1,param_2,local_100,*(undefined2 *)(param_1 + 0x150),param_1 + 0x1b8);
  return;
}

