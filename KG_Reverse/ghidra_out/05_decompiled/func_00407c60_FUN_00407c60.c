// Function: FUN_00407c60
// Entry:    00407c60
// Size:     601 bytes
// Conv:     unknown
// Signature: undefined FUN_00407c60(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00407d4e) */
/* WARNING: Removing unreachable block (ram,0x00407d8e) */

undefined4 __thiscall FUN_00407c60(int param_1,undefined4 *param_2)

{
  int iVar1;
  float10 fVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined1 local_34 [52];
  
  FUN_0049557d(param_2);
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 5:
    iVar1 = FUN_00482c94(*param_2);
    if (((0xff < iVar1) || (iVar1 = FUN_00482c94(*param_2), -1 < iVar1)) &&
       (iVar1 = FUN_00482c94(*param_2), iVar1 < 0x100)) {
      FUN_00482c94(*param_2);
    }
    goto LAB_00407db3;
  case 6:
    iVar1 = FUN_00482c94(*param_2);
    if (((0x7fff < iVar1) || (iVar1 = FUN_00482c94(*param_2), -0x8001 < iVar1)) &&
       (iVar1 = FUN_00482c94(*param_2), iVar1 < 0x8000)) {
      FUN_00482c94(*param_2);
    }
    FUN_0041b850();
    break;
  case 7:
    lVar3 = FUN_00482c9f(*param_2);
    if (lVar3 < 0x80000000) {
      uVar4 = FUN_00482c9f(*param_2);
      if ((0x7fffffffffffffff < uVar4) &&
         (((longlong)uVar4 < -0x100000000 || ((uint)uVar4 < 0x80000000)))) goto LAB_00407db3;
    }
    lVar3 = FUN_00482c9f(*param_2);
    if (lVar3 < 0x80000000) {
      FUN_00482c9f(*param_2);
    }
LAB_00407db3:
    FUN_0041b850();
    break;
  case 8:
    uVar5 = FUN_00482c9f(*param_2,local_34,10);
    FUN_004834b5(uVar5);
    break;
  case 9:
    fVar2 = (float10)FUN_00482bb2(*param_2);
    FUN_0041bd10((float)fVar2,local_34);
    break;
  case 10:
    puVar6 = local_34;
    fVar2 = (float10)FUN_00482bb2();
    FUN_0041bda0((double)fVar2,puVar6);
    break;
  case 0xb:
    iVar1 = FUN_0041c080();
    if ((iVar1 == 0) || ((double)CONCAT44(uStack_38,local_3c) == 0.0)) {
      local_34[0] = 0;
    }
    else {
      FUN_0041bec0(local_3c,uStack_38,local_34);
    }
    break;
  default:
    goto switchD_00407c80_default;
  }
  if ((*(int *)(param_1 + 0x78) != 0xb) && (iVar1 = FUN_00482dc4(), iVar1 == 0)) {
    local_34[0] = 0;
  }
  iVar1 = FUN_00482dc4();
  if (iVar1 != 0) {
    FUN_00493313(local_34);
    return 1;
  }
switchD_00407c80_default:
  return 0;
}

