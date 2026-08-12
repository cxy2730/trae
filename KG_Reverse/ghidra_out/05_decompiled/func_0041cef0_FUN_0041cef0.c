// Function: FUN_0041cef0
// Entry:    0041cef0
// Size:     67 bytes
// Conv:     unknown
// Signature: undefined FUN_0041cef0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0041cef0(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 local_c;
  
  FUN_00499b75(0);
  iVar1 = GetDeviceCaps(local_c,0x5a);
  iVar1 = MulDiv((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f),iVar1,0x48);
  *param_1 = -iVar1;
  FID_conflict__CClientDC();
  return;
}

