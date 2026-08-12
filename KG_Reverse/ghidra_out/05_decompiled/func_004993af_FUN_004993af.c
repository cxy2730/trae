// Function: FUN_004993af
// Entry:    004993af
// Size:     49 bytes
// Conv:     unknown
// Signature: undefined FUN_004993af(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_004993af(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    iVar2 = SaveDC(*(HDC *)(param_1 + 8));
  }
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    iVar1 = SaveDC(*(HDC *)(param_1 + 4));
    if (iVar1 != 0) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

