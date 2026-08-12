// Function: FUN_00450000
// Entry:    00450000
// Size:     77 bytes
// Conv:     unknown
// Signature: undefined FUN_00450000(void)
// Decompiled by Ghidra 12.1.2


void FUN_00450000(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 < 8) {
    pbVar2 = param_2 + *(int *)(param_1 + 4);
    if (bVar1 == 1) {
      puVar3 = &DAT_02f98658;
    }
    else if (bVar1 == 2) {
      puVar3 = &DAT_02f98758;
    }
    else {
      if (bVar1 != 4) {
        return;
      }
      puVar3 = &DAT_02f98858;
    }
    for (; param_2 < pbVar2; param_2 = param_2 + 1) {
      *param_2 = puVar3[*param_2];
    }
  }
  return;
}

