// Function: FUN_00499435
// Entry:    00499435
// Size:     60 bytes
// Conv:     unknown
// Signature: undefined FUN_00499435(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00499435(int param_1,int param_2)

{
  HGDIOBJ h;
  HGDIOBJ pvVar1;
  
  h = GetStockObject(param_2);
  pvVar1 = (HGDIOBJ)0x0;
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    pvVar1 = SelectObject(*(HDC *)(param_1 + 4),h);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    pvVar1 = SelectObject(*(HDC *)(param_1 + 8),h);
  }
  FUN_00499e08(pvVar1);
  return;
}

