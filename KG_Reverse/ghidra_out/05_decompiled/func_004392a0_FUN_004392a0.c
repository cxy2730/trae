// Function: FUN_004392a0
// Entry:    004392a0
// Size:     1226 bytes
// Conv:     unknown
// Signature: undefined FUN_004392a0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x004397d4) */

void __fastcall FUN_004392a0(int param_1)

{
  code *pcVar1;
  HANDLE pvVar2;
  undefined1 *puVar3;
  HCURSOR pHVar4;
  HGDIOBJ pvVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  CHAR *pCVar13;
  undefined4 uVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  CHAR local_1bc [260];
  undefined1 local_b8 [68];
  CMemFile local_74 [48];
  undefined **local_44;
  int local_40;
  uint local_34;
  uint local_2c;
  int *local_28;
  code *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_004a0b53;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xfffffe38;
  ExceptionList = &pvStack_10;
  local_18 = param_1;
  pvVar2 = GetProcessHeap();
  *(HANDLE *)(param_1 + 0x40c) = pvVar2;
  *(undefined4 *)(param_1 + 0xc4) = 3;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0x2a36a;
  if (*(int *)(param_1 + 0x404) == 0) {
    OleInitialize((LPVOID)0x0);
    *(undefined4 *)(param_1 + 0x404) = 1;
  }
  GetModuleFileNameA((HMODULE)0x0,local_1bc,0x104);
  puVar3 = (undefined1 *)FUN_00483fd4(local_1bc,0x5c);
  if (puVar3 == (undefined1 *)0x0) {
    FUN_00493161();
    pCVar13 = local_1bc;
  }
  else {
    *puVar3 = 0;
    FUN_00493313(local_1bc);
    pCVar13 = puVar3 + 1;
  }
  FUN_00493313(pCVar13);
  SetCurrentDirectoryA(*(LPCSTR *)(param_1 + 0xd0));
  FUN_00426cd0(&LAB_0046b0b0,FUN_0046b0d0,FUN_0046b0c0);
  FUN_00426cd0(&LAB_00401000,&LAB_00401000,&LAB_00401002);
  FUN_00426cd0(&LAB_00401000,&LAB_00401000,&LAB_00401002);
  pHVar4 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  uVar23 = 0;
  uVar22 = 0;
  uVar21 = 0;
  uVar20 = 0;
  uVar19 = 0;
  uVar18 = 0;
  uVar17 = 0;
  uVar16 = 0;
  puVar15 = &DAT_02fe8ccc;
  uVar14 = 0;
  pvVar5 = GetStockObject(5);
  uVar14 = FUN_0041c6c0(s__EL_HideOwner_02fb1104,0,pHVar4,pvVar5,uVar14,puVar15,uVar16,uVar17,uVar18
                        ,uVar19,uVar20,uVar21,uVar22,uVar23);
  FUN_0049510e(0x80,uVar14,puVar15,uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23);
  DVar6 = GetCurrentThreadId();
  iVar8 = local_18;
  *(DWORD *)(param_1 + 0x228) = DVar6;
  *(undefined **)(param_1 + 0x198) = &DAT_004a5d3c;
  *(char **)(param_1 + 0x19c) = "";
  FUN_004069d0(0,0x48);
  FUN_004069d0(0,0x48);
  FUN_004069d0(0,0x48);
  FUN_004069d0(0,0x48);
  iVar7 = 0;
  do {
    if ((-1 < iVar7) && (iVar7 < (int)(*(uint *)(iVar8 + 0x158) >> 2))) {
      *(undefined **)(*(int *)(iVar8 + 0x150) + iVar7 * 4) = (&PTR_s_kernel32_dll_004a2764)[iVar7];
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x12);
  iVar8 = 0;
  do {
    if ((-1 < iVar8) && (iVar8 < (int)(*(uint *)(local_18 + 0x16c) >> 2))) {
      *(undefined **)(*(int *)(local_18 + 0x164) + iVar8 * 4) =
           (&PTR_s_CreateDirectoryA_004a27ac)[iVar8];
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x12);
  iVar8 = 0;
  do {
    if (((&PTR_PTR_004a2a00)[iVar8] != (undefined *)0x0) &&
       (pcVar1 = *(code **)((&PTR_PTR_004a2a00)[iVar8] + 0x78), pcVar1 != (code *)0x0)) {
      (*pcVar1)(1,&LAB_00413da0,0);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  FUN_004069d0(&PTR_PTR_004a2a00,0x18);
  FUN_004069d0(0,0x18);
  FUN_004062a0();
  local_44 = &PTR_FUN_02f96e70;
  local_40 = local_18;
  local_8 = 0;
  FUN_00493768();
  local_8._0_1_ = 2;
  FUN_0049a8c4(0x400);
  local_8._0_1_ = 3;
  FUN_0049a910(&DAT_02ee87d8,0xab45f,0);
  FUN_0049a0a5(local_74,1,0x1000,0);
  local_8._0_1_ = 4;
  FUN_0040f7d0(local_b8);
  FUN_0049a209();
  local_8._0_1_ = 3;
  FUN_0049a181();
  local_8 = CONCAT31(local_8._1_3_,2);
  CMemFile::~CMemFile(local_74);
  local_8 = 0;
  FUN_004937a6();
  local_24 = FUN_00401004;
  uVar11 = local_2c >> 3;
  piVar12 = (int *)((-(uint)(local_2c != 0) & local_34) + uVar11 * 4);
  while (uVar11 != 0) {
    iVar8 = 0;
    local_1c = *(int *)(*piVar12 + 0x18);
    local_28 = piVar12;
    local_20 = uVar11;
    if (0 < local_1c) {
      do {
        iVar7 = FUN_0040e730(iVar8,0);
        iVar9 = FUN_0040ee10(iVar8);
        if (iVar9 == 1) {
          iVar9 = FUN_00406cf0(iVar7 + 0x18);
          iVar9 = iVar7 + 0x18 + iVar9;
          iVar7 = FUN_00406cf0(iVar9);
          iVar7 = iVar9 + 0xc + iVar7;
          iVar9 = FUN_00406cf0(iVar7);
          piVar12 = (int *)(iVar7 + iVar9);
          if (*piVar12 == -1) {
            *piVar12 = 0;
          }
          else {
            *piVar12 = (int)(local_24 + *piVar12);
          }
        }
        else {
          iVar10 = FUN_00406cf0(iVar7 + 0x18);
          iVar10 = iVar7 + 0x18 + iVar10;
          iVar7 = FUN_00406cf0(iVar10);
          iVar9 = *(int *)(iVar10 + 0x1c + iVar7);
          iVar7 = iVar10 + 0x1c + iVar7;
          iVar7 = *(int *)(iVar7 + 4 + iVar9 * 4) + iVar7 + 8 + iVar9 * 4;
          iVar10 = FUN_00406cf0(iVar7);
          iVar9 = *(int *)(iVar10 + 0xc + iVar7);
          piVar12 = (int *)(iVar10 + 0xc + iVar7);
          if (0 < iVar9) {
            do {
              piVar12 = piVar12 + 2;
              if (*piVar12 == -1) {
                *piVar12 = 0;
              }
              else {
                *piVar12 = (int)(local_24 + *piVar12);
              }
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_1c);
    }
    piVar12 = local_28 + 1;
    uVar11 = local_20 - 1;
    local_28 = piVar12;
    local_20 = uVar11;
  }
  FUN_0040ed90(&local_44);
  FUN_004064a0();
  local_44 = &PTR_FUN_02f96e70;
  local_8 = 8;
  FUN_0040f710();
  local_44 = &PTR_FUN_02f96e64;
  local_8 = 9;
  FUN_004397b6();
  return;
}

