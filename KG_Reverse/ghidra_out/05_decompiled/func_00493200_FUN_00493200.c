// Function: FUN_00493200
// Entry:    00493200
// Size:     68 bytes
// Conv:     unknown
// Signature: undefined FUN_00493200(void)
// Decompiled by Ghidra 12.1.2


void __thiscall FUN_00493200(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  if (param_5 + param_3 == 0) {
    *param_2 = PTR_DAT_02fd8088;
  }
  else {
    FUN_00493043(param_5 + param_3);
    FUN_00485580(*param_2,*param_1 + param_4,param_3);
  }
  return;
}

