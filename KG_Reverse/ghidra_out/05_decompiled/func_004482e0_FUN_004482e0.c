// Function: FUN_004482e0
// Entry:    004482e0
// Size:     209 bytes
// Conv:     unknown
// Signature: undefined FUN_004482e0(void)
// Decompiled by Ghidra 12.1.2


void FUN_004482e0(uint param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_1;
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else if ((*(uint *)(param_1 + 0x74) & 6) != 0) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(uVar2,s_out_of_place_02fb25b0);
    return;
  }
  if (param_3 != 1) {
    FUN_004479f0(uVar2,param_3);
    FUN_004467e0(uVar2,s_invalid_02fb25a8);
    return;
  }
  FUN_004479c0(uVar2,&param_1,1);
  iVar3 = FUN_004479f0(uVar2,0);
  if ((iVar3 == 0) && (uVar1 = *(ushort *)(uVar2 + 0x326), (uVar1 & 0x8000) == 0)) {
    if ((uVar1 & 4) != 0) {
      *(ushort *)(uVar2 + 0x326) = uVar1 | 0x8000;
      FUN_0043ccf0(uVar2,param_2);
      FUN_004467e0(uVar2,s_too_many_profiles_02fb266c);
      return;
    }
    FUN_0043d4f0(uVar2,uVar2 + 0x2dc,param_1 & 0xff);
    FUN_0043ccf0(uVar2,param_2);
  }
  return;
}

