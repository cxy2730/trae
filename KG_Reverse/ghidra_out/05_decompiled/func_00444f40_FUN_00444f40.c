// Function: FUN_00444f40
// Entry:    00444f40
// Size:     207 bytes
// Conv:     unknown
// Signature: undefined FUN_00444f40(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00444f40(int param_1,int param_2,int *param_3)

{
  int xLeft;
  int iVar1;
  int yTop;
  int xRight;
  
  if (param_2 == -2) {
    iVar1 = *(int *)(param_1 + 0x6c);
    xRight = *(int *)(param_1 + 0x68);
    yTop = *(int *)(param_1 + 100);
    xLeft = *(int *)(param_1 + 0x60);
  }
  else {
    if (param_2 != -3) {
      if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x3c))) {
        iVar1 = FUN_00444e80(param_2);
        *(int *)*param_3 = iVar1 * *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c);
        iVar1 = FUN_00444e30(param_2);
        *(int *)(*param_3 + 4) = iVar1 * *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c);
        if (*(int *)(*(int *)(param_1 + 0x58) + -8) != 0) {
          *(int *)(*param_3 + 4) =
               *(int *)(*param_3 + 4) +
               (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x74)) + *(int *)(param_1 + 0x4c);
        }
        ((int *)*param_3)[2] = *(int *)*param_3 + *(int *)(param_1 + 0x48);
        *(int *)(*param_3 + 0xc) = *(int *)(*param_3 + 4) + *(int *)(param_1 + 0x48);
        return 1;
      }
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x7c);
    xRight = *(int *)(param_1 + 0x78);
    yTop = *(int *)(param_1 + 0x74);
    xLeft = *(int *)(param_1 + 0x70);
  }
  SetRect((LPRECT)*param_3,xLeft,yTop,xRight,iVar1);
  return 1;
}

