// Function: FUN_00493507
// Entry:    00493507
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_00493507(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00493507(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *param_1;
    if ((*(int *)(iVar1 + -0xc) < 2) && (*(int *)(iVar1 + -8) + param_2 <= *(int *)(iVar1 + -4))) {
      FUN_00485580(*(int *)(iVar1 + -8) + iVar1,param_3,param_2);
      *(int *)(*param_1 + -8) = *(int *)(*param_1 + -8) + param_2;
      *(undefined1 *)(*(int *)(*param_1 + -8) + *param_1) = 0;
    }
    else {
      FUN_0049337b(*(undefined4 *)(iVar1 + -8),iVar1,param_2,param_3);
      FUN_0049313e(iVar1 + -0xc);
    }
  }
  return;
}

