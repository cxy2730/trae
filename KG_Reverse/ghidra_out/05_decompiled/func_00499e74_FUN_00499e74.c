// Function: FUN_00499e74
// Entry:    00499e74
// Size:     22 bytes
// Conv:     unknown
// Signature: undefined FUN_00499e74(void)
// Decompiled by Ghidra 12.1.2


BOOL __fastcall FUN_00499e74(int param_1)

{
  HGDIOBJ ho;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  ho = (HGDIOBJ)Detach();
  BVar1 = DeleteObject(ho);
  return BVar1;
}

