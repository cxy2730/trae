// Function: FUN_00428980
// Entry:    00428980
// Size:     1026 bytes
// Conv:     unknown
// Signature: undefined FUN_00428980(void)
// Decompiled by Ghidra 12.1.2


HDC FUN_00428980(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BOOL BVar4;
  PDEVMODEA pDevModeOutput;
  int extraout_ECX;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  char *pcVar8;
  HDC pHVar9;
  BYTE *pBVar10;
  char *pcVar11;
  PDEVMODEA p_Var12;
  uint uVar13;
  uint in_stack_00000014;
  int in_stack_00000024;
  int in_stack_00000038;
  int in_stack_00000098;
  uint in_stack_000000a4;
  uint in_stack_000000ac;
  short sStack000000b0;
  short sStack000000b2;
  void *in_stack_0000140c;
  LPSTR pCStack_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0049fba2;
  pCStack_c = ExceptionList;
  ExceptionList = &pCStack_c;
  FUN_004835e0();
  if (*(int *)(extraout_ECX + 0xc) == 0) {
    ExceptionList = in_stack_0000140c;
    return (HDC)0x0;
  }
  FUN_00429460();
  iVar2 = (**(code **)(**(int **)(extraout_ECX + 0xc) + 0x5c))();
  if (iVar2 != 0) {
    FUN_00429600();
  }
  pcVar7 = GetProfileStringA_exref;
  GetProfileStringA(s_windows_02fb0378,s_device_02fb0380,&DAT_02fb0388,&stack0x00000218,500);
  iVar2 = FUN_0048406b();
  GetProfileStringA(s_devices_02fb036c,(LPCSTR)0x0,&DAT_02fe8c38,&stack0x0000040c,0x1000);
  pcVar8 = &stack0x0000040c;
  uStack_4 = 0xffffffff;
  uVar13 = 0xffffffff;
  pCStack_c = PTR_DAT_02fd8088;
  FUN_004923a5();
  FUN_004923a5();
  FUN_004923a5();
  do {
    uVar5 = 0xffffffff;
    pcVar11 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    if (~uVar5 == 1) {
      if (uVar13 == 0xffffffff) {
        uVar13 = -(uint)(uStack_4 != 0xffffffff) & uStack_4;
      }
      if ((int)(in_stack_00000014 - 1) < (int)uVar13) {
        FUN_004923d8();
        FUN_004923d8();
        FUN_004923d8();
        FUN_004931d6();
        FUN_004294e0();
        ExceptionList = in_stack_0000140c;
        return (HDC)0x0;
      }
      FUN_004932c3();
      pHVar9 = (HDC)0x0;
      BVar4 = OpenPrinterA(pCStack_c,&puStack_8,(LPPRINTER_DEFAULTSA)0x0);
      if (BVar4 == 1) {
        uVar5 = DocumentPropertiesA((HWND)0x0,puStack_8,pCStack_c,(PDEVMODEA)&stack0x00000184,
                                    (PDEVMODEA)0x0,0);
        FUN_004062a0();
        pDevModeOutput = (PDEVMODEA)FUN_004062c0();
        if (in_stack_000000ac == uVar5) {
          pBVar10 = (BYTE *)(-(uint)(in_stack_000000ac != 0) & in_stack_000000a4);
          p_Var12 = pDevModeOutput;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)p_Var12->dmDeviceName = *(undefined4 *)pBVar10;
            pBVar10 = pBVar10 + 4;
            p_Var12 = (PDEVMODEA)(p_Var12->dmDeviceName + 4);
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            p_Var12->dmDeviceName[0] = *pBVar10;
            pBVar10 = pBVar10 + 1;
            p_Var12 = (PDEVMODEA)(p_Var12->dmDeviceName + 1);
          }
        }
        else {
          DocumentPropertiesA((HWND)0x0,puStack_8,pCStack_c,pDevModeOutput,(PDEVMODEA)0x0,2);
          pDevModeOutput->dmFields = pDevModeOutput->dmFields | 3;
        }
        (pDevModeOutput->field6_0x2c).field0.dmPaperSize = sStack000000b0;
        (pDevModeOutput->field6_0x2c).field0.dmOrientation = sStack000000b2;
        FUN_0041d250();
        pHVar9 = CreateDCA(*(LPCSTR *)(in_stack_00000038 + uVar13 * 4),pCStack_c,
                           *(LPCSTR *)(in_stack_00000024 + uVar13 * 4),pDevModeOutput);
        ClosePrinter(puStack_8);
        FUN_004064a0();
      }
      FUN_004923d8();
      FUN_004923d8();
      FUN_004923d8();
      FUN_004931d6();
      FUN_004294e0();
      ExceptionList = in_stack_0000140c;
      return pHVar9;
    }
    (*pcVar7)();
    iVar3 = FUN_0048406b();
    if (((iVar3 != 0) && (iVar3 = FUN_0048406b(), iVar3 != 0)) &&
       (iVar3 = FUN_004850c0(), iVar3 != 0)) {
      FUN_00492581();
      FUN_00492581();
      FUN_00492581();
      if ((iVar2 != 0) && (iVar3 = FUN_004850c0(), iVar3 == 0)) {
        uStack_4 = in_stack_00000014;
      }
      if ((*(int *)(in_stack_00000098 + -8) != 0) && (iVar3 = FUN_004850c0(), iVar3 == 0)) {
        uVar13 = in_stack_00000014;
      }
    }
    pcVar8 = pcVar8 + ~uVar5;
    pcVar7 = GetProfileStringA_exref;
  } while( true );
}

