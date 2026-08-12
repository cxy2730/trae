// Function: FUN_004513f0
// Entry:    004513f0
// Size:     429 bytes
// Conv:     unknown
// Signature: undefined FUN_004513f0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004513f0(int param_1,int param_2,undefined *param_3,int param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return;
  }
  if ((param_2 < 0) || (3 < param_2)) {
    FUN_00446650(param_1,s_png_set_keep_unknown_chunks__inv_02fb3124);
    return;
  }
  if (param_4 < 1) {
    *(int *)(param_1 + 0x254) = param_2;
    if (param_4 == 0) {
      return;
    }
    if (-1 < param_4) goto LAB_0045143e;
    param_3 = &DAT_02f98958;
    param_4 = 0x11;
  }
  else {
LAB_0045143e:
    if (param_3 == (undefined *)0x0) {
      FUN_00446650(param_1,s_png_set_keep_unknown_chunks__no_c_02fb3180);
      return;
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0x25c);
  iVar6 = *(int *)(param_1 + 600);
  if (puVar2 == (undefined4 *)0x0) {
    iVar6 = 0;
  }
  if (0x33333333 < (uint)(iVar6 + param_4)) {
    FUN_00446650(param_1,s_png_set_keep_unknown_chunks__too_02fb3150);
    return;
  }
  if (param_2 == 0) {
    if (iVar6 != 0) goto LAB_004514ca;
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_00446cb0(param_1,(iVar6 + param_4) * 5);
    if (iVar6 != 0) {
      puVar3 = *(undefined4 **)(param_1 + 0x25c);
      puVar5 = puVar2;
      for (uVar4 = (uint)(iVar6 * 5) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar4 = iVar6 * 5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
LAB_004514ca:
    puVar1 = param_3;
    if (puVar2 != (undefined4 *)0x0) {
      for (; param_3 = (undefined *)iVar6, param_4 != 0; param_4 = param_4 + -1) {
        iVar6 = FUN_004515a0(puVar2,param_3,puVar1,param_2);
        puVar1 = puVar1 + 5;
      }
      iVar6 = 0;
      param_4 = 0;
      puVar3 = puVar2;
      puVar5 = puVar2;
      if (param_3 != (undefined *)0x0) {
        do {
          if (*(char *)(puVar3 + 1) != '\0') {
            if (puVar5 != puVar3) {
              *puVar5 = *puVar3;
              *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar3 + 1);
              iVar6 = param_4;
            }
            puVar5 = (undefined4 *)((int)puVar5 + 5);
            iVar6 = iVar6 + 1;
            param_4 = iVar6;
          }
          param_3 = (undefined *)((int)param_3 + -1);
          puVar3 = (undefined4 *)((int)puVar3 + 5);
        } while (param_3 != (undefined *)0x0);
        if (iVar6 != 0) goto LAB_00451561;
      }
      if (*(undefined4 **)(param_1 + 0x25c) != puVar2) {
        FUN_00446d20(param_1,puVar2);
      }
      puVar2 = (undefined4 *)0x0;
      goto LAB_00451561;
    }
  }
  iVar6 = 0;
LAB_00451561:
  puVar3 = *(undefined4 **)(param_1 + 0x25c);
  *(int *)(param_1 + 600) = iVar6;
  if (puVar3 == puVar2) {
    return;
  }
  if (puVar3 != (undefined4 *)0x0) {
    FUN_00446d20(param_1,puVar3);
  }
  *(undefined4 **)(param_1 + 0x25c) = puVar2;
  return;
}

