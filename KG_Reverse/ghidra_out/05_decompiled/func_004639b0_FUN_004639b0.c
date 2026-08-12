// Function: FUN_004639b0
// Entry:    004639b0
// Size:     779 bytes
// Conv:     unknown
// Signature: undefined FUN_004639b0(void)
// Decompiled by Ghidra 12.1.2


int * FUN_004639b0(short *param_1,undefined4 param_2,code *param_3,code *param_4,int param_5,
                  int param_6,int param_7,int param_8)

{
  ushort uVar1;
  int iVar2;
  HANDLE hHeap;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  short *psVar8;
  int *piVar9;
  undefined4 *puVar10;
  DWORD dwFlags;
  SIZE_T dwBytes;
  _SYSTEM_INFO local_24;
  
  uVar6 = 0;
  iVar2 = FUN_00463cc0(param_2,0x40);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  if (*param_1 != 0x5a4d) {
    SetLastError(0xc1);
    return (int *)0x0;
  }
  iVar2 = FUN_00463cc0(param_2,*(int *)(param_1 + 0x1e) + 0xf8);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  piVar9 = (int *)(*(int *)(param_1 + 0x1e) + (int)param_1);
  if (*piVar9 != 0x4550) {
    SetLastError(0xc1);
    return (int *)0x0;
  }
  if ((short)piVar9[1] != 0x14c) {
    SetLastError(0xc1);
    return (int *)0x0;
  }
  if ((*(byte *)(piVar9 + 0xe) & 1) != 0) {
    SetLastError(0xc1);
    return (int *)0x0;
  }
  uVar7 = (uint)*(ushort *)((int)piVar9 + 6);
  if (uVar7 != 0) {
    piVar5 = (int *)((int)piVar9 + *(ushort *)(piVar9 + 5) + 0x24);
    do {
      iVar2 = piVar5[1];
      if (iVar2 == 0) {
        iVar2 = *piVar5;
        iVar3 = piVar9[0xe];
      }
      else {
        iVar3 = *piVar5;
      }
      if (uVar6 < (uint)(iVar2 + iVar3)) {
        uVar6 = iVar2 + iVar3;
      }
      piVar5 = piVar5 + 10;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  GetSystemInfo(&local_24);
  uVar7 = piVar9[0x14] + -1 + local_24.dwPageSize & ~(local_24.dwPageSize - 1);
  if (uVar7 != ((local_24.dwPageSize - 1) + uVar6 & ~(local_24.dwPageSize - 1))) {
    SetLastError(0xc1);
    return (int *)0x0;
  }
  iVar2 = (*param_3)(piVar9[0xd],uVar7,0x3000,4,param_8);
  if (iVar2 == 0) {
    iVar2 = (*param_3)(0,uVar7,0x3000,4,param_8);
    if (iVar2 == 0) {
      SetLastError(0xe);
      return (int *)0x0;
    }
  }
  dwBytes = 0x40;
  dwFlags = 8;
  hHeap = GetProcessHeap();
  piVar5 = HeapAlloc(hHeap,dwFlags,dwBytes);
  if (piVar5 == (int *)0x0) {
    (*param_4)(iVar2,0,0x8000,param_8);
    SetLastError(0xe);
    return (int *)0x0;
  }
  piVar5[1] = iVar2;
  uVar1 = *(ushort *)((int)piVar9 + 0x16);
  piVar5[7] = (int)param_3;
  piVar5[5] = (uVar1 & 0x2000) >> 0xd;
  piVar5[8] = (int)param_4;
  piVar5[9] = param_5;
  piVar5[10] = param_6;
  piVar5[0xb] = param_7;
  piVar5[0xd] = param_8;
  piVar5[0xf] = local_24.dwPageSize;
  iVar3 = FUN_00463cc0(param_2,piVar9[0x15]);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(*param_3)(iVar2,piVar9[0x15],0x1000,4,param_8);
    uVar6 = piVar9[0x15];
    psVar8 = param_1;
    puVar10 = puVar4;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar10 = *(undefined4 *)psVar8;
      psVar8 = psVar8 + 2;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(char *)puVar10 = (char)*psVar8;
      psVar8 = (short *)((int)psVar8 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    iVar3 = *(int *)(param_1 + 0x1e);
    *piVar5 = (int)puVar4 + iVar3;
    *(int *)((undefined1 *)((int)puVar4 + iVar3) + 0x34) = iVar2;
    iVar3 = FUN_00463ce0(param_1,param_2,piVar9,piVar5);
    if (iVar3 != 0) {
      iVar3 = *(int *)(*piVar5 + 0x34) - piVar9[0xd];
      if (iVar3 == 0) {
        piVar5[6] = 1;
      }
      else {
        iVar3 = FUN_00464090(piVar5,iVar3);
        piVar5[6] = iVar3;
      }
      iVar3 = FUN_00464120(piVar5);
      if (iVar3 != 0) {
        iVar3 = FUN_00463e00(piVar5);
        if (iVar3 != 0) {
          iVar3 = FUN_00464040(piVar5);
          if (iVar3 != 0) {
            iVar3 = *(int *)(*piVar5 + 0x28);
            if (iVar3 == 0) {
              piVar5[0xe] = 0;
              return piVar5;
            }
            if (piVar5[5] == 0) {
              piVar5[0xe] = iVar3 + iVar2;
              return piVar5;
            }
            iVar2 = (*(code *)(iVar3 + iVar2))(iVar2,1,0);
            if (iVar2 != 0) {
              piVar5[4] = 1;
              return piVar5;
            }
            SetLastError(0x45a);
          }
        }
      }
    }
  }
  FUN_00464430(piVar5);
  return (int *)0x0;
}

