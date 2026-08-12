// Function: FUN_00475860
// Entry:    00475860
// Size:     105 bytes
// Conv:     unknown
// Signature: undefined FUN_00475860(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00475860(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  while( true ) {
    if (cVar1 != '\0') {
      return 0x1c;
    }
    FUN_0046bae0();
    if ((*(int *)(param_1 + 0x28) == 0) && (*(int *)(param_1 + 0x24) == 0)) break;
    FUN_0046baf0();
    cVar1 = *(char *)(param_1 + 8);
  }
  iVar2 = *(int *)(param_1 + 0xc) - (*(uint *)(param_1 + 0x14) >> 1);
  if (0 < iVar2) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
    *(uint *)(param_1 + 0x18) = (uint)(*(int *)(param_1 + 0x18) + iVar2) % *(uint *)(param_1 + 0x14)
    ;
  }
  FUN_0046baf0();
  return 0;
}

