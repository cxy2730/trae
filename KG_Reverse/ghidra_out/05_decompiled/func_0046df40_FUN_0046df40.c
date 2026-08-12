// Function: FUN_0046df40
// Entry:    0046df40
// Size:     100 bytes
// Conv:     unknown
// Signature: undefined FUN_0046df40(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046df40(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  bVar4 = *(byte *)(param_2 + 0x100);
  bVar2 = *(byte *)(param_2 + 0x101);
  uVar5 = (uint)bVar4;
  uVar3 = (uint)bVar2;
  if (0 < param_1) {
    do {
      bVar4 = (char)uVar5 + 1;
      uVar5 = (uint)bVar4;
      bVar2 = (char)uVar3 + *(char *)(param_2 + uVar5);
      uVar3 = (uint)bVar2;
      LOCK();
      cVar1 = *(char *)(param_2 + uVar3);
      *(char *)(param_2 + uVar3) = *(char *)(param_2 + uVar5);
      UNLOCK();
      *(char *)(param_2 + uVar5) = cVar1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  *(byte *)(param_2 + 0x100) = bVar4;
  *(byte *)(param_2 + 0x101) = bVar2;
  return;
}

