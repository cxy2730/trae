// Function: FUN_00464430
// Entry:    00464430
// Size:     153 bytes
// Conv:     unknown
// Signature: undefined FUN_00464430(void)
// Decompiled by Ghidra 12.1.2


void FUN_00464430(int *param_1)

{
  int iVar1;
  HANDLE hHeap;
  int iVar2;
  DWORD dwFlags;
  
  if (param_1 != (int *)0x0) {
    if (param_1[4] != 0) {
      (*(code *)(*(int *)(*param_1 + 0x28) + param_1[1]))(param_1[1],0,0);
    }
    FUN_004837fe(param_1[0xc]);
    if (param_1[2] != 0) {
      iVar2 = 0;
      if (0 < param_1[3]) {
        do {
          iVar1 = *(int *)(param_1[2] + iVar2 * 4);
          if (iVar1 != 0) {
            (*(code *)param_1[0xb])(iVar1,param_1[0xd]);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1[3]);
      }
      FUN_004837fe(param_1[2]);
    }
    if (param_1[1] != 0) {
      (*(code *)param_1[8])(param_1[1],0,0x8000,param_1[0xd]);
    }
    dwFlags = 0;
    hHeap = GetProcessHeap();
    HeapFree(hHeap,dwFlags,param_1);
  }
  return;
}

