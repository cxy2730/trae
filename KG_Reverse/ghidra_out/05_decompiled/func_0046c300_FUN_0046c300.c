// Function: FUN_0046c300
// Entry:    0046c300
// Size:     44 bytes
// Conv:     unknown
// Signature: undefined FUN_0046c300(void)
// Decompiled by Ghidra 12.1.2


int __fastcall FUN_0046c300(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0x11;
  }
  iVar1 = FUN_0046c0e0();
  if (iVar1 == 0x1c) {
    return 0x1c;
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 3;
  }
  return iVar1;
}

