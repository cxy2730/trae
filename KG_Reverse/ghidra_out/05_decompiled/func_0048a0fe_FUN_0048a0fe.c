// Function: FUN_0048a0fe
// Entry:    0048a0fe
// Size:     170 bytes
// Conv:     unknown
// Signature: undefined FUN_0048a0fe(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048a0fe(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint local_c;
  uint local_8;
  
  iVar1 = FUN_004871ba();
  if ((*(int *)(iVar1 + 0x68) != 0) &&
     (iVar1 = FUN_0048291e(param_1,param_2,param_3,param_4,param_5,param_7,param_8), iVar1 != 0)) {
    return;
  }
  piVar2 = (int *)FUN_00482a49(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar2 <= param_6) && (param_6 <= piVar2[1])) {
      iVar3 = piVar2[3] * 0x10 + piVar2[4];
      iVar1 = *(int *)(iVar3 + -0xc);
      if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
        FUN_0048a2b9(param_1,param_2,param_3,param_4,param_5,iVar3 + -0x10,0,piVar2,param_7,param_8,
                     1);
      }
    }
    piVar2 = piVar2 + 5;
  }
  return;
}

