// Function: FUN_0049bf22
// Entry:    0049bf22
// Size:     34 bytes
// Conv:     unknown
// Signature: undefined FUN_0049bf22(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0049bf22(int param_1,SIZE_T param_2)

{
  HGLOBAL hMem;
  
  hMem = GlobalAlloc(*(UINT *)(param_1 + 0x28),param_2);
  *(HGLOBAL *)(param_1 + 0x2c) = hMem;
  if (hMem != (HGLOBAL)0x0) {
    GlobalLock(hMem);
  }
  return;
}

