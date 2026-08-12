// Function: FUN_00424fe0
// Entry:    00424fe0
// Size:     703 bytes
// Conv:     unknown
// Signature: undefined FUN_00424fe0(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00425207) */
/* WARNING: Removing unreachable block (ram,0x00425270) */

bool __thiscall FUN_00424fe0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  ushort uStack_1e;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_00424e70();
  }
  iVar5 = param_2;
  iVar3 = FUN_00424fc0(param_2,param_3);
  if (iVar3 == 0) {
    return false;
  }
  uVar7 = *(uint *)(iVar5 + 4);
  if (((uVar7 & 0xff0000 | uVar7 >> 0x10) >> 8 | (uVar7 << 0x10 | uVar7 & 0xff00) << 8) != 6) {
    return false;
  }
  piVar8 = (int *)(iVar5 + 0xe);
  local_18 = 0;
  local_14 = 0;
  uVar7 = *(uint *)(iVar5 + 8);
  local_10 = 0;
  uStack_1e = (ushort)(uVar7 >> 0x10);
  uVar1 = *(ushort *)(iVar5 + 0xc);
  *(uint *)(param_1 + 0xc) = (uVar7 & 0xff) << 8 | (uVar7 & 0xffff) >> 8;
  *(uint *)(param_1 + 0x10) = (uStack_1e & 0xff) << 8 | (uint)(uStack_1e >> 8);
  local_c = 0;
  *(uint *)(param_1 + 0x14) = (uVar1 & 0xff) << 8 | (uint)(uVar1 >> 8);
  local_8 = 0;
  local_4 = 0;
  uVar4 = FUN_00426c50(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x60));
  FUN_00426c40(uVar4,*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 100) = uVar4;
  uVar7 = *(uint *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60)) / 0x18;
  }
  if (uVar6 < uVar7) {
    uVar4 = *(undefined4 *)(param_1 + 100);
    puVar9 = &local_18;
    iVar5 = FUN_00426340(puVar9);
    FUN_00426370(uVar4,uVar7 - iVar5,puVar9);
  }
  else {
    uVar6 = FUN_00426340();
    if (uVar7 < uVar6) {
      FUN_00426670(*(int *)(param_1 + 0x60) + uVar7 * 0x18,*(undefined4 *)(param_1 + 100));
    }
  }
  uVar7 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar5 = 0;
    do {
      if (*piVar8 != 0x6b72544d) {
        return false;
      }
      uVar6 = piVar8[1];
      piVar8 = piVar8 + 2;
      *(uint *)(*(int *)(param_1 + 0x60) + 4 + iVar5) =
           (uVar6 & 0xff0000 | uVar6 >> 0x10) >> 8 | (uVar6 << 0x10 | uVar6 & 0xff00) << 8;
      *(int **)(*(int *)(param_1 + 0x60) + 0xc + iVar5) = piVar8;
      *(int **)(*(int *)(param_1 + 0x60) + 8 + iVar5) = piVar8;
      iVar3 = *(int *)(param_1 + 0x60);
      iVar2 = *(int *)(iVar3 + 4 + iVar5);
      piVar8 = (int *)((int)piVar8 + iVar2);
      if (iVar2 == 0) {
        *(uint *)(iVar3 + iVar5) = *(uint *)(iVar3 + iVar5) | 1;
      }
      else {
        iVar3 = FUN_004259d0(iVar3 + iVar5,iVar3 + 0x10 + iVar5);
        if (iVar3 == 0) {
          return false;
        }
      }
      uVar7 = uVar7 + 1;
      iVar5 = iVar5 + 0x18;
    } while (uVar7 < *(uint *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 4) = param_3;
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_4;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x70);
  param_2 = 100;
  if (iVar5 == 0) {
LAB_00425241:
    iVar5 = 0;
  }
  else {
    uVar7 = *(int *)(param_1 + 0x74) - iVar5 >> 2;
    if (0xf < uVar7) {
      if (0x10 < uVar7) {
        param_2 = *(undefined4 *)(param_1 + 0x74);
        *(int *)(param_1 + 0x74) = iVar5 + 0x40;
      }
      goto LAB_00425288;
    }
    if (iVar5 == 0) goto LAB_00425241;
    iVar5 = *(int *)(param_1 + 0x74) - iVar5 >> 2;
  }
  FUN_004266b0(*(undefined4 *)(param_1 + 0x74),0x10 - iVar5,&param_2);
LAB_00425288:
  iVar5 = FUN_00425c70();
  return iVar5 != 0;
}

