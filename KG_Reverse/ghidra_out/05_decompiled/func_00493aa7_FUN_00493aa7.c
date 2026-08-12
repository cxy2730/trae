// Function: FUN_00493aa7
// Entry:    00493aa7
// Size:     41 bytes
// Conv:     unknown
// Signature: undefined FUN_00493aa7(void)
// Decompiled by Ghidra 12.1.2


DWORD __fastcall FUN_00493aa7(int param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  DVar1 = SetFilePointer(*(HANDLE *)(param_1 + 4),0,(PLONG)0x0,1);
  if (DVar1 == 0xffffffff) {
    uVar3 = 0;
    DVar2 = GetLastError();
    FUN_004985b1(DVar2,uVar3);
  }
  return DVar1;
}

