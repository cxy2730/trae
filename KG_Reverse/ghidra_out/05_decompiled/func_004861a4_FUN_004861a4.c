// Function: FUN_004861a4
// Entry:    004861a4
// Size:     517 bytes
// Conv:     unknown
// Signature: undefined FUN_004861a4(void)
// Decompiled by Ghidra 12.1.2


uint FUN_004861a4(byte *param_1,int *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  uint uVar7;
  uint local_c;
  byte *local_8;
  
  local_c = 0;
  bVar6 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_02fd9ac0 < 2) {
      uVar2 = (byte)PTR_DAT_02fd98b4[(uint)bVar6 * 2] & 8;
    }
    else {
      uVar2 = FUN_0048a852(bVar6,8);
    }
    if (uVar2 == 0) break;
    bVar6 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar6 == 0x2d) {
    param_4 = param_4 | 2;
LAB_004861ff:
    bVar6 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar6 == 0x2b) goto LAB_004861ff;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar6 != 0x30) {
      param_3 = 10;
      goto LAB_00486269;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = 8;
      goto LAB_00486269;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar6 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar6 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_00486269:
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    uVar7 = (uint)bVar6;
    if (DAT_02fd9ac0 < 2) {
      uVar3 = (byte)PTR_DAT_02fd98b4[uVar7 * 2] & 4;
    }
    else {
      uVar3 = FUN_0048a852(uVar7,4);
    }
    if (uVar3 == 0) {
      if (DAT_02fd9ac0 < 2) {
        uVar7 = *(ushort *)(PTR_DAT_02fd98b4 + uVar7 * 2) & 0x103;
      }
      else {
        uVar7 = FUN_0048a852(uVar7,0x103);
      }
      if (uVar7 == 0) {
LAB_00486315:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_c)))))))) {
          puVar5 = (undefined4 *)FUN_004843ad();
          *puVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_c = 0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return -local_c;
      }
      iVar4 = FUN_00483c7c((int)(char)bVar6);
      uVar7 = iVar4 - 0x37;
    }
    else {
      uVar7 = (int)(char)bVar6 - 0x30;
    }
    if (param_3 <= uVar7) goto LAB_00486315;
    if ((local_c < uVar2) ||
       ((local_c == uVar2 && (uVar7 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_c = local_c * param_3 + uVar7;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar6 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}

