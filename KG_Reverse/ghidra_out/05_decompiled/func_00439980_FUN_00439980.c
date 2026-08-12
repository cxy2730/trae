// Function: FUN_00439980
// Entry:    00439980
// Size:     72 bytes
// Conv:     unknown
// Signature: undefined FUN_00439980(void)
// Decompiled by Ghidra 12.1.2


LPVOID FUN_00439980(int param_1,int param_2)

{
  SIZE_T dwBytes;
  HANDLE hHeap;
  undefined4 *puVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  DWORD dwFlags;
  
  dwBytes = (param_1 + 0x20) * param_2;
  dwFlags = 8;
  hHeap = GetProcessHeap();
  puVar1 = HeapAlloc(hHeap,dwFlags,dwBytes);
  if (puVar1 != (LPVOID)0x0) {
    pvVar2 = puVar1 + param_2 * 8;
    puVar3 = puVar1;
    if (0 < param_2) {
      do {
        puVar3[1] = param_1;
        *puVar3 = pvVar2;
        pvVar2 = (LPVOID)((int)pvVar2 + param_1);
        param_2 = param_2 + -1;
        puVar3 = puVar3 + 8;
      } while (param_2 != 0);
    }
    return puVar1;
  }
  return (LPVOID)0x0;
}

