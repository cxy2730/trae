// Function: FUN_004218d0
// Entry:    004218d0
// Size:     139 bytes
// Conv:     unknown
// Signature: undefined FUN_004218d0(void)
// Decompiled by Ghidra 12.1.2


HBITMAP __thiscall FUN_004218d0(int param_1,int param_2)

{
  int iVar1;
  HBITMAP pHVar2;
  void *pjBits;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    pjBits = (void *)0x0;
  }
  else {
    pjBits = *(void **)(param_1 + 0x60);
  }
  if ((((*(int *)(param_1 + 0x6c) != 0) &&
       (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0x90) &&
        -1 < *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x90))) &&
      (*(int *)(param_1 + 0x9c) != *(int *)(param_1 + 0x94) &&
       -1 < *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x94))) && (pjBits != (void *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x98) - *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x30) = iVar1;
    *(int *)(param_1 + 8) = iVar1;
    iVar1 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x94);
    *(int *)(param_1 + 0x34) = iVar1;
    *(int *)(param_1 + 0xc) = iVar1;
    pHVar2 = CreateDIBitmap(*(HDC *)(param_2 + 4),(BITMAPINFOHEADER *)(param_1 + 4),4,pjBits,
                            (BITMAPINFO *)(param_1 + 0x2c),0);
    return pHVar2;
  }
  return (HBITMAP)0x0;
}

