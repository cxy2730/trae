// Function: FUN_00463f90
// Entry:    00463f90
// Size:     167 bytes
// Conv:     unknown
// Signature: undefined FUN_00463f90(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00463f90(int *param_1,int *param_2)

{
  uint dwSize;
  uint uVar1;
  BOOL BVar2;
  uint flNewProtect;
  
  dwSize = param_2[2];
  if (dwSize == 0) {
    return true;
  }
  uVar1 = param_2[3];
  if ((uVar1 & 0x2000000) != 0) {
    if ((*param_2 == param_2[1]) &&
       (((param_2[4] != 0 || (*(uint *)(*param_1 + 0x38) == param_1[0xf])) ||
        (dwSize % (uint)param_1[0xf] == 0)))) {
      (*(code *)param_1[8])(*param_2,dwSize,0x4000,param_1[0xd]);
    }
    return true;
  }
  flNewProtect = *(uint *)(&DAT_02fcc728 +
                          (((uVar1 >> 0x1e & 1) + (uVar1 >> 0x1d & 1) * 2) * 2 -
                          ((int)uVar1 >> 0x1f)) * 4);
  if ((uVar1 & 0x4000000) != 0) {
    flNewProtect = flNewProtect | 0x200;
  }
  BVar2 = VirtualProtect((LPVOID)*param_2,dwSize,flNewProtect,(PDWORD)&param_2);
  return BVar2 != 0;
}

