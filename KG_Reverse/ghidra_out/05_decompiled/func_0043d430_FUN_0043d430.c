// Function: FUN_0043d430
// Entry:    0043d430
// Size:     182 bytes
// Conv:     unknown
// Signature: undefined FUN_0043d430(void)
// Decompiled by Ghidra 12.1.2


undefined4
FUN_0043d430(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((*(ushort *)((int)param_2 + 0x4a) & 0x8000) != 0) {
    return 0;
  }
  if ((param_5 < 2) && ((*(ushort *)((int)param_2 + 0x4a) & 2) != 0)) {
    iVar1 = FUN_0043d360(param_3,param_2 + 1,100);
    if (iVar1 == 0) {
      *(byte *)((int)param_2 + 0x4b) = *(byte *)((int)param_2 + 0x4b) | 0x80;
      FUN_004465b0(param_1,s_inconsistent_chromaticities_02fb1420);
      return 0;
    }
    if (param_5 == 0) {
      return 1;
    }
  }
  puVar2 = param_3;
  puVar3 = param_2;
  for (iVar1 = 8; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  puVar3 = param_2 + 9;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  *(byte *)((int)param_2 + 0x4a) = *(byte *)((int)param_2 + 0x4a) | 2;
  iVar1 = FUN_0043d360(param_3,&DAT_02f97128,1000);
  if (iVar1 != 0) {
    *(byte *)((int)param_2 + 0x4a) = *(byte *)((int)param_2 + 0x4a) | 0x40;
    return 2;
  }
  *(ushort *)((int)param_2 + 0x4a) = *(ushort *)((int)param_2 + 0x4a) & 0xffbf;
  return 2;
}

