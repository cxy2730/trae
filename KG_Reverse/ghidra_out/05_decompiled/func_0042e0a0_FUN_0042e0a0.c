// Function: FUN_0042e0a0
// Entry:    0042e0a0
// Size:     149 bytes
// Conv:     unknown
// Signature: undefined FUN_0042e0a0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0042e0a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  RECT *lprcSrc;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LONG LVar4;
  tagRECT local_20;
  undefined1 local_10 [16];
  
  lprcSrc = (RECT *)FUN_0042e140(local_10,param_2,param_3);
  CopyRect(&local_20,lprcSrc);
  uVar3 = 0;
  uVar2 = 0;
  if (local_20.left != -1) {
    LVar4 = local_20.left;
    if (local_20.left <= local_20.right) {
      do {
        uVar1 = FUN_0042a180(LVar4);
        uVar3 = FUN_0042a340(uVar3,uVar1);
        LVar4 = LVar4 + 1;
      } while (LVar4 <= local_20.right);
    }
    LVar4 = local_20.top;
    if (local_20.top <= local_20.bottom) {
      do {
        uVar1 = FUN_0042a0a0(LVar4);
        uVar2 = FUN_0042a470(uVar2,uVar1);
        LVar4 = LVar4 + 1;
      } while (LVar4 <= local_20.bottom);
    }
  }
  *param_1 = uVar3;
  param_1[1] = uVar2;
  return;
}

