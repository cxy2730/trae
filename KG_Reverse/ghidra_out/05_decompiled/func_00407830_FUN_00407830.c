// Function: FUN_00407830
// Entry:    00407830
// Size:     91 bytes
// Conv:     unknown
// Signature: undefined FUN_00407830(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00407830(int param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  BOOL BVar1;
  undefined4 uVar2;
  tagRECT local_10;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    GetClientRect(*(HWND *)(param_1 + 0x1c),&local_10);
    FUN_00499a1f(&local_10);
    pt.y = param_3;
    pt.x = param_2;
    BVar1 = PtInRect(&local_10,pt);
    if (BVar1 == 0) {
      return 0x12;
    }
  }
  uVar2 = FUN_00494b19();
  return uVar2;
}

