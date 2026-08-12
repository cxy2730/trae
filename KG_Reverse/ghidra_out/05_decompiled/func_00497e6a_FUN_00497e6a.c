// Function: FUN_00497e6a
// Entry:    00497e6a
// Size:     86 bytes
// Conv:     unknown
// Signature: undefined FUN_00497e6a(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00497e6a(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 4))(param_2 != 0);
  if ((param_1[3] != 0) && (param_1[4] == 0)) {
    if ((DAT_03010cf0 == (HBITMAP)0x0) && (FUN_0049d1f4(), DAT_03010cf0 == (HBITMAP)0x0)) {
      return;
    }
    SetMenuItemBitmaps(*(HMENU *)(param_1[3] + 4),param_1[2],0x400,(HBITMAP)0x0,DAT_03010cf0);
  }
  return;
}

