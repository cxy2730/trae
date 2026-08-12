// Function: FUN_004254e0
// Entry:    004254e0
// Size:     563 bytes
// Conv:     unknown
// Signature: undefined FUN_004254e0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004254e0(int param_1,byte param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_3 + 0x48) = 0;
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x94);
  if ((uVar3 & 1) == 0) {
    if ((uVar3 & 2) != 0) {
      return 0xffffff9a;
    }
    if ((uVar3 & 4) != 0) {
      *(uint *)(param_1 + 0x94) = uVar3 ^ 4;
      if ((*(char *)(param_1 + 0xa4) == -1) && (*(char *)(param_1 + 0xa5) == '/'))
      goto LAB_004255c8;
      iVar2 = FUN_00425a20(param_1 + 0xa0,param_3);
      if (iVar2 != 0) {
        if (iVar2 == -0x68) {
LAB_0042559b:
          *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 4;
          return 0;
        }
        if (iVar2 != -0x69) {
          iVar2 = *(int *)(param_1 + 0x9c);
          goto joined_r0x004255bd;
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      return 0xffffff99;
    }
    FUN_00425460();
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  do {
    do {
      while( true ) {
        *(undefined4 *)(param_1 + 0x90) = 0;
        *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
        iVar2 = 0;
        for (uVar3 = 0;
            (*(int *)(param_1 + 0x60) != 0 &&
            (uVar3 < (uint)((*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x18)));
            uVar3 = uVar3 + 1) {
          pbVar1 = (byte *)(*(int *)(param_1 + 0x60) + iVar2);
          *(byte **)(param_1 + 0x8c) = pbVar1;
          if (((*pbVar1 & 1) == 0) && (*(uint *)(pbVar1 + 0x10) < *(uint *)(param_1 + 0x98))) {
            *(uint *)(param_1 + 0x98) = *(uint *)(pbVar1 + 0x10);
            *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x8c);
          }
          iVar2 = iVar2 + 0x18;
        }
        if (*(int *)(param_1 + 0x90) == 0) {
          *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 1;
          return 0;
        }
        iVar2 = FUN_00425720(*(int *)(param_1 + 0x90),param_1 + 0xa0);
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x94) = *(uint *)(param_1 + 0x94) | 2;
          return 0xffffff9b;
        }
        if ((*(char *)(param_1 + 0xa4) != -1) || (*(char *)(param_1 + 0xa5) != '/')) break;
LAB_004255c8:
        if (*(int *)(param_1 + 0x9c) != 0) {
          FUN_00492f40(*(undefined4 *)(param_1 + 0xac));
          *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
        }
      }
      iVar2 = FUN_00425a20(param_1 + 0xa0,param_3);
    } while (iVar2 == 0);
    if (iVar2 == -0x68) goto LAB_0042559b;
  } while (iVar2 == -0x69);
  iVar2 = *(int *)(param_1 + 0x9c);
joined_r0x004255bd:
  if (iVar2 != 0) {
    FUN_00492f40(*(undefined4 *)(param_1 + 0xac));
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -1;
  }
  return 1;
}

