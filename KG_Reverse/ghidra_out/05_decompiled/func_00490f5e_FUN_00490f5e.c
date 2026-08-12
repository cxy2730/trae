// Function: FUN_00490f5e
// Entry:    00490f5e
// Size:     845 bytes
// Conv:     unknown
// Signature: undefined FUN_00490f5e(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00490f5e(undefined4 *param_1,char *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_10;
  int local_8;
  
  piVar1 = param_3;
  pcVar4 = param_2;
  do {
    if (*pcVar4 == '\0') {
      FUN_004935ba();
      FUN_00485066(*param_1,param_2,piVar1);
      FUN_00493609();
      return;
    }
    if (*pcVar4 == '%') {
      pcVar4 = (char *)FUN_004859c8();
      cVar3 = *pcVar4;
      if (cVar3 == '%') goto LAB_00491263;
      local_8 = 0;
      if (cVar3 == '\0') {
LAB_00490fe6:
        local_8 = FUN_00482c94();
        while ((*pcVar4 != '\0' && (iVar5 = FUN_004853ce(), iVar5 != 0))) {
          pcVar4 = (char *)FUN_004859c8();
        }
      }
      else {
        do {
          if (cVar3 != '#') {
            if (cVar3 == '*') {
              local_8 = *param_3;
              param_3 = param_3 + 1;
            }
            else if ((((cVar3 != '-') && (cVar3 != '+')) && (cVar3 != '0')) && (cVar3 != ' '))
            break;
          }
          pcVar4 = (char *)FUN_004859c8();
          cVar3 = *pcVar4;
        } while (cVar3 != '\0');
        if (local_8 == 0) goto LAB_00490fe6;
      }
      iVar5 = 0;
      if (*pcVar4 == '.') {
        pcVar4 = (char *)FUN_004859c8();
        if (*pcVar4 == '*') {
          iVar5 = *param_3;
          pcVar4 = (char *)FUN_004859c8();
          param_3 = param_3 + 1;
        }
        else {
          iVar5 = FUN_00482c94();
          while ((*pcVar4 != '\0' && (iVar6 = FUN_004853ce(), iVar6 != 0))) {
            pcVar4 = (char *)FUN_004859c8();
          }
        }
      }
      piVar2 = param_3;
      local_10 = 0;
      iVar6 = FUN_0048360f(pcVar4);
      if (iVar6 == 0) {
        pcVar4 = pcVar4 + 3;
        local_10 = 0x40000;
      }
      else {
        cVar3 = *pcVar4;
        if (((cVar3 != 'F') && (cVar3 != 'L')) && (cVar3 != 'N')) {
          if (cVar3 == 'h') {
            local_10 = 0x10000;
          }
          else {
            if (cVar3 != 'l') goto LAB_004910b7;
            local_10 = 0x20000;
          }
        }
        pcVar4 = (char *)FUN_004859c8();
      }
LAB_004910b7:
      uVar7 = (int)*pcVar4 | local_10;
      if ((int)uVar7 < 0x10064) {
        if ((uVar7 != 0x10063) && (uVar7 != 0x43)) {
          if (uVar7 == 0x53) goto LAB_0049116b;
          if (uVar7 != 99) {
            if (uVar7 != 0x73) {
              if (uVar7 == 0x10043) goto LAB_004911b7;
              if (uVar7 != 0x10053) goto LAB_00491107;
            }
LAB_0049118b:
            if ((LPCSTR)*param_3 != (LPCSTR)0x0) {
              iVar6 = lstrlenA((LPCSTR)*param_3);
LAB_004911a5:
              param_3 = param_3 + 1;
              if (iVar6 < 1) {
                iVar6 = 1;
              }
              if (iVar6 == 0) goto LAB_00491107;
            }
          }
        }
        goto LAB_004911b7;
      }
      if (uVar7 == 0x10073) goto LAB_0049118b;
      if (uVar7 == 0x20043) {
LAB_004911b7:
        param_3 = piVar2 + 1;
      }
      else {
        if (uVar7 == 0x20053) {
LAB_0049116b:
          if (*param_3 != 0) {
            iVar6 = FUN_00483fb7();
            goto LAB_004911a5;
          }
          goto LAB_004911b7;
        }
        if (uVar7 == 0x20063) goto LAB_004911b7;
        if (uVar7 == 0x20073) goto LAB_0049116b;
LAB_00491107:
        cVar3 = *pcVar4;
        if (cVar3 < 'j') {
          if (cVar3 == 'i') goto LAB_0049124e;
          if (cVar3 == 'G') {
LAB_00491218:
            param_3 = param_3 + 2;
          }
          else {
            if ((cVar3 == 'X') || (cVar3 == 'd')) goto LAB_0049124e;
            if (cVar3 == 'e') goto LAB_00491218;
            if (cVar3 == 'f') {
              FUN_004835e0();
              FUN_00484eda(&stack0xffffffdc,"%*.*f",local_8,iVar5 + 6,*(undefined8 *)param_3);
              _strlen(&stack0xffffffdc);
              param_3 = param_3 + 2;
            }
            else if (cVar3 == 'g') goto LAB_00491218;
          }
        }
        else {
          if (cVar3 == 'n') {
            param_3 = param_3 + 1;
            goto LAB_0049126d;
          }
          if (cVar3 == 'o') {
LAB_0049124e:
            if ((local_10 & 0x40000) != 0) {
              param_3 = param_3 + 2;
              goto LAB_0049126d;
            }
          }
          else if (cVar3 != 'p') {
            if ((cVar3 != 'u') && (cVar3 != 'x')) goto LAB_0049126d;
            goto LAB_0049124e;
          }
          param_3 = param_3 + 1;
        }
      }
    }
    else {
LAB_00491263:
      FUN_004859df();
    }
LAB_0049126d:
    pcVar4 = (char *)FUN_004859c8();
  } while( true );
}

