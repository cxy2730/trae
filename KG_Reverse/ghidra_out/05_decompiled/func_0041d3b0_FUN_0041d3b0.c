// Function: FUN_0041d3b0
// Entry:    0041d3b0
// Size:     179 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d3b0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0041d3b0(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  
  puVar5 = (undefined4 *)(param_1 + 0x35);
  *(uint *)(param_1 + 0x10) = ((int)param_3 < 0) - 1 & param_3;
  puVar4 = puVar5;
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x14);
  puVar7 = puVar4;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = 0;
  puVar7 = (undefined4 *)(param_1 + 0x158);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined2 *)puVar7 = 0;
  puVar7 = (undefined4 *)(param_1 + 0x137);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar3 = 0xffffffff;
    pcVar6 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    FUN_0041d5c0(param_2,~uVar3 - 1,puVar5);
    FUN_0041d900(param_2,~uVar3 - 1,puVar4);
    puVar7 = (undefined4 *)(param_1 + 0x137);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)(param_1 + 0x158);
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)puVar5;
  }
  return;
}

