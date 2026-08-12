// Function: FUN_00449500
// Entry:    00449500
// Size:     323 bytes
// Conv:     unknown
// Signature: undefined FUN_00449500(void)
// Decompiled by Ghidra 12.1.2


void FUN_00449500(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  undefined1 local_7;
  undefined1 uStack_6;
  undefined1 uStack_5;
  undefined1 uStack_4;
  
  if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
    FUN_00446680(param_1,s_missing_IHDR_02fb2624);
  }
  else {
    if ((*(uint *)(param_1 + 0x74) & 4) != 0) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_out_of_place_02fb25b0);
      return;
    }
    if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      FUN_004479f0(param_1,param_3);
      FUN_004467e0(param_1,s_duplicate_02fb25fc);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_004479f0(param_1,param_3);
    FUN_004467e0(param_1,s_invalid_02fb25a8);
    return;
  }
  FUN_004479c0(param_1,&local_c,9);
  iVar1 = FUN_004479f0(param_1,0);
  if (iVar1 == 0) {
    FUN_00450640(param_1,param_2,
                 (((CONCAT12(uStack_a,CONCAT11(uStack_b,local_c)) & 0xff) * 0x100 +
                  (CONCAT12(uStack_9,CONCAT11(uStack_a,uStack_b)) & 0xff)) * 0x100 +
                 (CONCAT12(uStack_8,CONCAT11(uStack_9,uStack_a)) & 0xff)) * 0x100 +
                 (CONCAT12(local_7,CONCAT11(uStack_8,uStack_9)) & 0xff),
                 (((CONCAT12(uStack_6,CONCAT11(local_7,uStack_8)) & 0xff) * 0x100 +
                  (CONCAT12(uStack_5,CONCAT11(uStack_6,local_7)) & 0xff)) * 0x100 +
                 (CONCAT12(uStack_4,CONCAT11(uStack_5,uStack_6)) & 0xff)) * 0x100 +
                 (CONCAT11(uStack_4,uStack_5) & 0xff),uStack_4);
  }
  return;
}

