// Function: FUN_0046d980
// Entry:    0046d980
// Size:     90 bytes
// Conv:     unknown
// Signature: undefined FUN_0046d980(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0046d980(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  puVar4 = (undefined4 *)(param_1 + 0x45);
  for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x24);
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    uVar3 = 0xffffffff;
    pcVar5 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_0046de80(param_2,~uVar3 - 1,(undefined4 *)(param_1 + 0x45));
    FUN_0046e260(param_2,~uVar3 - 1,(undefined4 *)(param_1 + 0x24));
  }
  return;
}

