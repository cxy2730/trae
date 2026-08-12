// Function: FUN_00464120
// Entry:    00464120
// Size:     388 bytes
// Conv:     unknown
// Signature: undefined FUN_00464120(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_00464120(int *param_1)

{
  uint *puVar1;
  int iVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int *local_8;
  
  iVar2 = param_1[1];
  if (*(int *)(*param_1 + 0x84) == 0) {
    return 1;
  }
  local_8 = (int *)(*(int *)(*param_1 + 0x80) + iVar2);
  BVar3 = IsBadReadPtr(local_8,0x14);
  if (BVar3 == 0) {
    while (local_8[3] != 0) {
      iVar4 = (*(code *)param_1[9])(local_8[3] + iVar2,param_1[0xd]);
      if (iVar4 == 0) {
        SetLastError(0x7e);
        return 0;
      }
      iVar5 = FUN_004848e3(param_1[2],param_1[3] * 4 + 4);
      if (iVar5 == 0) {
        (*(code *)param_1[0xb])(iVar4,param_1[0xd]);
        SetLastError(0xe);
        return 0;
      }
      param_1[2] = iVar5;
      *(int *)(iVar5 + param_1[3] * 4) = iVar4;
      param_1[3] = param_1[3] + 1;
      if (*local_8 == 0) {
        puVar7 = (uint *)(iVar2 + local_8[4]);
        puVar8 = puVar7;
      }
      else {
        puVar7 = (uint *)(iVar2 + *local_8);
        puVar8 = (uint *)(local_8[4] + iVar2);
      }
      uVar6 = *puVar7;
      while (uVar6 != 0) {
        if ((uVar6 & 0x80000000) == 0) {
          iVar5 = param_1[0xd];
          uVar6 = uVar6 + 2 + iVar2;
        }
        else {
          iVar5 = param_1[0xd];
          uVar6 = uVar6 & 0xffff;
        }
        uVar6 = (*(code *)param_1[10])(iVar4,uVar6,iVar5);
        *puVar8 = uVar6;
        if (uVar6 == 0) {
          (*(code *)param_1[0xb])(iVar4,param_1[0xd]);
          SetLastError(0x7f);
          return 0;
        }
        puVar1 = puVar7 + 1;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
        uVar6 = *puVar1;
      }
      local_8 = local_8 + 5;
      BVar3 = IsBadReadPtr(local_8,0x14);
      if (BVar3 != 0) {
        return 1;
      }
    }
  }
  return 1;
}

