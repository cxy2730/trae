// Function: FUN_0043cc80
// Entry:    0043cc80
// Size:     100 bytes
// Conv:     unknown
// Signature: undefined FUN_0043cc80(void)
// Decompiled by Ghidra 12.1.2


void FUN_0043cc80(undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_2 + 0x72);
  if ((uVar1 & 0x8000) != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xffffe7fa;
    FUN_0043c5f0(param_1,param_2,0x10,0xffffffff);
    return;
  }
  if ((uVar1 & 0x80) == 0) {
    uVar2 = *(uint *)(param_2 + 8) & 0xfffff7ff;
  }
  else {
    uVar2 = *(uint *)(param_2 + 8) | 0x800;
  }
  *(uint *)(param_2 + 8) = uVar2;
  if ((uVar1 & 2) == 0) {
    uVar2 = uVar2 & 0xfffffffb;
  }
  else {
    uVar2 = uVar2 | 4;
  }
  *(uint *)(param_2 + 8) = uVar2;
  if ((uVar1 & 1) != 0) {
    *(uint *)(param_2 + 8) = uVar2 | 1;
    return;
  }
  *(uint *)(param_2 + 8) = uVar2 & 0xfffffffe;
  return;
}

