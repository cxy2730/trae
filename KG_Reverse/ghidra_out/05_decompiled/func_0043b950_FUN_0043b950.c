// Function: FUN_0043b950
// Entry:    0043b950
// Size:     421 bytes
// Conv:     unknown
// Signature: undefined FUN_0043b950(void)
// Decompiled by Ghidra 12.1.2


int FUN_0043b950(undefined4 param_1,int *param_2,uint *param_3,code *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *local_298 [33];
  undefined1 local_214 [64];
  undefined4 local_1d4;
  int local_1d0;
  int local_164;
  uint local_160;
  int local_15c;
  int local_158;
  uint local_148;
  
  *param_2 = 0;
  *param_3 = 0;
  local_1d4 = FUN_00446350(local_298);
  local_298[0] = &DAT_0043bb00;
  iVar1 = __setjmp3(local_214,0);
  if (iVar1 != 0) {
    FUN_00445ca0(&local_1d4);
    return 0;
  }
  FUN_00445c00(&local_1d4,0x3d,0x1d0);
  FUN_00446220(&local_1d4,param_1);
  FUN_00445cb0(&local_1d4,1);
  FUN_00445fe0(&local_1d4);
  iVar1 = (*param_4)(local_160 * local_164 * 3);
  if (iVar1 != 0) {
    *param_2 = local_164;
    *param_3 = local_160;
    puVar2 = (undefined4 *)(**(code **)(local_1d0 + 8))(&local_1d4,1,local_158 * local_164,1);
    if (local_148 < local_160) {
      do {
        FUN_00446190(&local_1d4,puVar2,1);
        if (local_15c == 3) {
          FUN_0043bb20(*puVar2,*param_2,iVar1,local_148 - 1);
        }
        else if (local_15c == 1) {
          FUN_0043bb70(*puVar2,*param_2,iVar1,local_148 - 1);
        }
      } while (local_148 < local_160);
    }
    FUN_00445f30(&local_1d4);
    FUN_00445ca0(&local_1d4);
    return iVar1;
  }
  FUN_00445ca0(&local_1d4);
  return 0;
}

