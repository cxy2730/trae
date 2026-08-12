// Function: FUN_004225f0
// Entry:    004225f0
// Size:     183 bytes
// Conv:     unknown
// Signature: undefined FUN_004225f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004225f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CMemFile local_28 [40];
  
  if ((param_1 != 0) && (0 < param_2)) {
    FUN_0049a8c4(0x400);
    FUN_0049a910(param_1,param_2,0);
    uVar2 = 0;
    uVar1 = FUN_004236b0(local_28);
    switch(uVar1) {
    case 1:
      uVar2 = FUN_00423210(local_28);
      break;
    case 2:
      uVar2 = FUN_00423480(local_28);
      break;
    case 3:
    case 4:
      uVar2 = FUN_004237d0(local_28,1);
      break;
    case 5:
      uVar2 = FUN_00423bc0(local_28);
      break;
    case 6:
    case 7:
      uVar2 = FUN_00424460(param_1,param_2);
      break;
    case 8:
      uVar2 = FUN_004249f0(param_1,param_2);
    }
    CMemFile::~CMemFile(local_28);
    return uVar2;
  }
  return 0;
}

