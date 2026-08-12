// Function: FUN_0046de80
// Entry:    0046de80
// Size:     188 bytes
// Conv:     unknown
// Signature: undefined FUN_0046de80(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x0046df02) */

int FUN_0046de80(int param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  puVar2 = param_3;
  if (DAT_02fff19c == 0) {
    iVar3 = 0;
    do {
      *(char *)((int)&DAT_02fff09c + iVar3) = (char)iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x100);
    DAT_02fff19c = 1;
  }
  puVar5 = &DAT_02fff09c;
  puVar7 = param_3;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)(param_3 + 0x40) = 0;
  *(undefined1 *)((int)param_3 + 0x101) = 0;
  iVar3 = param_2;
  if (0 < param_2) {
    iVar6 = 0;
    param_3 = (undefined4 *)0x0;
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(iVar6 + (int)puVar2);
      uVar4 = uVar4 + *(byte *)((int)param_3 + param_1) + (uint)bVar1 & 0x800000ff;
      *(undefined1 *)(iVar6 + (int)puVar2) = *(undefined1 *)(uVar4 + (int)puVar2);
      *(byte *)(uVar4 + (int)puVar2) = bVar1;
      iVar3 = (int)((longlong)(ulonglong)((int)param_3 + 1) / (longlong)param_2);
      iVar6 = iVar6 + 1;
      param_3 = (undefined4 *)
                (uint)(byte)((longlong)(ulonglong)((int)param_3 + 1) % (longlong)param_2);
    } while (iVar6 < 0x100);
  }
  return iVar3;
}

