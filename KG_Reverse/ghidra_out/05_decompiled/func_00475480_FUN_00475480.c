// Function: FUN_00475480
// Entry:    00475480
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_00475480(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00475480(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  while( true ) {
    if (cVar1 != '\0') {
      return 0x1c;
    }
    FUN_0046bae0();
    if (*(int *)(param_1 + 0x24) == 0) break;
    FUN_0046baf0();
    Sleep(10);
    cVar1 = *(char *)(param_1 + 8);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  FUN_0046baf0();
  return uVar2;
}

