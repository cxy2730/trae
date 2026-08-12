// Function: FUN_0044a4b0
// Entry:    0044a4b0
// Size:     369 bytes
// Conv:     unknown
// Signature: undefined FUN_0044a4b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044a4b0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(int *)(param_1 + 0x250) == 0) {
    if (param_4 == 0) {
      param_4 = *(int *)(param_1 + 0x254);
    }
    if ((param_4 == 3) || ((param_4 == 2 && ((*(uint *)(param_1 + 0x11c) & 0x20000000) != 0)))) {
      iVar2 = FUN_0044a630(param_1,param_3);
      if (iVar2 == 0) goto LAB_0044a5c7;
    }
    else {
      FUN_004479f0(param_1,param_3);
    }
LAB_0044a57b:
    if (param_4 != 3) {
      if (param_4 != 2) goto LAB_0044a5c7;
LAB_0044a585:
      if ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0) goto LAB_0044a5c7;
    }
    iVar2 = *(int *)(param_1 + 0x298);
    if (iVar2 != 0) {
      if (iVar2 == 1) goto LAB_0044a5c7;
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0x298) = 1;
        FUN_004467e0(param_1,s_no_space_in_chunk_cache_02fb28c0);
        goto LAB_0044a5c7;
      }
      *(int *)(param_1 + 0x298) = iVar2 + -1;
    }
    FUN_00451240(param_1,param_2,param_1 + 0x2a0,1);
  }
  else {
    iVar2 = FUN_0044a630(param_1,param_3);
    if (iVar2 == 0) goto LAB_0044a5c7;
    iVar2 = (**(code **)(param_1 + 0x250))(param_1,param_1 + 0x2a0);
    if (iVar2 < 0) {
      FUN_00446680(param_1,s_error_in_user_chunk_02fb29a0);
      goto LAB_0044a57b;
    }
    if (iVar2 == 0) {
      if (1 < param_4) goto LAB_0044a57b;
      if (*(int *)(param_1 + 0x254) < 2) {
        FUN_00446780(param_1,s_Saving_unknown_chunk__02fb2988);
        FUN_00446620(param_1,s_forcing_save_of_an_unhandled_chu_02fb293c);
      }
      goto LAB_0044a585;
    }
  }
  bVar1 = true;
LAB_0044a5c7:
  if (*(int *)(param_1 + 0x2a8) != 0) {
    FUN_00446d20(param_1,*(int *)(param_1 + 0x2a8));
  }
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  if ((!bVar1) && ((*(uint *)(param_1 + 0x11c) & 0x20000000) == 0)) {
    FUN_00446680(param_1,s_unhandled_critical_chunk_02fb2920);
  }
  return;
}

