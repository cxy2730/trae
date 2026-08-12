// Function: FUN_00447ec0
// Entry:    00447ec0
// Size:     158 bytes
// Conv:     unknown
// Signature: undefined FUN_00447ec0(void)
// Decompiled by Ghidra 12.1.2


void FUN_00447ec0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else if ((*(uint *)(param_1 + 0x74) & 6) != 0) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(iVar1,s_out_of_place_02fb25b0);
    return;
  }
  if (param_3 != 4) {
    FUN_004479f0(iVar1,param_3);
    FUN_004467e0(iVar1,s_invalid_02fb25a8);
    return;
  }
  FUN_004479c0(iVar1,&param_1,4);
  iVar2 = FUN_004479f0(iVar1,0);
  if (iVar2 == 0) {
    uVar3 = FUN_00447f60(0,&param_1);
    FUN_0043cb70(iVar1,iVar1 + 0x2dc,uVar3);
    FUN_0043ccf0(iVar1,param_2);
  }
  return;
}

