// Function: FUN_004460c0
// Entry:    004460c0
// Size:     203 bytes
// Conv:     unknown
// Signature: undefined FUN_004460c0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_004460c0(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0xcc) {
    (*(code *)**(undefined4 **)(param_1 + 0x1a0))(param_1);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xcc;
  }
  if (*(int *)(*(int *)(param_1 + 0x1a0) + 8) != 0) {
    puVar1 = (uint *)(param_1 + 0x8c);
    do {
      uVar3 = *puVar1;
      if (uVar3 < *(uint *)(param_1 + 0x74)) {
        do {
          if (*(int *)(param_1 + 8) != 0) {
            *(uint *)(*(int *)(param_1 + 8) + 4) = uVar3;
            *(undefined4 *)(*(int *)(param_1 + 8) + 8) = *(undefined4 *)(param_1 + 0x74);
            (*(code *)**(undefined4 **)(param_1 + 8))(param_1);
          }
          uVar2 = *puVar1;
          (**(code **)(*(int *)(param_1 + 0x1a4) + 4))(param_1,0,puVar1,0);
          uVar3 = *puVar1;
          if (uVar3 == uVar2) {
            return 0;
          }
        } while (uVar3 < *(uint *)(param_1 + 0x74));
      }
      (**(code **)(*(int *)(param_1 + 0x1a0) + 4))(param_1);
      (*(code *)**(undefined4 **)(param_1 + 0x1a0))(param_1);
      *puVar1 = 0;
    } while (*(int *)(*(int *)(param_1 + 0x1a0) + 8) != 0);
  }
  *(uint *)(param_1 + 0x10) = (*(int *)(param_1 + 0x44) != 0) + 0xcd;
  return 1;
}

