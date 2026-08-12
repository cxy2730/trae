// Function: FUN_00456d00
// Entry:    00456d00
// Size:     79 bytes
// Conv:     unknown
// Signature: undefined FUN_00456d00(void)
// Decompiled by Ghidra 12.1.2


void FUN_00456d00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar2 = FUN_004573a0(param_1);
      if (iVar2 != 0) {
        *(undefined1 **)(iVar1 + 0xc) = &LAB_004574c0;
        *(undefined4 *)(param_1 + 0x9c) = 0;
        return;
      }
    }
    *(undefined1 **)(iVar1 + 0xc) = &LAB_004571e0;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}

