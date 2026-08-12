// Function: FUN_00470ca0
// Entry:    00470ca0
// Size:     497 bytes
// Conv:     unknown
// Signature: undefined FUN_00470ca0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00470ca0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,uint param_5,int param_6)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (DAT_02fd2ba8 != 0) {
    uVar3 = 0xe;
    iVar4 = 0;
    do {
      uVar1 = __ftol();
      *(uint *)((int)&DAT_03003910 + iVar4) = uVar3;
      *(undefined4 *)((int)&DAT_030039a0 + iVar4) = uVar1;
      uVar3 = uVar3 - 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < 0x80000000);
    DAT_02fd2ba8 = 0;
  }
  PTR_FUN_02fd27f8 = &LAB_00470ea0;
  uVar3 = (uint)((param_5 & 8) != 0);
  if (param_3 < 0) {
    param_3 = 0;
  }
  else if (2 < param_3) {
    param_3 = 2;
  }
  if (param_6 < 1000) {
    param_6 = 1000;
  }
  DAT_02fff3a4 = param_2;
  if (*(int *)(param_1 + 8) != 3) {
    return 0;
  }
  DAT_02fd2b60 = 0x20;
  DAT_02fff520 = 0x20;
  _DAT_02fff3b0 =
       *(int *)(&DAT_02fd295c + (*(int *)(param_1 + 0x14) + *(int *)(param_1 + 4) * 4) * 4);
  DAT_02fd2794 = (_DAT_02fff3b0 / 2 + param_6 * 0x40) / _DAT_02fff3b0;
  bVar2 = (byte)param_3;
  iVar4 = 0x20 >> (bVar2 & 0x1f);
  if (8 < iVar4) {
    iVar4 = iVar4 + -1;
  }
  if (iVar4 < DAT_02fd2794) {
    DAT_02fd2794 = iVar4;
  }
  if (0x20 < DAT_02fd2794) {
    DAT_02fd2794 = 0x20;
  }
  if (*(int *)(param_1 + 0x20) != 3) {
    DAT_02fd2b60 = 0x40;
    DAT_02fff520 = 0x40;
    DAT_02fd2794 = DAT_02fd2794 * 2;
  }
  DAT_02fd27f0 = 0xc;
  iVar4 = (param_5 & 3) + 1;
  if (*(int *)(param_1 + 0x20) == 3) {
    iVar4 = 0;
  }
  DAT_02fff3a8 = (&DAT_02fd2b48)[iVar4];
  PTR_FUN_02fd27f4 = (&PTR_FUN_02fd2ad0)[iVar4 + (param_3 + uVar3 * 3) * 5];
  DAT_02fff3ac = DAT_02fff3a8 * (0x180 >> (bVar2 & 0x1f));
  DAT_02fff528 = DAT_02fff3ac;
  if (uVar3 == 0) {
    DAT_02fff528 = DAT_02fff3ac * 2;
  }
  _DAT_02fff3b0 = _DAT_02fff3b0 >> (bVar2 & 0x1f);
  _DAT_02fff3b8 = param_2;
  _DAT_02fff3b4 = (-(uint)(uVar3 != 0) & 0xfffffff8) + 0x10;
  puVar5 = &DAT_03001074;
  _DAT_03003478 = DAT_02fff3ac;
  for (iVar4 = 0x300; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  _DAT_02fff3bc = 0;
  FUN_00475c80();
  return 1;
}

