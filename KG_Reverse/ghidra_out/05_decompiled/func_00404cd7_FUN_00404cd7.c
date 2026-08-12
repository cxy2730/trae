// Function: FUN_00404cd7
// Entry:    00404cd7
// Size:     229 bytes
// Conv:     unknown
// Signature: undefined FUN_00404cd7(void)
// Decompiled by Ghidra 12.1.2


undefined1 * FUN_00404cd7(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int local_c;
  undefined1 *local_8;
  
  local_8 = (undefined1 *)0x0;
  puVar1 = (undefined *)*param_1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = &DAT_004a5d3c;
  }
  local_c = thunk_FUN_0041b210(1,puVar1,0,0x80000004);
  puVar2 = (undefined1 *)FUN_00404dbc(&local_c,0x3a8);
  if (local_c != 0) {
    thunk_FUN_0041b7c0(local_c);
  }
  if (local_8 != (undefined1 *)0x0) {
    thunk_FUN_0041b7c0(local_8);
  }
  if (param_2 != 0) {
    local_c = 0;
    local_8 = puVar2;
    puVar2 = (undefined1 *)FUN_00404fa0(&local_8,0,0);
    if (local_8 != (undefined1 *)0x0) {
      thunk_FUN_0041b7c0(local_8);
    }
  }
  local_8 = puVar2;
  puVar2 = (undefined1 *)0x0;
  if (local_8 != (undefined1 *)0x0) {
    iVar3 = *(int *)(local_8 + 4) + 8;
    puVar4 = local_8;
    puVar2 = (undefined1 *)thunk_FUN_0041b6c0();
    puVar5 = puVar2;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if (local_8 != (undefined1 *)0x0) {
    thunk_FUN_0041b7c0(local_8);
  }
  return puVar2;
}

