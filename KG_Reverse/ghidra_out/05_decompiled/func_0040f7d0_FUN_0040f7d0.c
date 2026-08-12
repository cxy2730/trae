// Function: FUN_0040f7d0
// Entry:    0040f7d0
// Size:     227 bytes
// Conv:     unknown
// Signature: undefined FUN_0040f7d0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040f7d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint local_4;
  
  FUN_0040edb0(param_2);
  local_4 = *(uint *)(param_1 + 0x18) >> 3;
  if (*(int *)(param_1 + 0x18) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10);
  }
  puVar4 = (undefined4 *)(iVar3 + local_4 * 4);
  if (((byte)*(undefined4 *)(param_2 + 0x14) & 1) == 1) {
    if (local_4 != 0) {
      do {
        puVar2 = (undefined4 *)FUN_00492f17(0x54);
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 4);
          puVar2[3] = PTR_DAT_02fd8088;
          puVar2[4] = PTR_DAT_02fd8088;
          FUN_004062a0();
          puVar2[0xc] = uVar1;
          puVar2[6] = 0;
          puVar2[5] = &PTR_FUN_02f954d8;
          FUN_004062a0();
          puVar2[0x14] = uVar1;
          puVar2[0xe] = 0;
          puVar2[0xd] = &PTR_FUN_02f954d8;
          *puVar2 = uVar1;
          puVar2[2] = 0;
        }
        FUN_0040f5a0(param_2);
        *puVar4 = puVar2;
        puVar4 = puVar4 + 1;
        local_4 = local_4 - 1;
      } while (local_4 != 0);
      return;
    }
  }
  else {
    for (; local_4 != 0; local_4 = local_4 - 1) {
      FUN_0040f5a0(param_2);
    }
  }
  return;
}

