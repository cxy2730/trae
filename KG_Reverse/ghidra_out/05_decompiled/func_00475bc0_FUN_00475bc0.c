// Function: FUN_00475bc0
// Entry:    00475bc0
// Size:     183 bytes
// Conv:     unknown
// Signature: undefined FUN_00475bc0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00475bc0(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = *(uint *)(param_1 + 0x44) + param_3 * 8;
  uVar1 = *(uint *)(param_1 + 0x44) >> 3 & 0x3f;
  *(uint *)(param_1 + 0x44) = uVar3;
  if (uVar3 < param_3 * 8) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  uVar3 = -uVar1 + 0x40;
  *(uint *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + (param_3 >> 0x1d);
  if (param_3 < uVar3) {
    uVar3 = 0;
  }
  else {
    puVar4 = param_2;
    puVar5 = (undefined4 *)(uVar1 + 4 + param_1);
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_0043a380(param_1 + 4);
    for (uVar1 = -uVar1 + 0x7f; uVar1 < param_3; uVar1 = uVar1 + 0x40) {
      FUN_0043a380((undefined1 *)((int)param_2 + (uVar1 - 0x3f)));
      uVar3 = uVar3 + 0x40;
    }
    uVar1 = 0;
  }
  puVar4 = (undefined4 *)(uVar3 + (int)param_2);
  puVar5 = (undefined4 *)(uVar1 + 4 + param_1);
  for (uVar2 = param_3 - uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = param_3 - uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return;
}

