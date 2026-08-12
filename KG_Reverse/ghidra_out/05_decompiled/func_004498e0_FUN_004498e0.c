// Function: FUN_004498e0
// Entry:    004498e0
// Size:     514 bytes
// Conv:     unknown
// Signature: undefined FUN_004498e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004498e0(uint param_1,int param_2,uint param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = param_3;
  iVar2 = param_1;
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else {
    if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(iVar2,s_out_of_place_02fb25b0);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x4000) != 0)) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(iVar2,s_duplicate_02fb25fc);
      return;
    }
    if (param_3 < 4) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(iVar2,s_invalid_02fb25a8);
      return;
    }
  }
  pcVar4 = (char *)FUN_004488b0(iVar2,uVar3 + 1,2);
  if (pcVar4 == (char *)0x0) {
    FUN_004467e0(iVar2,s_out_of_memory_02fb26b0);
    FUN_004479f0(iVar2,uVar3);
    return;
  }
  FUN_004479c0(iVar2,pcVar4,uVar3);
  pcVar4[uVar3] = '\0';
  iVar5 = FUN_004479f0(iVar2,0);
  if (iVar5 == 0) {
    if ((*pcVar4 != '\x01') && (*pcVar4 != '\x02')) {
      FUN_004467e0(iVar2,s_invalid_unit_02fb2884);
      return;
    }
    param_3 = 1;
    param_1 = 0;
    iVar5 = FUN_0043e2d0(pcVar4,uVar3,&param_1,&param_3);
    if ((iVar5 != 0) && (param_3 < uVar3)) {
      pcVar1 = pcVar4 + param_3;
      uVar6 = param_3 + 1;
      param_3 = uVar6;
      if (*pcVar1 == '\0') {
        if ((param_1 & 0x188) != 0x108) {
          FUN_004467e0(iVar2,s_non_positive_width_02fb2870);
          return;
        }
        param_1 = 0;
        iVar5 = FUN_0043e2d0(pcVar4,uVar3,&param_1,&param_3);
        if ((iVar5 != 0) && (param_3 == uVar3)) {
          if ((param_1 & 0x188) != 0x108) {
            FUN_004467e0(iVar2,s_non_positive_height_02fb285c);
            return;
          }
          FUN_00450900(iVar2,param_2,*pcVar4,pcVar4 + 1,pcVar4 + uVar6);
          return;
        }
        FUN_004467e0(iVar2,s_bad_height_format_02fb2848);
        return;
      }
    }
    FUN_004467e0(iVar2,s_bad_width_format_02fb2834);
  }
  return;
}

