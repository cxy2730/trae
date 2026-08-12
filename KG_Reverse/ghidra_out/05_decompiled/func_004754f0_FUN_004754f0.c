// Function: FUN_004754f0
// Entry:    004754f0
// Size:     199 bytes
// Conv:     unknown
// Signature: undefined FUN_004754f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_004754f0(int param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_2 < *(uint *)(param_1 + 0xc)) {
    return 7;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return 0x10;
  }
  cVar1 = *(char *)(param_1 + 8);
  while( true ) {
    if (cVar1 != '\0') {
      return 0x1c;
    }
    FUN_0046bae0();
    if ((*(int *)(param_1 + 0x28) == 0) && (*(int *)(param_1 + 0x24) == 0)) break;
    FUN_0046baf0();
    Sleep(10);
    cVar1 = *(char *)(param_1 + 8);
  }
  puVar2 = (undefined4 *)FUN_00492f17(param_2 + param_3);
  uVar4 = *(uint *)(param_1 + 0xc);
  puVar5 = *(undefined4 **)(param_1 + 0x2c);
  puVar6 = puVar2;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  FUN_00492f40(*(undefined4 *)(param_1 + 0x2c));
  *(uint *)(param_1 + 0x14) = param_2;
  *(undefined4 **)(param_1 + 0x2c) = puVar2;
  *(int *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
  FUN_0046baf0();
  return 0;
}

