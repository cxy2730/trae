// Function: FUN_004845b7
// Entry:    004845b7
// Size:     164 bytes
// Conv:     unknown
// Signature: undefined FUN_004845b7(void)
// Decompiled by Ghidra 12.1.2


int FUN_004845b7(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  FUN_00489a54(2);
  iVar3 = 0;
  if (0 < DAT_03016200) {
    do {
      iVar1 = *(int *)(DAT_030151f8 + iVar3 * 4);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_00483b48(iVar3,iVar1);
        iVar1 = *(int *)(DAT_030151f8 + iVar3 * 4);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_00484524(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if ((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) {
            iVar1 = FUN_00484524(iVar1);
            if (iVar1 == -1) {
              iVar4 = -1;
            }
          }
        }
        FUN_00483b9a(iVar3,*(undefined4 *)(DAT_030151f8 + iVar3 * 4));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_03016200);
  }
  FUN_00489ab5(2);
  if (param_1 != 1) {
    iVar2 = iVar4;
  }
  return iVar2;
}

