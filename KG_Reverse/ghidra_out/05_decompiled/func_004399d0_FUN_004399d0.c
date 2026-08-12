// Function: FUN_004399d0
// Entry:    004399d0
// Size:     21 bytes
// Conv:     unknown
// Signature: undefined FUN_004399d0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004399d0(LPVOID param_1)

{
  HANDLE hHeap;
  DWORD dwFlags;
  
  dwFlags = 0;
  hHeap = GetProcessHeap();
  HeapFree(hHeap,dwFlags,param_1);
  return;
}

