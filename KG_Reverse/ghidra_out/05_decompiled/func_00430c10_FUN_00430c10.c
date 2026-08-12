// Function: FUN_00430c10
// Entry:    00430c10
// Size:     59 bytes
// Conv:     unknown
// Signature: undefined FUN_00430c10(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00430c10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = (*(uint *)(param_1 + 0x18) >> 2) - 1;
  if (-1 < iVar2) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + iVar3 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar2);
  }
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  FUN_004064a0();
  return;
}

