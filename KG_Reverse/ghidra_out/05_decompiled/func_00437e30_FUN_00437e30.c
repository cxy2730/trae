// Function: FUN_00437e30
// Entry:    00437e30
// Size:     546 bytes
// Conv:     unknown
// Signature: undefined FUN_00437e30(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00437e30(int param_1,char *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  HDC pHVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_00437860();
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00492f40(*(int *)(param_1 + 0xa8));
  }
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_00492f40(*(int *)(param_1 + 0xb0));
  }
  if (*(HGDIOBJ *)(param_1 + 0xc0) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  if ((((0xd < param_3) && (*param_2 == 'G')) && (param_2[1] == 'I')) &&
     ((((param_2[2] == 'F' && (param_2[3] == '8')) && ((param_2[4] == '7' || (param_2[4] == '9'))))
      && (param_2[5] == 'a')))) {
    *(uint *)(param_1 + 0xd4) = (uint)*(ushort *)(param_2 + 6);
    *(uint *)(param_1 + 0xd8) = (uint)*(ushort *)(param_2 + 8);
    *(uint *)(param_1 + 0x70) = (uint)(byte)param_2[0xb];
    if ((param_2[10] & 0x80U) != 0) {
      iVar1 = 1 << (param_2[10] & 7U) + 1;
      *(int *)(param_1 + 0x80) = iVar1;
      pcVar2 = (char *)FUN_00492f17(iVar1 * 3);
      *(char **)(param_1 + 0xa8) = pcVar2;
      uVar7 = *(int *)(param_1 + 0x80) * 3;
      if (param_3 <= (int)(uVar7 + 0xd)) {
        FUN_00492f40(pcVar2);
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        return 0;
      }
      pcVar3 = param_2 + 0xd;
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar2 = pcVar2 + 1;
      }
      param_2 = param_2 + *(int *)(param_1 + 0x80) * 3;
    }
    iVar1 = param_3 + *(int *)(param_1 + 0x80) * -3 + -0xd;
    *(int *)(param_1 + 0x74) = iVar1;
    pcVar3 = (char *)FUN_00492f17(iVar1);
    uVar7 = *(uint *)(param_1 + 0x74);
    *(char **)(param_1 + 0xb0) = pcVar3;
    *(char **)(param_1 + 0xb4) = pcVar3;
    pcVar2 = param_2 + 0xd;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar3 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0xcc) = 0;
    if (*(int *)(param_1 + 0xe8) == 0) {
      pHVar4 = GetDC(*(HWND *)(param_1 + 0x1c));
      *(HDC *)(param_1 + 0xa4) = pHVar4;
      uVar5 = FUN_00438060();
      *(undefined4 *)(param_1 + 0xc0) = uVar5;
      ReleaseDC(*(HWND *)(param_1 + 0x1c),*(HDC *)(param_1 + 0xa4));
      *(undefined4 *)(param_1 + 0xa4) = 0;
      uVar7 = (uint)(*(int *)(param_1 + 0x74) + -1 <= *(int *)(param_1 + 0x94));
      *(uint *)(param_1 + 0xcc) = uVar7;
      if (uVar7 == 0) {
        if (*(HGDIOBJ *)(param_1 + 0xc0) != (HGDIOBJ)0x0) {
          DeleteObject(*(HGDIOBJ *)(param_1 + 0xc0));
          *(undefined4 *)(param_1 + 0xc0) = 0;
        }
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb0);
      }
    }
    return 1;
  }
  return 0;
}

