// Function: FUN_004994b7
// Entry:    004994b7
// Size:     69 bytes
// Conv:     unknown
// Signature: undefined FUN_004994b7(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_004994b7(int param_1,int param_2)

{
  HGDIOBJ pvVar1;
  
  if (*(HDC *)(param_1 + 4) != *(HDC *)(param_1 + 8)) {
    if (param_2 == 0) {
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = *(HGDIOBJ *)(param_2 + 4);
    }
    SelectObject(*(HDC *)(param_1 + 4),pvVar1);
  }
  if (*(HDC *)(param_1 + 8) != (HDC)0x0) {
    if (param_2 == 0) {
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = *(HGDIOBJ *)(param_2 + 4);
    }
    SelectObject(*(HDC *)(param_1 + 8),pvVar1);
  }
  return;
}

