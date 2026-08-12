// Function: FUN_00414800
// Entry:    00414800
// Size:     732 bytes
// Conv:     unknown
// Signature: undefined FUN_00414800(void)
// Decompiled by Ghidra 12.1.2


void FUN_00414800(int param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  HGDIOBJ h;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int c;
  uint local_54;
  int local_4c;
  undefined1 local_48 [60];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049e918;
  local_c = ExceptionList;
  switch(*(undefined2 *)(param_1 + 0xc)) {
  case 1000:
  case 0x3e9:
  case 0x3ee:
  case 0x3f6:
  case 0x3f7:
  case 0x3f9:
    *param_4 = *param_3;
    return;
  case 0x3ea:
  case 0x3ec:
    *param_4 = *param_3;
    param_4[1] = param_3[1];
    return;
  case 0x3eb:
    *param_4 = (uint)(*param_3 == 1);
    return;
  case 0x3ed:
  case 0x3ef:
  case 0x3f0:
  case 0x3fa:
  case 0x3fb:
  case 0x3fc:
  case 0x3fd:
  case 0x3fe:
    puVar4 = (undefined1 *)*param_3;
    ExceptionList = &local_c;
    goto LAB_00414abb;
  case 0x3f3:
    if (3 < param_3[1]) {
      ExceptionList = &local_c;
      FUN_004062a0();
      local_4 = 0;
      FUN_004069d0(*param_3,param_3[1]);
      puVar3 = (undefined4 *)(-(uint)(local_4c != 0) & local_54);
      uVar1 = FUN_0041cc10(*puVar3);
      *puVar3 = uVar1;
      uVar2 = FUN_0040f9b0(puVar3,local_4c);
      local_4 = 0xffffffff;
      *param_4 = uVar2;
      FUN_004064a0();
      ExceptionList = local_c;
      return;
    }
  case 0x3f1:
  case 0x3f2:
  case 0x3f4:
  case 0x3ff:
  case 0x400:
    ExceptionList = &local_c;
    uVar2 = FUN_0040f9b0(*param_3,param_3[1]);
    break;
  case 0x3f5:
    puVar4 = (undefined1 *)*param_3;
    if ((puVar4 == (undefined1 *)0x0) || (ExceptionList = &local_c, param_3[1] != 0x3c)) {
      puVar4 = local_48;
      c = 0x3c;
      ExceptionList = &local_c;
      h = GetStockObject(0x11);
      GetObjectA(h,c,puVar4);
      puVar4 = local_48;
    }
    switch(param_2) {
    case 0:
      *param_4 = *(uint *)(puVar4 + 0xc);
      ExceptionList = local_c;
      return;
    case 1:
      uVar2 = (uint)(699 < *(int *)(puVar4 + 0x10));
      break;
    case 2:
      *param_4 = (uint)(puVar4[0x14] != '\0');
      ExceptionList = local_c;
      return;
    case 3:
      *param_4 = (uint)(puVar4[0x16] != '\0');
      ExceptionList = local_c;
      return;
    case 4:
      uVar2 = (uint)(puVar4[0x15] != '\0');
      break;
    case 5:
      uVar2 = FUN_0041c440(puVar4);
      *param_4 = uVar2;
      ExceptionList = local_c;
      return;
    case 6:
      puVar4 = puVar4 + 0x1c;
      goto LAB_00414abb;
    case 0xffffffff:
      puVar3 = (undefined4 *)FUN_0041b6c0(0x1c);
      *param_4 = (uint)puVar3;
      *puVar3 = *(undefined4 *)(puVar4 + 0xc);
      puVar3[1] = (uint)(699 < *(int *)(puVar4 + 0x10));
      puVar3[2] = (uint)(puVar4[0x14] != '\0');
      puVar3[3] = (uint)(puVar4[0x16] != '\0');
      puVar3[4] = (uint)(puVar4[0x15] != '\0');
      uVar1 = FUN_0041c440(puVar4);
      puVar3[5] = uVar1;
      uVar1 = FUN_0040f920(puVar4 + 0x1c);
      puVar3[6] = uVar1;
      ExceptionList = local_c;
      return;
    default:
      goto switchD_00414834_default;
    }
    break;
  case 0x3f8:
    puVar4 = (undefined1 *)*param_3;
    ExceptionList = &local_c;
LAB_00414abb:
    uVar2 = FUN_0040f920(puVar4);
    break;
  default:
    goto switchD_00414834_default;
  }
  *param_4 = uVar2;
switchD_00414834_default:
  ExceptionList = local_c;
  return;
}

