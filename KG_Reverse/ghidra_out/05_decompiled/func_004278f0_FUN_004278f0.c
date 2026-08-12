// Function: FUN_004278f0
// Entry:    004278f0
// Size:     36 bytes
// Conv:     unknown
// Signature: undefined FUN_004278f0(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_004278f0(int *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    iVar1 = FUN_00427c10();
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 4))(4,0,0,0);
    }
  }
  return;
}

