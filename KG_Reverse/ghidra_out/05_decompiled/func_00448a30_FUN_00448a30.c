// Function: FUN_00448a30
// Entry:    00448a30
// Size:     278 bytes
// Conv:     unknown
// Signature: undefined FUN_00448a30(void)
// Decompiled by Ghidra 12.1.2


int FUN_00448a30(int param_1,undefined4 param_2,uint param_3,uint *param_4,undefined4 param_5,
                int *param_6,int param_7)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0x11c)) {
    *(undefined4 *)(param_1 + 0x90) = param_5;
    *(undefined4 *)(param_1 + 0x94) = 0;
    do {
      if (*(int *)(param_1 + 0x88) == 0) {
        uVar1 = *param_4;
        if (uVar1 < param_3) {
          param_3 = uVar1;
        }
        *param_4 = uVar1 - param_3;
        if (param_3 != 0) {
          FUN_004479c0(param_1,param_2,param_3);
        }
        *(uint *)(param_1 + 0x88) = param_3;
        *(undefined4 *)(param_1 + 0x84) = param_2;
      }
      if (*(int *)(param_1 + 0x94) == 0) {
        iVar3 = *param_6;
        iVar4 = -1;
        if (iVar3 != -1) {
          iVar4 = iVar3;
        }
        *param_6 = iVar3 - iVar4;
        *(int *)(param_1 + 0x94) = iVar4;
      }
      if (*param_4 == 0) {
        cVar2 = (-(param_7 != 0) & 2U) + 2;
      }
      else {
        cVar2 = '\0';
      }
      iVar3 = FUN_004470b0(param_1 + 0x84,cVar2);
    } while ((iVar3 == 0) && ((*param_6 != 0 || (*(int *)(param_1 + 0x94) != 0))));
    *param_6 = *param_6 + *(int *)(param_1 + 0x94);
    *(undefined4 *)(param_1 + 0x94) = 0;
    FUN_0043cab0(param_1,iVar3);
    return iVar3;
  }
  *(char **)(param_1 + 0x9c) = s_zstream_unclaimed_02fb2720;
  return -2;
}

