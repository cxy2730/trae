// Function: FUN_00402616
// Entry:    00402616
// Size:     477 bytes
// Conv:     unknown
// Signature: undefined FUN_00402616(void)
// Decompiled by Ghidra 12.1.2


/* WARNING: Removing unreachable block (ram,0x00402653) */

undefined4 FUN_00402616(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  double dVar7;
  undefined *local_8;
  
  puVar6 = (undefined1 *)*param_1;
  puVar2 = (undefined *)0x0;
  if (puVar6 != (undefined1 *)0x0) {
    iVar1 = FUN_00401318();
    iVar1 = iVar1 + 1;
    puVar2 = (undefined *)thunk_FUN_0041b6c0();
    puVar3 = puVar2;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = &DAT_004a5d3c;
  }
  iVar1 = thunk_FUN_0041b210(2,puVar3,0,0x80000004,1,0,0x80000301);
  iVar4 = FUN_00401100(iVar1,&DAT_004a6008);
  if (iVar1 != 0) {
    thunk_FUN_0041b7c0(iVar1);
  }
  local_8 = puVar2;
  if (iVar4 == 0) {
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &DAT_004a5d3c;
    }
    iVar1 = thunk_FUN_0041b210(1,puVar3,0,0x80000004);
    dVar7 = (double)iVar1 - 1.0;
    uVar5 = FUN_00401c3a();
    puVar3 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &DAT_004a5d3c;
    }
    local_8 = (undefined *)thunk_FUN_0041b210(2,puVar3,0,0x80000004,uVar5,0,0x80000301);
    if (puVar2 != (undefined *)0x0) {
      thunk_FUN_0041b7c0(puVar2,local_8,local_8,dVar7);
    }
  }
  puVar2 = local_8;
  if (local_8 == (undefined *)0x0) {
    puVar2 = &DAT_004a5d3c;
  }
  uVar5 = thunk_FUN_0041b210(4,puVar2,0,0x80000004,&DAT_004a6008,0,0x80000004,0,0,0,0,0,0x80000002);
  puVar2 = local_8;
  if (local_8 == (undefined *)0x0) {
    puVar2 = &DAT_004a5d3c;
  }
  uVar5 = thunk_FUN_0041b210(2,puVar2,0,0x80000004,uVar5,0,0x80000301);
  if (local_8 != (undefined *)0x0) {
    thunk_FUN_0041b7c0(local_8);
  }
  return uVar5;
}

