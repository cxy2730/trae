// Function: FUN_0042cd10
// Entry:    0042cd10
// Size:     170 bytes
// Conv:     unknown
// Signature: undefined FUN_0042cd10(void)
// Decompiled by Ghidra 12.1.2


void FUN_0042cd10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  RECT *lprcSrc;
  tagRECT local_20;
  undefined1 local_10 [16];
  
  lprcSrc = (RECT *)FUN_0042e140(local_10,param_1,param_2);
  CopyRect(&local_20,lprcSrc);
  if (local_20.left != -1) {
    param_1 = FUN_0049633f(0);
    param_2 = FUN_0049633f(1);
    FUN_0042cdc0(local_20.bottom,local_20.right,&param_1,&param_2);
    if ((local_20.bottom != local_20.top) || (local_20.right != local_20.left)) {
      FUN_0042cdc0(local_20.top,local_20.left,&param_1,&param_2);
    }
    FUN_0042eed0(param_1,param_2,param_3);
  }
  return;
}

