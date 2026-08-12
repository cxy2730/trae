// Function: FUN_004064c0
// Entry:    004064c0
// Size:     99 bytes
// Conv:     unknown
// Signature: undefined FUN_004064c0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004064c0(int param_1,LPVOID param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (LPVOID)0x0) {
    iVar1 = *(int *)(param_1 + 4);
    if (((LPVOID)(iVar1 + 100U) <= param_2) && (param_2 < (LPVOID)(iVar1 + 0xc064U))) {
      iVar2 = (int)param_2 + (-100 - iVar1);
      *(undefined1 *)(((int)(iVar2 + (iVar2 >> 0x1f & 0x1ffU)) >> 9) + 4 + iVar1) = 0;
      **(int **)(param_1 + 4) = **(int **)(param_1 + 4) + -1;
      return;
    }
    if (DAT_02fe81ec == (HANDLE)0x0) {
      DAT_02fe81ec = GetProcessHeap();
    }
    HeapFree(DAT_02fe81ec,0,param_2);
  }
  return;
}

