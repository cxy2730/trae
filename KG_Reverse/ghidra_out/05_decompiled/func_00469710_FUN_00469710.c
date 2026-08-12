// Function: FUN_00469710
// Entry:    00469710
// Size:     94 bytes
// Conv:     unknown
// Signature: undefined FUN_00469710(void)
// Decompiled by Ghidra 12.1.2


void FUN_00469710(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  
  if (0 < *param_3) {
    DVar2 = GetTickCount();
    iVar1 = *param_3;
    while( true ) {
      FUN_004697a0(0x7e2,0,0);
      FUN_004697a0(0x7e2,0,0);
      DVar3 = GetTickCount();
      if (DVar2 + iVar1 < DVar3) break;
      FUN_004697a0(0x7e2,0,0);
      FUN_004697a0(0x7e2,0,0);
    }
  }
  return;
}

