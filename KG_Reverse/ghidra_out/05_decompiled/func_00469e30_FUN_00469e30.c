// Function: FUN_00469e30
// Entry:    00469e30
// Size:     99 bytes
// Conv:     unknown
// Signature: undefined FUN_00469e30(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00469e30(int param_1,LPVOID param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (LPVOID)0x0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (((LPVOID)(iVar1 + 0x34U) <= param_2) && (param_2 < (LPVOID)(iVar1 + 0x6034U))) {
      iVar2 = (int)param_2 + (-0x34 - iVar1);
      *(undefined1 *)(((int)(iVar2 + (iVar2 >> 0x1f & 0x1ffU)) >> 9) + 4 + iVar1) = 0;
      **(int **)(param_1 + 0xc) = **(int **)(param_1 + 0xc) + -1;
      return;
    }
    if (DAT_02ff2bbc == (HANDLE)0x0) {
      DAT_02ff2bbc = GetProcessHeap();
    }
    HeapFree(DAT_02ff2bbc,0,param_2);
  }
  return;
}

