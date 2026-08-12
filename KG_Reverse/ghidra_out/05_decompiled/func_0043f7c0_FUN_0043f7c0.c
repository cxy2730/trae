// Function: FUN_0043f7c0
// Entry:    0043f7c0
// Size:     220 bytes
// Conv:     unknown
// Signature: undefined FUN_0043f7c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043f7c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  piVar1 = param_1;
  if (*param_1 != 0) {
    uVar3 = FUN_0043eea0(param_1,s_png_image_read__opaque_pointer_n_02fb1b14);
    return uVar3;
  }
  param_1 = (int *)FUN_0043eed0(s_1_6_9_02fb1b5c,param_1,&LAB_004469b0,&LAB_00446a20);
  piVar2 = piVar1;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  piVar1[1] = 1;
  if (param_1 != (int *)0x0) {
    local_4 = FUN_0043c570(param_1);
    if (local_4 != 0) {
      piVar2 = (int *)FUN_00446cf0(param_1,0x18);
      if (piVar2 != (int *)0x0) {
        piVar5 = piVar2;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = 0;
          piVar5 = piVar5 + 1;
        }
        *piVar2 = (int)param_1;
        piVar2[1] = local_4;
        piVar2[5] = piVar2[5] & 0xfffffffe;
        *piVar1 = (int)piVar2;
        return 1;
      }
      FUN_0043c5a0(param_1,&local_4);
    }
    FUN_0043f6a0(&param_1,0,0);
  }
  uVar3 = FUN_0043eea0(piVar1,s_png_image_read__out_of_memory_02fb1b3c);
  return uVar3;
}

