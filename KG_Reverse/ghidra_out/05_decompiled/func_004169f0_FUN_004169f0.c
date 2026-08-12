// Function: FUN_004169f0
// Entry:    004169f0
// Size:     109 bytes
// Conv:     unknown
// Signature: undefined FUN_004169f0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004169f0(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)0x0;
  if (*(int *)(param_1 + 0x44) != 0) {
    if (((*(int *)(*(int *)(param_1 + 0x40) + -8) != 0) || (*(int *)(param_1 + 0x6c) == 1)) &&
       (puVar2 = (undefined *)0xc00000, *(int *)(param_1 + 0x6c) == 1)) {
      puVar2 = &UNK_00c80000;
    }
    puVar2 = (undefined *)((uint)puVar2 | 0x400000);
  }
  if (*(int *)(param_1 + 100) == 1) {
    puVar2 = (undefined *)((uint)puVar2 | 0x10000);
  }
  if (*(int *)(param_1 + 0x68) == 1) {
    puVar2 = (undefined *)((uint)puVar2 | 0x20000);
  }
  uVar1 = FUN_00497418();
  if ((undefined *)(uVar1 & 0xcb0000) != puVar2) {
    FUN_0049744c((undefined *)(uVar1 & 0xcb0000),puVar2,0x37);
  }
  return;
}

