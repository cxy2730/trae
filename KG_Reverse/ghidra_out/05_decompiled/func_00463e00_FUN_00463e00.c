// Function: FUN_00463e00
// Entry:    00463e00
// Size:     325 bytes
// Conv:     unknown
// Signature: undefined FUN_00463e00(void)
// Decompiled by Ghidra 12.1.2


bool FUN_00463e00(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  undefined4 local_4;
  
  iVar5 = *(ushort *)(*param_1 + 0x14) + 0x18 + *param_1;
  local_14 = *(int *)(iVar5 + 8);
  local_10 = FUN_00463f50(local_14,param_1[0xf]);
  local_c = FUN_00463f60(param_1,iVar5);
  local_8 = *(uint *)(iVar5 + 0x24);
  local_4 = 0;
  local_18 = 1;
  if (1 < *(ushort *)(*param_1 + 6)) {
    do {
      iVar1 = *(int *)(iVar5 + 0x30);
      uVar2 = FUN_00463f50(iVar1,param_1[0xf]);
      iVar3 = FUN_00463f60(param_1,iVar5 + 0x28);
      if ((local_10 == uVar2) || (uVar2 < (uint)(local_c + local_14))) {
        uVar2 = *(uint *)(iVar5 + 0x4c);
        if (((uVar2 & 0x2000000) == 0) || ((local_8 & 0x2000000) == 0)) {
          local_8 = (uVar2 | local_8) & 0xfdffffff;
        }
        else {
          local_8 = local_8 | uVar2;
        }
        local_c = (iVar3 - local_14) + iVar1;
      }
      else {
        iVar4 = FUN_00463f90(param_1,&local_14);
        if (iVar4 == 0) {
          return false;
        }
        local_8 = *(uint *)(iVar5 + 0x4c);
        local_14 = iVar1;
        local_10 = uVar2;
        local_c = iVar3;
      }
      local_18 = local_18 + 1;
      iVar5 = iVar5 + 0x28;
    } while (local_18 < (int)(uint)*(ushort *)(*param_1 + 6));
  }
  local_4 = 1;
  iVar5 = FUN_00463f90(param_1,&local_14);
  return iVar5 != 0;
}

