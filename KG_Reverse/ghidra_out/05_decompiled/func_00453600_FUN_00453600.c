// Function: FUN_00453600
// Entry:    00453600
// Size:     289 bytes
// Conv:     unknown
// Signature: undefined FUN_00453600(void)
// Decompiled by Ghidra 12.1.2


int FUN_00453600(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = param_1[1];
  if (0xffe0 < param_3) {
    FUN_0045cb90(param_1,1);
  }
  if ((param_3 & 7) != 0) {
    param_3 = param_3 + (8 - (param_3 & 7));
  }
  if ((param_2 < 0) || (1 < param_2)) {
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined4 *)0x0;
  puVar3 = *(undefined4 **)(iVar1 + 0x30 + param_2 * 4);
  do {
    if (puVar3 == (undefined4 *)0x0) {
LAB_00453675:
      iVar5 = param_3 + 0x10;
      if (puVar2 == (undefined4 *)0x0) {
        uVar4 = *(uint *)(&DAT_02f98c10 + param_2 * 4);
      }
      else {
        uVar4 = *(uint *)(&DAT_02f98c18 + param_2 * 4);
      }
      if (0xfff0U - iVar5 < uVar4) {
        uVar4 = 0xfff0U - iVar5;
      }
      puVar3 = (undefined4 *)FUN_00456430(param_1,uVar4 + iVar5);
      while (puVar3 == (undefined4 *)0x0) {
        uVar4 = uVar4 >> 1;
        if (uVar4 < 0x32) {
          FUN_0045cb90(param_1,2);
        }
        puVar3 = (undefined4 *)FUN_00456430(param_1,uVar4 + iVar5);
      }
      *(uint *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + uVar4 + iVar5;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = uVar4 + param_3;
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 **)(iVar1 + 0x30 + param_2 * 4) = puVar3;
      }
      else {
        *puVar2 = puVar3;
      }
LAB_00453706:
      iVar1 = puVar3[1];
      puVar3[1] = iVar1 + param_3;
      puVar3[2] = puVar3[2] - param_3;
      return iVar1 + 0x10 + (int)puVar3;
    }
    if (param_3 <= (uint)puVar3[2]) {
      if (puVar3 != (undefined4 *)0x0) goto LAB_00453706;
      goto LAB_00453675;
    }
    puVar2 = puVar3;
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}

