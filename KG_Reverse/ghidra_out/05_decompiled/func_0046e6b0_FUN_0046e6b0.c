// Function: FUN_0046e6b0
// Entry:    0046e6b0
// Size:     104 bytes
// Conv:     unknown
// Signature: undefined FUN_0046e6b0(void)
// Decompiled by Ghidra 12.1.2


void FUN_0046e6b0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0046e720(3);
  iVar1 = FUN_0046e720(1);
  FUN_0046e720(6);
  DAT_02fff524 = FUN_0046e720(1);
  FUN_0046e720(1);
  iVar2 = FUN_0046e720(4);
  DAT_03003998 = *(undefined4 *)(&DAT_02fd2754 + iVar2 * 4);
  if (iVar1 == 0) {
    uVar3 = 0x14;
  }
  else {
    uVar3 = 4;
  }
  FUN_0046e720(uVar3);
  FUN_0046e790();
  FUN_0046ea10();
  FUN_0046ead0();
  FUN_0046eda0();
  return;
}

