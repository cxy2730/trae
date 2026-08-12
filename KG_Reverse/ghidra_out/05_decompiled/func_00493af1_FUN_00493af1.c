// Function: FUN_00493af1
// Entry:    00493af1
// Size:     65 bytes
// Conv:     unknown
// Signature: undefined FUN_00493af1(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00493af1(int param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  bool bVar3;
  undefined4 uVar4;
  
  bVar3 = false;
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(*(HANDLE *)(param_1 + 4));
    bVar3 = BVar1 == 0;
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00493161();
  if (bVar3) {
    uVar4 = 0;
    DVar2 = GetLastError();
    FUN_004985b1(DVar2,uVar4);
  }
  return;
}

