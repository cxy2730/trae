// Function: FUN_0044b660
// Entry:    0044b660
// Size:     260 bytes
// Conv:     unknown
// Signature: undefined FUN_0044b660(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044b660(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = *(int *)(param_1 + 0x118) + 1;
  *(uint *)(param_1 + 0x118) = uVar3;
  if (*(uint *)(param_1 + 0x108) <= uVar3) {
    if (*(char *)(param_1 + 0x154) != '\0') {
      uVar2 = *(int *)(param_1 + 0x110) + 1;
      *(undefined4 *)(param_1 + 0x118) = 0;
      puVar4 = *(undefined4 **)(param_1 + 0x120);
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      bVar1 = *(char *)(param_1 + 0x155) + 1;
      *(byte *)(param_1 + 0x155) = bVar1;
      if (bVar1 < 7) {
        do {
          uVar3 = (uint)bVar1;
          *(uint *)(param_1 + 0x114) =
               ((*(int *)(param_1 + 0x100) - (uint)*(byte *)((int)&PTR_DAT_02f98618 + uVar3)) + -1 +
               (uint)(byte)(&DAT_02f98620)[uVar3]) / (uint)(byte)(&DAT_02f98620)[uVar3];
          if (((*(uint *)(param_1 + 0x7c) & 2) != 0) ||
             ((uVar3 = ((*(int *)(param_1 + 0x104) - (uint)(byte)(&DAT_02f98628)[uVar3]) + -1 +
                       (uint)(byte)(&DAT_02f98630)[uVar3]) / (uint)(byte)(&DAT_02f98630)[uVar3],
              *(uint *)(param_1 + 0x108) = uVar3, uVar3 != 0 && (*(int *)(param_1 + 0x114) != 0))))
          break;
          bVar1 = bVar1 + 1;
          *(byte *)(param_1 + 0x155) = bVar1;
        } while (bVar1 < 7);
      }
      if (*(byte *)(param_1 + 0x155) < 7) {
        return;
      }
    }
    FUN_0044b5f0(param_1);
  }
  return;
}

