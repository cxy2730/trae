// Function: FUN_0041d680
// Entry:    0041d680
// Size:     117 bytes
// Conv:     unknown
// Signature: undefined FUN_0041d680(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041d680(byte *param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  bVar4 = *(byte *)(param_3 + 0x100);
  bVar2 = *(byte *)(param_3 + 0x101);
  uVar5 = (uint)bVar4;
  uVar3 = (uint)bVar2;
  if (0 < param_2) {
    do {
      bVar4 = (char)uVar5 + 1;
      uVar5 = (uint)bVar4;
      bVar2 = (char)uVar3 + *(char *)(param_3 + uVar5);
      uVar3 = (uint)bVar2;
      LOCK();
      cVar1 = *(char *)(param_3 + uVar3);
      *(char *)(param_3 + uVar3) = *(char *)(param_3 + uVar5);
      UNLOCK();
      *(char *)(param_3 + uVar5) = cVar1;
      *param_1 = *param_1 ^ *(byte *)(param_3 + (uint)(byte)(cVar1 + *(char *)(param_3 + uVar3)));
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(byte *)(param_3 + 0x100) = bVar4;
  *(byte *)(param_3 + 0x101) = bVar2;
  return;
}

