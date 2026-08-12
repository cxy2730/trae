// Function: FUN_0043df20
// Entry:    0043df20
// Size:     416 bytes
// Conv:     unknown
// Signature: undefined FUN_0043df20(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043df20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  if (*(char *)(param_1 + 0x261) != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x326) & 2) == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x310);
  local_4 = *(int *)(param_1 + 0x31c);
  local_8 = *(int *)(param_1 + 0x304);
  iVar3 = local_4 + iVar2 + local_8;
  param_1 = iVar2;
  if (((((iVar3 < 1) || (local_8 < 0)) ||
       (iVar2 = FUN_0043e4c0(&local_8,local_8,0x8000,iVar3), iVar2 == 0)) ||
      ((((local_8 < 0 || (0x8000 < local_8)) ||
        ((param_1 < 0 ||
         ((iVar2 = FUN_0043e4c0(&param_1,param_1,0x8000,iVar3), iVar2 == 0 || (param_1 < 0)))))) ||
       (0x8000 < param_1)))) ||
     ((((local_4 < 0 || (iVar2 = FUN_0043e4c0(&local_4,local_4,0x8000,iVar3), iVar2 == 0)) ||
       (local_4 < 0)) ||
      ((0x8000 < local_4 || (iVar2 = local_4 + param_1 + local_8, 0x8001 < iVar2)))))) {
    FUN_004463d0(iVar1,s_internal_error_handling_cHRM_>XY_02fb1790);
    return;
  }
  if (iVar2 < 0x8001) {
    if (0x7fff < iVar2) goto LAB_0043e078;
    iVar2 = 1;
  }
  else {
    iVar2 = -1;
  }
  if (param_1 < local_8) {
LAB_0043e066:
    if (local_4 <= local_8) {
      local_8 = local_8 + iVar2;
      goto LAB_0043e078;
    }
  }
  else {
    if (local_4 <= param_1) {
      param_1 = param_1 + iVar2;
      goto LAB_0043e078;
    }
    if (param_1 <= local_8) goto LAB_0043e066;
  }
  local_4 = local_4 + iVar2;
LAB_0043e078:
  if (local_4 + param_1 + local_8 == 0x8000) {
    *(short *)(iVar1 + 0x262) = (short)local_8;
    *(short *)(iVar1 + 0x264) = (short)param_1;
    return;
  }
  FUN_004463d0(iVar1,s_internal_error_handling_cHRM_coe_02fb17b4);
  return;
}

