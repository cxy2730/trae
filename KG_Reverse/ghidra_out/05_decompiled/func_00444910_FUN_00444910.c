// Function: FUN_00444910
// Entry:    00444910
// Size:     641 bytes
// Conv:     unknown
// Signature: undefined FUN_00444910(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00444910(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00444e30(*(undefined4 *)(param_1 + 0x50));
  iVar2 = FUN_00444e80(*(undefined4 *)(param_1 + 0x50));
  if (param_2 == 0x28) {
    if (iVar1 != -3) {
      if (iVar1 == -2) {
        if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
          iVar2 = -3;
          iVar1 = -3;
          goto LAB_00444b27;
        }
      }
      else {
        iVar1 = iVar1 + 1;
        iVar3 = FUN_00444dc0(iVar1,iVar2);
        if (-1 < iVar3) goto LAB_00444b27;
        if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
          iVar2 = -2;
          iVar1 = -2;
          goto LAB_00444b27;
        }
        if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
          iVar2 = -3;
          iVar1 = -3;
          goto LAB_00444b27;
        }
      }
    }
LAB_00444a8f:
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    if (param_2 == 0x26) {
      if (iVar1 == -3) {
        if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
          iVar2 = -2;
          iVar1 = -2;
          goto LAB_00444b27;
        }
      }
      else {
        if (iVar1 == -2) {
          iVar1 = FUN_00444e30(*(int *)(param_1 + 0x3c) + -1);
          iVar2 = *(int *)(param_1 + 0x3c) + -1;
          goto LAB_00444b1e;
        }
        if (0 < iVar1) {
          iVar1 = iVar1 + -1;
          goto LAB_00444b27;
        }
        if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
          iVar2 = -3;
          iVar1 = -3;
          goto LAB_00444b27;
        }
        if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
          iVar2 = -2;
          iVar1 = -2;
          goto LAB_00444b27;
        }
      }
LAB_00444abe:
      iVar1 = FUN_00444e30(*(int *)(param_1 + 0x3c) + -1);
      iVar2 = *(int *)(param_1 + 0x3c) + -1;
    }
    else {
      if (param_2 == 0x27) {
        if (iVar1 == -3) {
LAB_00444a25:
          iVar2 = 0;
          iVar1 = 0;
        }
        else if (iVar1 == -2) {
          if (*(int *)(*(int *)(param_1 + 0x58) + -8) == 0) goto LAB_00444a25;
          iVar2 = -3;
          iVar1 = -3;
        }
        else if (iVar2 < *(int *)(param_1 + 0x40) + -1) {
          iVar2 = iVar2 + 1;
        }
        else {
          iVar2 = 0;
          iVar1 = iVar1 + 1;
        }
        iVar3 = FUN_00444dc0(iVar1,iVar2);
        if (iVar3 != -1) goto LAB_00444b27;
        if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
          iVar2 = -2;
          iVar1 = -2;
          goto LAB_00444b27;
        }
        if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
          iVar2 = -3;
          iVar1 = -3;
          goto LAB_00444b27;
        }
        goto LAB_00444a8f;
      }
      if (param_2 != 0x25) {
        if (param_2 == 0x1b) {
          *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xa0);
          FUN_00445430(0x83ed);
          return;
        }
        if ((param_2 != 0xd) && (param_2 != 0x20)) {
          FUN_00494b19();
          return;
        }
        FUN_00445430(0x83ec);
        return;
      }
      if (iVar1 == -3) {
        if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
          iVar2 = -2;
          iVar1 = -2;
          goto LAB_00444b27;
        }
      }
      else {
        if (iVar1 == -2) goto LAB_00444abe;
        if (0 < iVar2) {
          iVar2 = iVar2 + -1;
          goto LAB_00444b27;
        }
        if (0 < iVar1) {
          iVar1 = iVar1 + -1;
          iVar2 = *(int *)(param_1 + 0x40) + -1;
          goto LAB_00444b27;
        }
        if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
          iVar2 = -3;
          iVar1 = -3;
          goto LAB_00444b27;
        }
        if (*(int *)(*(int *)(param_1 + 0x5c) + -8) != 0) {
          iVar2 = -2;
          iVar1 = -2;
          goto LAB_00444b27;
        }
      }
      iVar1 = FUN_00444e30(*(int *)(param_1 + 0x3c) + -1);
      iVar2 = *(int *)(param_1 + 0x3c) + -1;
    }
LAB_00444b1e:
    iVar2 = FUN_00444e80(iVar2);
  }
LAB_00444b27:
  uVar4 = FUN_00444dc0(iVar1,iVar2);
  FUN_00445340(uVar4);
  FUN_00494b19();
  return;
}

