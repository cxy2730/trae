// Function: FUN_0041eb90
// Entry:    0041eb90
// Size:     753 bytes
// Conv:     unknown
// Signature: undefined FUN_0041eb90(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x0041eca1) */
/* WARNING: Removing unreachable block (ram,0x0041ece5) */

void __fastcall FUN_0041eb90(int param_1)

{
  char cVar1;
  int iVar2;
  float lParam;
  uint uVar3;
  undefined4 extraout_EDX;
  char *pcVar4;
  float10 fVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined *local_50;
  float local_4c;
  float local_48;
  undefined4 uStack_44;
  char local_40 [52];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0049f0e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041dc90();
  local_50 = PTR_DAT_02fd8088;
  local_4 = 0;
  FUN_0049557d(&local_50);
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 1:
    iVar2 = FUN_00482c94(local_50);
    if (((0xff < iVar2) || (iVar2 = FUN_00482c94(local_50), -1 < iVar2)) &&
       (iVar2 = FUN_00482c94(local_50), iVar2 < 0x100)) {
LAB_0041ec2f:
      FUN_00482c94(local_50);
    }
    goto LAB_0041ed08;
  case 2:
    iVar2 = FUN_00482c94(local_50);
    if (((0x7fff < iVar2) || (iVar2 = FUN_00482c94(local_50), -0x8001 < iVar2)) &&
       (iVar2 = FUN_00482c94(local_50), iVar2 < 0x8000)) goto LAB_0041ec2f;
    goto LAB_0041ed08;
  case 3:
  case 9:
    lVar6 = FUN_00482c9f(local_50);
    if (lVar6 < 0x80000000) {
      uVar7 = FUN_00482c9f(local_50);
      if ((0x7fffffffffffffff < uVar7) &&
         (((longlong)uVar7 < -0x100000000 || ((uint)uVar7 < 0x80000000)))) {
        uStack_44 = 0xffffffff;
        goto LAB_0041ed08;
      }
    }
    lVar6 = FUN_00482c9f(local_50);
    if (lVar6 < 0x80000000) {
      FUN_00482c9f(local_50);
      uStack_44 = extraout_EDX;
    }
    else {
      uStack_44 = 0;
    }
LAB_0041ed08:
    FUN_0041b850();
    break;
  case 4:
    uVar8 = FUN_00482c9f(local_50,local_40,10);
    FUN_004834b5(uVar8);
    break;
  case 5:
    fVar5 = (float10)FUN_00482bb2(local_50);
    local_4c = (float)fVar5;
    FUN_0041bd10(local_4c);
    break;
  case 6:
    pcVar4 = local_40;
    fVar5 = (float10)FUN_00482bb2();
    FUN_0041bda0((double)fVar5,pcVar4);
    break;
  default:
    goto switchD_0041ebde_caseD_7;
  case 8:
    iVar2 = FUN_0041c080();
    if ((iVar2 == 0) || ((double)CONCAT44(uStack_44,local_48) == 0.0)) {
      local_40[0] = '\0';
    }
    else {
      FUN_0041bec0(local_48,uStack_44,local_40);
    }
  }
  if ((*(int *)(param_1 + 0x40) != 8) && (iVar2 = FUN_00482dc4(), iVar2 == 0)) {
    local_40[0] = '\0';
  }
  iVar2 = FUN_00482dc4();
  if (iVar2 != 0) {
    SendMessageA(*(HWND *)(param_1 + 0x1c),0xb0,(WPARAM)&local_4c,(LPARAM)&local_48);
    FUN_004974ae(local_40);
    uVar3 = 0xffffffff;
    pcVar4 = local_40;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    lParam = local_4c;
    if (~uVar3 - 1 == *(int *)(local_50 + -8)) {
      lParam = local_48;
    }
    SendMessageA(*(HWND *)(param_1 + 0x1c),0xb1,(WPARAM)local_4c,(LPARAM)lParam);
    SendMessageA(*(HWND *)(param_1 + 0x1c),0xb7,0,0);
  }
switchD_0041ebde_caseD_7:
  local_4 = 0xffffffff;
  FUN_004931d6();
  ExceptionList = local_c;
  return;
}

