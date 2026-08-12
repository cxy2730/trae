// Function: FUN_00413290
// Entry:    00413290
// Size:     116 bytes
// Conv:     unknown
// Signature: undefined FUN_00413290(void)
// Decompiled by Ghidra 12.1.2


int __thiscall FUN_00413290(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  iVar1 = FUN_0041b960(param_2);
  if ((iVar1 == 3) &&
     (iVar1 = (param_2 >> 0x10) - 1, iVar1 < (int)(*(uint *)(param_1 + 0x130) >> 2))) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x128) + iVar1 * 4);
    if (param_3 != (int *)0x0) {
      *param_3 = iVar1;
    }
    iVar2 = (param_2 & 0xffff) - 1;
    if ((iVar1 != 0) && (iVar2 < *(int *)(iVar1 + 0x54))) {
      return *(int *)(iVar1 + 0x58) + iVar2 * 0x38;
    }
  }
  return 0;
}

