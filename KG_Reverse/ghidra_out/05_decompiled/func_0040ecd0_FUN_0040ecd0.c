// Function: FUN_0040ecd0
// Entry:    0040ecd0
// Size:     180 bytes
// Conv:     unknown
// Signature: undefined FUN_0040ecd0(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_0040ecd0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_5 != 0) {
    if ((int)param_2 < 0) {
      param_2 = 0;
    }
    uVar1 = *(uint *)(param_3 + 0x18) >> 3;
    if (param_4 < (int)uVar1) {
      if ((int)uVar1 < param_5 + param_4) {
        param_5 = uVar1 - param_4;
      }
      if (0 < param_5) {
        uVar1 = *(uint *)(param_1 + 0x18) >> 3;
        if ((int)uVar1 < (int)param_2) {
          param_2 = uVar1;
        }
        if (*(int *)(param_3 + 0x18) != 0) {
          iVar2 = *(int *)(param_3 + 0x10);
        }
        FUN_00406930(param_2 * 4,iVar2 + param_4 * 4,param_5 * 4);
        FUN_00406930((uVar1 + param_2 + param_5) * 4,
                     iVar2 + ((*(uint *)(param_3 + 0x18) >> 3) + param_4) * 4,param_5 * 4);
      }
    }
  }
  return;
}

