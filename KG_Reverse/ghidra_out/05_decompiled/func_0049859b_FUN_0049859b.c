// Function: FUN_0049859b
// Entry:    0049859b
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_0049859b(void)
// Decompiled by Ghidra 12.1.2


BOOL __fastcall FUN_0049859b(int param_1)

{
  HMENU hMenu;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  hMenu = (HMENU)Detach();
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}

