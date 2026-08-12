// Function: FUN_0043f980
// Entry:    0043f980
// Size:     135 bytes
// Conv:     unknown
// Signature: undefined FUN_0043f980(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043f980(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 1) {
      uVar2 = FUN_0043eea0(param_1,s_png_image_begin_read_from_memory_02fb1b64);
      return uVar2;
    }
    if ((param_2 == 0) || (param_3 == 0)) {
      uVar2 = FUN_0043eea0(param_1,s_png_image_begin_read_from_memory_02fb1ba4);
      return uVar2;
    }
    iVar1 = FUN_0043f7c0(param_1);
    if (iVar1 != 0) {
      *(int *)(*param_1 + 0xc) = param_2;
      *(int *)(*param_1 + 0x10) = param_3;
      *(int **)(*(int *)*param_1 + 0x60) = param_1;
      *(undefined1 **)(*(int *)*param_1 + 0x5c) = &LAB_0043fa10;
      uVar2 = FUN_00446a50(param_1,FUN_0043f8a0,param_1);
      return uVar2;
    }
  }
  return 0;
}

