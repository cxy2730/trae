// Function: FUN_00492be8
// Entry:    00492be8
// Size:     66 bytes
// Conv:     unknown
// Signature: undefined FUN_00492be8(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00492be8(int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    uVar4 = (param_2 >> 4) % *(uint *)(param_1 + 8);
    puVar2 = *(undefined4 **)(iVar1 + uVar4 * 4);
    puVar5 = (undefined4 *)(iVar1 + uVar4 * 4);
    while (puVar3 = puVar2, puVar3 != (undefined4 *)0x0) {
      if (puVar3[1] == param_2) {
        *puVar5 = *puVar3;
        FUN_00492b1a(puVar3);
        return 1;
      }
      puVar5 = puVar3;
      puVar2 = (undefined4 *)*puVar3;
    }
  }
  return 0;
}

