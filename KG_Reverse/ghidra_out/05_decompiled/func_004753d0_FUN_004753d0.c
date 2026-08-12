// Function: FUN_004753d0
// Entry:    004753d0
// Size:     88 bytes
// Conv:     unknown
// Signature: undefined FUN_004753d0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_004753d0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 8);
  while( true ) {
    if (cVar1 != '\0') {
      return 0x1c;
    }
    FUN_0046bae0();
    if ((*(int *)(param_1 + 0x28) == 0) && (*(int *)(param_1 + 0x24) == 0)) break;
    FUN_0046baf0();
    Sleep(10);
    cVar1 = *(char *)(param_1 + 8);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0046baf0();
  return 0;
}

