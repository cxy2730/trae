// Function: FUN_0041c440
// Entry:    0041c440
// Size:     67 bytes
// Conv:     unknown
// Signature: undefined FUN_0041c440(void)
// Decompiled by Ghidra 12.1.2


int FUN_0041c440(uint *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  
  FUN_00499b75(0);
  iVar1 = GetDeviceCaps(local_c,0x5a);
  uVar2 = (int)*param_1 >> 0x1f;
  iVar1 = MulDiv((*param_1 ^ uVar2) - uVar2,0x48,iVar1);
  FID_conflict__CClientDC();
  return iVar1;
}

