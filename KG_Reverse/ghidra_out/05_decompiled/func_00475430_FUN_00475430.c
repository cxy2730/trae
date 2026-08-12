// Function: FUN_00475430
// Entry:    00475430
// Size:     75 bytes
// Conv:     unknown
// Signature: undefined FUN_00475430(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00475430(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  while( true ) {
    if (cVar1 != '\0') {
      return 0x1c;
    }
    FUN_0046bae0();
    if (*(int *)(param_1 + 0x28) == 0) break;
    FUN_0046baf0();
    Sleep(10);
    cVar1 = *(char *)(param_1 + 8);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  FUN_0046baf0();
  return uVar2;
}

