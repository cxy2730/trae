// Function: FUN_00432b70
// Entry:    00432b70
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_00432b70(void)
// Decompiled by Ghidra 12.1.2


int FUN_00432b70(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00431c90(param_1,param_2);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_00432580();
    piVar2[2] = param_1;
    piVar2[3] = (int)*(short *)(param_2 + 2);
    if (*param_4 != 0) {
      *(int **)(*param_4 + 4) = piVar2;
      *piVar2 = *param_4;
    }
    *param_4 = (int)piVar2;
    if (*param_3 == 0) {
      *param_3 = (int)piVar2;
    }
    iVar1 = 0;
  }
  return iVar1;
}

