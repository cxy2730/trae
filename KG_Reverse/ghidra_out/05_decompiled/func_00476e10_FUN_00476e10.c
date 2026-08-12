// Function: FUN_00476e10
// Entry:    00476e10
// Size:     286 bytes
// Conv:     unknown
// Signature: undefined FUN_00476e10(void)
// Decompiled by Ghidra 12.1.2


void FUN_00476e10(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *local_8;
  undefined4 *local_4;
  
  iVar2 = 0;
  if (0 < DAT_0300be54) {
    local_8 = (int *)(&DAT_0300be44 + param_2 * 8);
    local_4 = (undefined4 *)(&DAT_0300be44 + (param_2 ^ 1) * 8);
    piVar3 = &DAT_0300be8c + param_2 * 0x24;
    puVar5 = &DAT_03012a80 + param_2 * 0x240;
    puVar4 = &DAT_03012a80 + (param_2 ^ 1) * 0x240;
    do {
      iVar1 = *local_8;
      param_2 = iVar1;
      if ((*piVar3 == 2) && (param_2 = 0, piVar3[1] != 0)) {
        param_2 = *(uint *)(&DAT_030128bc + DAT_030090a0 * 4);
      }
      if (DAT_02fd36bc < (int)param_2) {
        param_2 = DAT_02fd36bc;
      }
      if (DAT_02fd36bc < iVar1) {
        iVar1 = DAT_02fd36bc;
      }
      iVar1 = FUN_0047c4b0(puVar5,puVar4,&DAT_0300b0b4,*piVar3,param_2,iVar1,*local_4);
      *local_8 = iVar1;
      FUN_0047cb80(&DAT_0300b0b4,iVar1);
      (*(code *)PTR_FUN_02fd36d0)(&DAT_0300b0b4,param_1,iVar2);
      local_4 = local_4 + 1;
      local_8 = local_8 + 1;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x12;
      puVar4 = puVar4 + 0x480;
      puVar5 = puVar5 + 0x480;
    } while (iVar2 < DAT_0300be54);
  }
  return;
}

