// Function: FUN_0041c490
// Entry:    0041c490
// Size:     58 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c490(void)
// Decompiled by Ghidra 12.1.2


undefined8 __fastcall
FUN_0041c490(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_6 != 0) && (iVar1 = param_4, param_4 != 0)) {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      if (param_5 <= *param_3) {
        *param_3 = *param_3 + param_6;
      }
      param_3 = param_3 + 1;
    }
  }
  return CONCAT44(param_2,iVar1);
}

