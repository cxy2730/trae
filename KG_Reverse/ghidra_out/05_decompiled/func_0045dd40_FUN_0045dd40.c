// Function: FUN_0045dd40
// Entry:    0045dd40
// Size:     494 bytes
// Conv:     unknown
// Signature: undefined FUN_0045dd40(void)
// Decompiled by Ghidra 12.1.2


void FUN_0045dd40(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x7c) < 1) {
    uVar4 = param_3 + 5;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      FUN_0045f290(param_1);
    }
    FUN_0045df30(param_1,param_1 + 0xb10);
    FUN_0045df30(param_1,param_1 + 0xb1c);
    iVar2 = FUN_0045e500(param_1);
    uVar5 = *(int *)(param_1 + 0x16a0) + 10U >> 3;
    uVar4 = *(int *)(param_1 + 0x16a4) + 10U >> 3;
    if (uVar5 < uVar4) goto LAB_0045ddaa;
  }
  uVar5 = uVar4;
LAB_0045ddaa:
  if ((uVar5 < param_3 + 4U) || (param_2 == 0)) {
    iVar6 = *(int *)(param_1 + 0x16b4);
    bVar3 = (byte)iVar6;
    if (uVar4 == uVar5) {
      iVar2 = param_4 + 2;
      if (iVar6 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar2 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16b4) = iVar6 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar2 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             *(undefined1 *)(param_1 + 0x16b0);
        iVar6 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar6;
        *(undefined1 *)(*(int *)(param_1 + 8) + iVar6) = *(undefined1 *)(param_1 + 0x16b1);
        iVar6 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar6 + -0xd;
        *(ushort *)(param_1 + 0x16b0) = (ushort)iVar2 >> (0x10U - (char)iVar6 & 0x1f);
      }
      FUN_0045ee50(param_1,&DAT_02f994e0,&DAT_02f99960);
    }
    else {
      iVar1 = param_4 + 4;
      if (iVar6 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16b4) = iVar6 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)) =
             *(undefined1 *)(param_1 + 0x16b0);
        iVar6 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar6;
        *(undefined1 *)(iVar6 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
        iVar6 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar6 + -0xd;
        *(ushort *)(param_1 + 0x16b0) = (ushort)iVar1 >> (0x10U - (char)iVar6 & 0x1f);
      }
      FUN_0045e660(param_1,*(int *)(param_1 + 0xb14) + 1,*(int *)(param_1 + 0xb20) + 1,iVar2 + 1);
      FUN_0045ee50(param_1,param_1 + 0x8c,param_1 + 0x980);
    }
  }
  else {
    FUN_0045dca0(param_1,param_2,param_3,param_4);
  }
  FUN_0045dc30(param_1);
  if (param_4 != 0) {
    FUN_0045f330(param_1);
  }
  return;
}

