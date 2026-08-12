// Function: FUN_00481676
// Entry:    00481676
// Size:     43 bytes
// Conv:     unknown
// Signature: undefined FUN_00481676(void)
// Decompiled by Ghidra 12.1.2


void __thiscall
FUN_00481676(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00480fe0(param_2,param_3,param_4,param_5,param_6,param_7,param_1);
  *(uint *)(param_1 + 8) = (uint)(iVar1 == 0);
  return;
}

