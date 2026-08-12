// Function: FUN_00404fa0
// Entry:    00404fa0
// Size:     431 bytes
// Conv:     unknown
// Signature: undefined FUN_00404fa0(void)
// Decompiled by Ghidra 12.1.2


undefined * FUN_00404fa0(undefined4 *param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  puVar3 = (undefined *)*param_1;
  if (puVar3 == (undefined *)0x0) {
    puVar3 = &DAT_004a5fbc;
  }
  local_8 = thunk_FUN_0041b210(1,puVar3,0,0x80000005);
  if (local_8 < 2) {
    puVar3 = &DAT_004a5fbc;
  }
  else {
    local_c = FUN_0040220c(param_1);
    iVar4 = FUN_00401c3a();
    piVar7 = &local_10;
    for (iVar6 = 0; *piVar7 = iVar6, iVar6 <= iVar4; iVar6 = iVar6 + 2) {
      uVar5 = FUN_00401c3a();
      sVar2 = FUN_00405159(uVar5);
      if (sVar2 == 0) break;
    }
    if ((local_10 == 0) || (local_8 < local_10)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      puVar3 = &DAT_004a5fbc;
    }
    else if (param_2 == 0) {
      puVar3 = (undefined *)thunk_FUN_0041b210(2,local_c,0,0x80000301,local_10,0,0x80000301);
    }
    else {
      iVar4 = thunk_FUN_0041b210(2,local_c,0,0x80000301,local_10,0,0x80000301);
      puVar3 = (undefined *)FUN_0040234c(iVar4,&DAT_004a5ffe);
      if (iVar4 != 0) {
        thunk_FUN_0041b7c0(iVar4);
      }
    }
  }
  return puVar3;
}

