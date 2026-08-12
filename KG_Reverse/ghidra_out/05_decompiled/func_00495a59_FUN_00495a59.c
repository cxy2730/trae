// Function: FUN_00495a59
// Entry:    00495a59
// Size:     1198 bytes
// Conv:     unknown
// Signature: undefined FUN_00495a59(void)
// Decompiled by Ghidra 12.1.2


/* WARNING (jumptable): Unable to track spacebase fully for stack */

undefined4 FUN_00495a59(void)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  AFX_MSGMAP_ENTRY *pAVar6;
  DWORD DVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *extraout_ECX;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  code *pcVar13;
  int unaff_EBP;
  short sVar14;
  undefined4 uVar15;
  
  FUN_004858b8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *(int *)(unaff_EBP + 8);
  if (iVar3 == 0x111) {
    iVar3 = (**(code **)(*extraout_ECX + 0x78))
                      (*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar3 != 0) {
LAB_00495eaf:
      *(undefined4 *)(unaff_EBP + -0x10) = 1;
      goto switchD_00495c2d_caseD_26;
    }
LAB_00495be2:
    uVar15 = 0;
    goto LAB_00495be4;
  }
  if (iVar3 == 0x4e) {
    if (**(int **)(unaff_EBP + 0x10) != 0) {
      iVar3 = (**(code **)(*extraout_ECX + 0x7c))
                        (*(undefined4 *)(unaff_EBP + 0xc),*(int **)(unaff_EBP + 0x10),
                         unaff_EBP + -0x10);
LAB_00495ab2:
      if (iVar3 != 0) goto switchD_00495c2d_caseD_26;
    }
    goto LAB_00495be2;
  }
  puVar9 = *(undefined4 **)(unaff_EBP + 0x10);
  if (iVar3 == 6) {
    uVar15 = FUN_00494bb2(puVar9);
    FUN_00494910(extraout_ECX,*(undefined4 *)(unaff_EBP + 0xc),uVar15);
  }
  sVar14 = (short)puVar9;
  if ((iVar3 == 0x20) &&
     (iVar3 = FUN_00494971(extraout_ECX,(int)sVar14,(uint)puVar9 >> 0x10), iVar3 != 0))
  goto LAB_00495eaf;
  uVar4 = (**(code **)(*extraout_ECX + 0x28))();
  *(uint *)(unaff_EBP + -0x14) = uVar4;
  uVar12 = uVar4 & 0x1ff ^ *(uint *)(unaff_EBP + 8) & 0x1ff;
  FUN_0049d98a(7);
  uVar4 = *(uint *)(unaff_EBP + 8);
  iVar3 = uVar12 * 0xc;
  iVar5 = *(int *)(unaff_EBP + -0x14);
  if ((uVar4 != *(uint *)(&DAT_0300f280 + uVar12 * 0xc)) ||
     (iVar5 != *(int *)(&DAT_0300f288 + iVar3))) {
    *(uint *)(&DAT_0300f280 + iVar3) = uVar4;
    *(int *)(&DAT_0300f288 + iVar3) = iVar5;
    if (iVar5 != 0) {
      while( true ) {
        if (uVar4 < 0xc000) {
          pAVar6 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar5 + 4),uVar4,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
          if (pAVar6 != (AFX_MSGMAP_ENTRY *)0x0) {
            *(AFX_MSGMAP_ENTRY **)(&DAT_0300f284 + iVar3) = pAVar6;
            FUN_0049d9fa(7);
            iVar3 = *(int *)(unaff_EBP + 0x10);
            goto LAB_00495c02;
          }
        }
        else {
          pAVar6 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar5 + 4),0xc000,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
          if (pAVar6 != (AFX_MSGMAP_ENTRY *)0x0) {
            while( true ) {
              if (**(int **)(pAVar6 + 0x10) == *(int *)(unaff_EBP + 8)) {
                *(AFX_MSGMAP_ENTRY **)(&DAT_0300f284 + iVar3) = pAVar6;
                FUN_0049d9fa(7);
                iVar3 = *(int *)(unaff_EBP + 0x10);
                goto LAB_00495ee5;
              }
              pAVar6 = AfxFindMessageEntry(pAVar6 + 0x18,0xc000,0,0);
              *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar6;
              if (pAVar6 == (AFX_MSGMAP_ENTRY *)0x0) break;
              pAVar6 = *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10);
            }
          }
        }
        iVar5 = **(int **)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x14) = iVar5;
        if (iVar5 == 0) break;
        iVar5 = *(int *)(unaff_EBP + -0x14);
        uVar4 = *(uint *)(unaff_EBP + 8);
      }
    }
    *(undefined4 *)(&DAT_0300f284 + iVar3) = 0;
    FUN_0049d9fa(7);
    goto LAB_00495be2;
  }
  iVar3 = *(int *)(&DAT_0300f284 + iVar3);
  *(int *)(unaff_EBP + 0x10) = iVar3;
  FUN_0049d9fa(7);
  if (iVar3 == 0) goto LAB_00495be2;
  if (0xbfff < *(uint *)(unaff_EBP + 8)) {
LAB_00495ee5:
    pcVar13 = *(code **)(iVar3 + 0x14);
switchD_00495c2d_caseD_a:
    uVar4 = *(uint *)(unaff_EBP + 0xc);
    goto LAB_00495eec;
  }
