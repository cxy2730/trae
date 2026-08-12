// Function: FUN_0043eab0
// Entry:    0043eab0
// Size:     359 bytes
// Conv:     unknown
// Signature: undefined FUN_0043eab0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043eab0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *local_3c;
  
  cVar1 = (char)param_3;
  uVar7 = 1 << (8U - cVar1 & 0x1f);
  local_3c = (undefined4 *)FUN_00446b10(param_1,uVar7 * 4);
  uVar6 = 0;
  *param_2 = local_3c;
  if (uVar7 != 0) {
    do {
      puVar3 = (undefined2 *)FUN_00446cb0(param_1,0x200);
      *local_3c = puVar3;
      iVar4 = FUN_0043e590(param_4);
      if (iVar4 == 0) {
        uVar8 = 0;
        do {
          uVar5 = (uVar8 << (8U - cVar1 & 0x1f)) + uVar6;
          if (param_3 != 0) {
            uVar5 = (uVar5 * 0xffff + (1 << (0xfU - cVar1 & 0x1f))) /
                    ((1 << (0x10U - cVar1 & 0x1f)) - 1U);
          }
          *puVar3 = (short)uVar5;
          uVar8 = uVar8 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar8 < 0x100);
      }
      else {
        uVar8 = 0;
        do {
          FUN_00482010();
          FUN_004823c8();
          uVar2 = __ftol();
          *puVar3 = uVar2;
          uVar8 = uVar8 + 1;
          puVar3 = puVar3 + 1;
        } while (uVar8 < 0x100);
      }
      uVar6 = uVar6 + 1;
      local_3c = local_3c + 1;
    } while (uVar6 < uVar7);
  }
  return;
}

