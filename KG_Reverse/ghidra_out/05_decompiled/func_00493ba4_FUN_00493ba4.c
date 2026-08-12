// Function: FUN_00493ba4
// Entry:    00493ba4
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined FUN_00493ba4(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00493ba4(int *param_1,undefined4 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  (**(code **)(*param_1 + 0x28))(param_2,0);
  BVar1 = SetEndOfFile((HANDLE)param_1[1]);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_004985b1(DVar2,BVar1);
  }
  return;
}

