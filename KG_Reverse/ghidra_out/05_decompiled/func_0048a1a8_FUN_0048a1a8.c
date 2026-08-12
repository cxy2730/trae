// Function: FUN_0048a1a8
// Entry:    0048a1a8
// Size:     93 bytes
// Conv:     unknown
// Signature: undefined FUN_0048a1a8(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0048a1a8(byte *param_1,byte *param_2,uint *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
LAB_0048a1ff:
    uVar2 = 1;
  }
  else {
    if (iVar1 == *(int *)(param_2 + 4)) {
LAB_0048a1d9:
      if (((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
          (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
         (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))) goto LAB_0048a1ff;
    }
    else {
      iVar1 = _strcmp((char *)(iVar1 + 8),(char *)(*(int *)(param_2 + 4) + 8));
      if (iVar1 == 0) goto LAB_0048a1d9;
    }
    uVar2 = 0;
  }
  return uVar2;
}

