// Function: FUN_004237d0
// Entry:    004237d0
// Size:     543 bytes
// Conv:     unknown
// Signature: undefined FUN_004237d0(void)
// Decompiled by Ghidra 12.1.2


int * FUN_004237d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  DWORD DVar4;
  int *piVar5;
  HICON pHVar6;
  bool bVar7;
  undefined4 uVar8;
  char local_40 [2];
  byte local_3e;
  DWORD local_38;
  undefined4 local_34;
  short local_28;
  short local_26;
  uint local_24;
  uint local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049f4d8;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffb4;
  local_18 = (int *)0x0;
  ExceptionList = &local_10;
  FUN_00493768();
  uVar8 = 6;
  local_8 = 1;
  iVar1 = (**(code **)(*param_1 + 0x34))(&local_28,6);
  if ((((iVar1 == 6) && (local_28 == 0)) && ((local_26 == 1 || (local_26 == 2)))) &&
     ((short)local_24 != 0)) {
    local_1c = (uint)(local_26 == 1);
    if ((local_24 & 0xffff) != 0) {
      for (iVar1 = 0; iVar1 < (int)(local_24 & 0xffff); iVar1 = iVar1 + 1) {
        (**(code **)(*param_1 + 0x28))(iVar1 * 0x10 + 6,0);
        iVar2 = (**(code **)(*param_1 + 0x34))(local_40,0x10);
        if (iVar2 != 0x10) goto LAB_004239b0;
        if (0xf < local_3e) {
          if (param_2 == 1) {
            bVar7 = local_40[0] == ' ';
          }
          else {
            bVar7 = local_40[0] == '\x10';
          }
          if (bVar7) break;
        }
      }
      piVar3 = (int *)FUN_00492f17(local_38);
      local_18 = piVar3;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*param_1 + 0x28))(local_34,0);
        DVar4 = (**(code **)(*param_1 + 0x34))(piVar3,local_38);
        if (DVar4 == local_38) {
          piVar5 = (int *)FUN_00492f17(0x18);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = 0;
            piVar5[1] = 0;
            piVar5[2] = 0;
            piVar5[3] = 0;
            piVar5[4] = 0;
            piVar5[5] = 0;
          }
          iVar1 = piVar3[1];
          piVar5[1] = iVar1;
          iVar2 = piVar3[2];
          piVar5[2] = iVar2 / 2;
          pHVar6 = CreateIconFromResourceEx((PBYTE)piVar3,local_38,1,0x30000,iVar1,iVar2 / 2,0);
          piVar5[3] = (int)pHVar6;
          if ((pHVar6 == (HICON)0x0) && (*(short *)((int)piVar3 + 0xe) != 0x10)) {
            pHVar6 = CreateIconFromResource((PBYTE)piVar3,local_38,1,0x30000);
            piVar5[3] = (int)pHVar6;
          }
          FUN_00492f40(piVar3);
          if (piVar5[3] != 0) {
            local_8 = 0xffffffff;
            *piVar5 = (local_1c != 1) + 3;
            FUN_004937a6();
            ExceptionList = local_10;
            return piVar5;
          }
          if (piVar5 == (int *)0x0) goto LAB_004239b0;
          *piVar5 = 0;
          piVar5[1] = 0;
          piVar5[2] = 0;
          piVar5[5] = 0;
          if ((HICON)piVar5[3] != (HICON)0x0) {
            DestroyIcon((HICON)piVar5[3]);
            piVar5[3] = 0;
          }
          piVar3 = piVar5;
          if (piVar5[4] != 0) {
            FUN_00492f40(piVar5[4]);
            piVar5[4] = 0;
          }
        }
        FUN_00492f40(piVar3);
      }
    }
  }
LAB_004239b0:
  local_8 = 0xffffffff;
  FUN_004937a6();
  piVar3 = (int *)FUN_00423a17(uVar8);
  return piVar3;
}

