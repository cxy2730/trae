// Function: FUN_00411300
// Entry:    00411300
// Size:     104 bytes
// Conv:     unknown
// Signature: undefined FUN_00411300(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00411300(int param_1)

{
  int *piVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0049e800;
  pvStack_10 = ExceptionList;
  if ((*(uint *)(param_1 + 0x23c) >> 2) - 1 < 0x80000000) {
    piVar1 = (int *)**(undefined4 **)(param_1 + 0x234);
    ExceptionList = &pvStack_10;
    FUN_00493768();
    local_8 = 1;
    (**(code **)(*piVar1 + 0x4c))();
    FUN_0041137d();
    return;
  }
  ExceptionList = &pvStack_10;
  FUN_004064a0();
  FUN_004064a0();
  ExceptionList = pvStack_10;
  return;
}

