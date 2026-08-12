// Function: FUN_004462a0
// Entry:    004462a0
// Size:     97 bytes
// Conv:     unknown
// Signature: undefined FUN_004462a0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004462a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)param_1[5];
  iVar2 = (**(code **)(*(int *)puVar1[7] + 4))(puVar1[8],0x1000);
  if (iVar2 == 0) {
    if (puVar1[9] != 0) {
      (**(code **)*param_1)(param_1);
    }
    (**(code **)(*param_1 + 4))(param_1,0xffffffff);
    *(undefined1 *)puVar1[8] = 0xff;
    *(undefined1 *)(puVar1[8] + 1) = 0xd9;
    iVar2 = 2;
  }
  puVar1[1] = iVar2;
  *puVar1 = puVar1[8];
  puVar1[9] = 0;
  return 1;
}

