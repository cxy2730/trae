// Function: FUN_00414b60
// Entry:    00414b60
// Size:     443 bytes
// Conv:     unknown
// Signature: undefined FUN_00414b60(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00414b60(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_4;
  
  if (*(int *)(param_1 + 0x1d4) < 1) {
    local_4 = param_1;
    iVar1 = FUN_0040ec30(param_2,&local_4,0);
    if (iVar1 == 0) {
      FUN_00412f90(&DAT_02faaf48,0,param_2,0);
      return 0;
    }
    if (param_3 == 0) {
      piVar2 = (int *)FUN_0040e730(0,0);
    }
    else {
      piVar2 = (int *)FUN_0040e7b0(param_3,0,0);
    }
    if (piVar2 == (int *)0x0) {
      FUN_00412f90(&DAT_02faaf2c,0,param_2,param_3);
      return 0;
    }
    iVar1 = *piVar2;
    do {
      piVar3 = piVar2;
      if ((piVar3[1] == 0) || (piVar2 = (int *)FUN_0040e7b0(piVar3[1],0,0), piVar2 == (int *)0x0))
      break;
    } while (*piVar2 == iVar1);
    iVar4 = FUN_00413290(iVar1,0);
    if ((iVar4 == 0) || ((*(byte *)(iVar4 + 0x14) & 0x44) == 0)) {
      FUN_00412f90(&DAT_02faaf14,0,param_2,param_3);
    }
    else {
      if (iVar1 == 0x10003) {
        iVar4 = FUN_00406cf0(piVar3 + 6);
        iVar4 = (int)(piVar3 + 6) + iVar4;
        iVar1 = FUN_00406cf0(iVar4);
        iVar1 = iVar4 + 0xc + iVar1;
        iVar4 = FUN_00406cf0(iVar1);
        iVar1 = *(int *)(iVar1 + iVar4);
      }
      else {
        iVar5 = FUN_00406cf0(piVar3 + 6);
        iVar5 = (int)(piVar3 + 6) + iVar5;
        iVar1 = FUN_00406cf0(iVar5);
        iVar4 = *(int *)(iVar5 + 0x1c + iVar1);
        iVar1 = iVar5 + 0x1c + iVar1;
        iVar1 = *(int *)(iVar1 + 4 + iVar4 * 4) + iVar1 + 8 + iVar4 * 4;
        iVar5 = FUN_00406cf0(iVar1);
        iVar4 = *(int *)(iVar5 + 0xc + iVar1);
        piVar2 = (int *)(iVar5 + iVar1 + 0x10);
        iVar1 = 0;
        if (iVar4 < 1) {
          return 0;
        }
        while (*piVar2 != param_4) {
          piVar2 = piVar2 + 2;
          iVar1 = iVar1 + 1;
          if (iVar4 <= iVar1) {
            return 0;
          }
        }
        iVar1 = piVar2[1];
      }
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x1e4) = param_2;
        if (param_3 != 0) {
          *(int *)(param_1 + 0x1e8) = param_3;
          return iVar1;
        }
        uVar6 = FUN_0040e780(0);
        *(undefined4 *)(param_1 + 0x1e8) = uVar6;
        return iVar1;
      }
    }
  }
  return 0;
}