LAB_00495c02:
  iVar5 = *(int *)(unaff_EBP + 0x10);
  pcVar13 = *(code **)(iVar3 + 0x14);
  iVar3 = *(int *)(iVar5 + 0x10);
  if (*(int *)(iVar5 + 8) == 0x1a) {
    DVar7 = GetVersion();
    iVar5 = *(int *)(unaff_EBP + 0x10);
    iVar3 = (-(uint)((byte)DVar7 < 4) & 0xfffffff0) + 0x2f;
  }
  sVar2 = (short)((uint)puVar9 >> 0x10);
  switch(iVar3) {
  case 1:
    puVar9 = (undefined4 *)FUN_004992c8(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00495d3d;
  case 2:
    puVar9 = *(undefined4 **)(unaff_EBP + 0xc);
    goto LAB_00495d3d;
  case 3:
  case 8:
    uVar4 = (uint)puVar9 >> 0x10;
    uVar12 = (uint)sVar14;
    uVar8 = FUN_00494bb2(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00495d58;
  case 4:
    FUN_00499226();
    uVar15 = puVar9[1];
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = uVar15;
    FUN_00494787();
    uVar15 = *puVar9;
    uVar1 = puVar9[2];
    *(undefined1 *)(unaff_EBP + -4) = 1;
    *(undefined4 *)(unaff_EBP + -0x44) = uVar15;
    iVar3 = FUN_00494bd9(uVar15);
    if (iVar3 == 0) {
      if ((extraout_ECX[0xd] != 0) &&
         (iVar3 = FUN_00492b65(*(undefined4 *)(unaff_EBP + -0x44)), iVar3 != 0)) {
        *(int *)(unaff_EBP + -0x28) = iVar3;
      }
      iVar3 = unaff_EBP + -0x60;
    }
    uVar15 = (*pcVar13)(unaff_EBP + -0x24,iVar3,uVar1);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x44) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar15;
    CWnd::~CWnd((CWnd *)(unaff_EBP + -0x60));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_00495d13;
  case 5:
    FUN_00499226();
    uVar15 = puVar9[2];
    *(undefined4 *)(unaff_EBP + -0x20) = puVar9[1];
    *(undefined4 *)(unaff_EBP + -4) = 2;
    uVar15 = (*pcVar13)(unaff_EBP + -0x24,uVar15);
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar15;
LAB_00495d13:
    FUN_0049935b();
    break;
  case 6:
    uVar4 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    uVar12 = FUN_00494bb2(puVar9);
    goto LAB_00495d53;
  case 7:
    puVar9 = (undefined4 *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    uVar4 = (uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_00495eec;
  case 9:
  case 0x2a:
LAB_00495d3d:
    uVar15 = (*pcVar13)(puVar9);
LAB_00495ef0:
    *(undefined4 *)(unaff_EBP + -0x10) = uVar15;
    break;
  case 10:
  case 0x21:
    goto switchD_00495c2d_caseD_a;
  case 0xb:
    uVar4 = FUN_0049853e(puVar9);
    uVar12 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
LAB_00495d53:
    uVar8 = (uint)*(ushort *)(unaff_EBP + 0xc);
LAB_00495d58:
    uVar15 = (*pcVar13)(uVar8,uVar12,uVar4);
    goto LAB_00495ef0;
  case 0xc:
    (*pcVar13)();
    break;
  case 0xd:
    puVar9 = *(undefined4 **)(unaff_EBP + 0xc);
    goto LAB_00495e7c;
  case 0xe:
  case 0x12:
  case 0x25:
  case 0x2f:
    goto LAB_00495e5c;
  case 0xf:
    puVar10 = (undefined4 *)(int)sVar2;
    iVar11 = (int)sVar14;
    goto LAB_00495e5f;
  case 0x10:
  case 0x11:
    puVar10 = (undefined4 *)((uint)puVar9 >> 0x10);
    uVar4 = (uint)puVar9 & 0xffff;
    goto LAB_00495e9d;
  case 0x13:
    puVar10 = (undefined4 *)FUN_00494bb2(*(undefined4 *)(unaff_EBP + 0xc));
    uVar4 = FUN_00494bb2(puVar9);
    uVar12 = (uint)((undefined4 *)extraout_ECX[7] == puVar9);
    goto LAB_00495ea1;
  case 0x14:
    puVar9 = (undefined4 *)FUN_004992c8(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00495e7c;
  case 0x15:
    puVar9 = (undefined4 *)FUN_0049853e(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00495e7c;
  case 0x16:
    puVar10 = (undefined4 *)((uint)puVar9 >> 0x10);
    uVar4 = (uint)puVar9 & 0xffff;
    uVar12 = FUN_0049853e(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00495ea1;
  case 0x17:
    puVar9 = *(undefined4 **)(unaff_EBP + 0xc);
    goto LAB_00495de3;
  case 0x18:
    puVar10 = (undefined4 *)((uint)puVar9 >> 0x10);
    uVar4 = (uint)puVar9 & 0xffff;
    goto LAB_00495dff;
  case 0x19:
    uVar4 = (uint)sVar14;
    puVar10 = (undefined4 *)(int)sVar2;
LAB_00495dff:
    uVar12 = FUN_00494bb2(*(undefined4 *)(unaff_EBP + 0xc));
    goto LAB_00495ea1;
  case 0x1a:
    iVar11 = FUN_00494bb2(*(undefined4 *)(unaff_EBP + 0xc));
    puVar10 = puVar9;
    goto LAB_00495e5f;
  case 0x1b:
    puVar9 = (undefined4 *)FUN_00494bb2(puVar9);
LAB_00495e5c:
    iVar11 = *(int *)(unaff_EBP + 0xc);
    puVar10 = puVar9;
    goto LAB_00495e5f;
  case 0x1c:
    puVar10 = (undefined4 *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    uVar4 = FUN_00494bb2(puVar9);
    goto LAB_00495e89;
  case 0x1d:
  case 0x1e:
    iVar11 = (int)(short)*(undefined4 *)(unaff_EBP + 0xc);
    iVar3 = *(int *)(iVar5 + 0x10);
    *(int *)(unaff_EBP + 8) = iVar11;
    puVar10 = (undefined4 *)(int)(short)((uint)*(undefined4 *)(unaff_EBP + 0xc) >> 0x10);
    *(undefined4 **)(unaff_EBP + 0xc) = puVar10;
    if (iVar3 == 0x1d) {
      puVar10 = (undefined4 *)FUN_00494bb2(puVar9);
      uVar4 = *(uint *)(unaff_EBP + 0xc);
      uVar12 = *(uint *)(unaff_EBP + 8);
      goto LAB_00495ea1;
    }
LAB_00495e5f:
    (*pcVar13)(iVar11,puVar10);
    break;
  case 0x1f:
  case 0x24:
    goto LAB_00495e7c;
  case 0x20:
  case 0x2b:
    (*pcVar13)(*(undefined4 *)(unaff_EBP + 0xc),puVar9);
    goto LAB_00495eaf;
  case 0x22:
    uVar4 = (uint)sVar14;
    puVar9 = (undefined4 *)(int)sVar2;
    goto LAB_00495eec;
  case 0x23:
    uVar15 = (*pcVar13)();
    goto LAB_00495ef0;
  case 0x2c:
LAB_00495de3:
    puVar9 = (undefined4 *)FUN_00494bb2(puVar9);
LAB_00495e7c:
    (*pcVar13)(puVar9);
    break;
  case 0x2d:
    uVar4 = FUN_00494bb2(*(undefined4 *)(unaff_EBP + 0xc));
LAB_00495eec:
    uVar15 = (*pcVar13)(uVar4,puVar9);
    goto LAB_00495ef0;
  case 0x2e:
    iVar3 = (*pcVar13)(*(undefined2 *)(unaff_EBP + 0xc),*(uint *)(unaff_EBP + 0xc) >> 0x10,
                       (uint)puVar9 & 0xffff,(uint)puVar9 >> 0x10);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    goto LAB_00495ab2;
  case 0x30:
    uVar4 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    puVar10 = puVar9;
LAB_00495e89:
    uVar12 = (uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_00495ea1;
  case 0x31:
    uVar4 = (uint)sVar14;
    puVar10 = (undefined4 *)(int)sVar2;
LAB_00495e9d:
    uVar12 = *(uint *)(unaff_EBP + 0xc);
LAB_00495ea1:
    (*pcVar13)(uVar12,uVar4,puVar10);
  }
switchD_00495c2d_caseD_26:
  if (*(undefined4 **)(unaff_EBP + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(unaff_EBP + -0x10);
  }
  uVar15 = 1;
LAB_00495be4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar15;
}

