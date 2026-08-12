// Function: FUN_004534d0
// Entry:    004534d0
// Size:     294 bytes
// Conv:     unknown
// Signature: undefined FUN_004534d0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004534d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int local_4;
  
  puVar1 = param_1;
  param_1[1] = 0;
  local_4 = FUN_00456470(param_1);
  puVar2 = (undefined4 *)FUN_00456430(puVar1,0x50);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0046b0c0(puVar1);
    (**(code **)*puVar1)(puVar1);
  }
  *puVar2 = FUN_00453600;
  puVar2[1] = FUN_00453730;
  puVar2[2] = FUN_004537c0;
  puVar2[3] = FUN_00453860;
  puVar2[4] = FUN_00453910;
  puVar2[5] = FUN_00453970;
  puVar2[6] = FUN_004539d0;
  puVar2[7] = &LAB_00453b60;
  puVar2[8] = &LAB_00453d30;
  puVar2[9] = FUN_00453f10;
  puVar2[10] = &LAB_00454000;
  puVar2[0xb] = local_4;
  puVar3 = puVar2 + 0xf;
  iVar4 = 2;
  do {
    puVar3[-2] = 0;
    *puVar3 = 0;
    puVar3 = puVar3 + -1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0x50;
  puVar1[1] = puVar2;
  iVar4 = FUN_00482740(s_JPEGMEM_02fb31d0);
  if (iVar4 != 0) {
    param_1 = (undefined4 *)CONCAT31(param_1._1_3_,0x78);
    iVar4 = FUN_00484772(iVar4,s__ld_c_02fb31c8,&local_4,&param_1);
    if (0 < iVar4) {
      if (((char)param_1 == 'm') || ((char)param_1 == 'M')) {
        puVar2[0xb] = local_4 * 1000000;
        return;
      }
      puVar2[0xb] = local_4 * 1000;
    }
  }
  return;
}

