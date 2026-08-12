// Function: FUN_004062c0
// Entry:    004062c0
// Size:     201 bytes
// Conv:     unknown
// Signature: undefined FUN_004062c0(void)
// Decompiled by Ghidra 12.1.2


LPVOID __thiscall FUN_004062c0(int param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    pvVar1 = (LPVOID)FUN_00406390(param_2);
    return pvVar1;
  }
  if (param_2 == 0) {
    return (LPVOID)0x0;
  }
  if (((DAT_02fe81f0 == 1) && (param_2 < 0x201)) && (**(int **)(param_1 + 4) < 0x60)) {
    iVar2 = FUN_00406d30(*(int **)(param_1 + 4) + 1,0x60,0);
    *(undefined1 *)(*(int *)(param_1 + 4) + 4 + iVar2) = 1;
    **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + 1;
    *(int *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0xc) = 0x200;
    pvVar1 = (LPVOID)(iVar2 * 0x200 + 100 + *(int *)(param_1 + 4));
    *(LPVOID *)(param_1 + 8) = pvVar1;
    return pvVar1;
  }
  if (DAT_02fe81ec == (HANDLE)0x0) {
    DAT_02fe81ec = GetProcessHeap();
  }
  pvVar1 = HeapAlloc(DAT_02fe81ec,0,param_2 + 0x80U);
  *(LPVOID *)(param_1 + 8) = pvVar1;
  if (pvVar1 == (LPVOID)0x0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    return (LPVOID)0x0;
  }
  *(int *)(param_1 + 0x10) = param_2;
  *(SIZE_T *)(param_1 + 0xc) = param_2 + 0x80U;
  return pvVar1;
}

