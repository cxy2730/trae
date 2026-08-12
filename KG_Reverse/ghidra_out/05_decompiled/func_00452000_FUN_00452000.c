// Function: FUN_00452000
// Entry:    00452000
// Size:     133 bytes
// Conv:     unknown
// Signature: undefined FUN_00452000(void)
// Decompiled by Ghidra 12.1.2


void FUN_00452000(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,0,0x60);
  *(undefined4 **)(param_1 + 0x1b4) = puVar1;
  *puVar1 = FUN_00453490;
  *(code **)(*(int *)(param_1 + 0x1b4) + 4) = FUN_00452440;
  *(code **)(*(int *)(param_1 + 0x1b4) + 8) = FUN_00453410;
  *(code **)(*(int *)(param_1 + 0x1b4) + 0xc) = FUN_004523b0;
  iVar2 = 0x10;
  do {
    iVar2 = iVar2 + 4;
    *(code **)(*(int *)(param_1 + 0x1b4) + -4 + iVar2) = FUN_004523b0;
  } while (iVar2 < 0x50);
  *(undefined1 **)(*(int *)(param_1 + 0x1b4) + 0x10) = &LAB_00452090;
  *(undefined1 **)(*(int *)(param_1 + 0x1b4) + 0x48) = &LAB_00452270;
  FUN_00453490(param_1);
  return;
}

