// Function: FUN_0043d4f0
// Entry:    0043d4f0
// Size:     248 bytes
// Conv:     unknown
// Signature: undefined FUN_0043d4f0(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043d4f0(undefined4 param_1,undefined4 *param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  uVar1 = *(ushort *)((int)param_2 + 0x4a);
  if ((uVar1 & 0x8000) != 0) {
    return 0;
  }
  if (((int)param_3 < 0) || (3 < (int)param_3)) {
    pcVar6 = s_invalid_sRGB_rendering_intent_02fb1444;
  }
  else {
    if (((uVar1 & 4) == 0) || (*(ushort *)(param_2 + 0x12) == param_3)) {
      if ((uVar1 & 0x20) != 0) {
        FUN_004465b0(param_1,s_duplicate_sRGB_information_ignor_02fb1484);
        return 0;
      }
      if ((uVar1 & 2) != 0) {
        iVar2 = FUN_0043d360(&DAT_02f97128,param_2 + 1,100);
        if (iVar2 == 0) {
          FUN_00446810(param_1,s_cHRM_chunk_does_not_match_sRGB_02fb1464,2);
        }
      }
      FUN_0043cbf0(param_1,param_2,0xb18f,2);
      *(byte *)((int)param_2 + 0x4a) = *(byte *)((int)param_2 + 0x4a) | 4;
      uVar1 = *(ushort *)((int)param_2 + 0x4a);
      *(short *)(param_2 + 0x12) = (short)param_3;
      puVar4 = &DAT_02f97128;
      puVar5 = param_2;
      for (iVar2 = 8; puVar5 = puVar5 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
      }
      puVar5 = &DAT_02f97148;
      puVar4 = param_2 + 9;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
      }
      *param_2 = 0xb18f;
      *(ushort *)((int)param_2 + 0x4a) = uVar1 | 0xe3;
      return 1;
    }
    pcVar6 = s_inconsistent_rendering_intents_02fb14a8;
  }
  uVar3 = FUN_0043d5f0(param_1,param_2,&DAT_02fb143c,param_3,pcVar6);
  return uVar3;
}

