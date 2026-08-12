// Function: FUN_00469c30
// Entry:    00469c30
// Size:     197 bytes
// Conv:     unknown
// Signature: undefined FUN_00469c30(void)
// Decompiled by Ghidra 12.1.2


LPVOID __thiscall FUN_00469c30(int *param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    pvVar1 = (LPVOID)FUN_00469d00(param_2);
    return pvVar1;
  }
  if (param_2 == 0) {
    return (LPVOID)0x0;
  }
  if (((DAT_02fd2460 == 1) && (param_2 < 0x201)) && (*(int *)param_1[3] < 0x30)) {
    iVar2 = FUN_00406d30((int *)param_1[3] + 1,0x30,0);
    *(undefined1 *)(param_1[3] + 4 + iVar2) = 1;
    *(int *)param_1[3] = *(int *)param_1[3] + 1;
    param_1[2] = param_2;
    param_1[1] = 0x200;
    pvVar1 = (LPVOID)(iVar2 * 0x200 + 0x34 + param_1[3]);
    *param_1 = (int)pvVar1;
    return pvVar1;
  }
  if (DAT_02ff2bbc == (HANDLE)0x0) {
    DAT_02ff2bbc = GetProcessHeap();
  }
  pvVar1 = HeapAlloc(DAT_02ff2bbc,0,param_2 + 0x80U);
  *param_1 = (int)pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    param_1[1] = 0;
    param_1[2] = 0;
    return (LPVOID)0x0;
  }
  param_1[2] = param_2;
  param_1[1] = param_2 + 0x80U;
  return pvVar1;
}

