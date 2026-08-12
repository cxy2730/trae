// Function: FUN_00457f00
// Entry:    00457f00
// Size:     60 bytes
// Conv:     unknown
// Signature: undefined FUN_00457f00(void)
// Decompiled by Ghidra 12.1.2


void FUN_00457f00(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x48);
  *(undefined4 **)(param_1 + 0x1b8) = puVar1;
  *puVar1 = &LAB_00457f40;
  puVar1[1] = &LAB_00458060;
  puVar1 = puVar1 + 10;
  iVar2 = 4;
  do {
    puVar1[4] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

