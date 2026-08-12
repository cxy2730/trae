// Function: FUN_00498d78
// Entry:    00498d78
// Size:     96 bytes
// Conv:     unknown
// Signature: undefined FUN_00498d78(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00498d78(undefined4 *param_1,undefined4 param_2,int param_3)

{
  HGLOBAL hMem;
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  param_1[1] = param_3;
  hMem = GlobalAlloc(0x40,param_3 + 0x40);
  *param_1 = hMem;
  uVar3 = 0;
  if (hMem != (HGLOBAL)0x0) {
    puVar1 = GlobalLock(hMem);
    FUN_00485580(puVar1,param_2,param_1[1]);
    if (*(short *)((int)puVar1 + 2) == -1) {
      uVar2 = puVar1[3];
    }
    else {
      uVar2 = *puVar1;
    }
    param_1[2] = ~uVar2 >> 6 & 1;
    GlobalUnlock((HGLOBAL)*param_1);
    uVar3 = 1;
  }
  return uVar3;
}

