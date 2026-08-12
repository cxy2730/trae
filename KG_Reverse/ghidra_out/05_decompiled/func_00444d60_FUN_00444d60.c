// Function: FUN_00444d60
// Entry:    00444d60
// Size:     95 bytes
// Conv:     unknown
// Signature: undefined FUN_00444d60(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00444d60(int param_1)

{
  DWORD DVar1;
  BOOL BVar2;
  
  FUN_00494b19();
  if (*(int *)(param_1 + 0x104) == 1) {
    *(undefined4 *)(param_1 + 0x104) = 0;
    DVar1 = GetMessagePos();
    BVar2 = PtInRect((RECT *)(param_1 + 0x80),
                     (POINT)(CONCAT44(DVar1 >> 0x10,DVar1) & 0xffffffff0000ffff));
    if (BVar2 != 0) {
      FUN_00445430(0x83ec);
      return;
    }
    FUN_00445430(0x83ed);
  }
  return;
}

