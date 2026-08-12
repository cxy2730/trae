// Function: FUN_0046bb50
// Entry:    0046bb50
// Size:     20 bytes
// Conv:     unknown
// Signature: undefined FUN_0046bb50(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_0046bb50(int param_1)

{
  int local_4;
  
  local_4 = param_1;
  ReleaseSemaphore(*(HANDLE *)(param_1 + 4),1,&local_4);
  return;
}

