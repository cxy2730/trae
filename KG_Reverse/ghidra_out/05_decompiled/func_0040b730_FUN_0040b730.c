// Function: FUN_0040b730
// Entry:    0040b730
// Size:     90 bytes
// Conv:     unknown
// Signature: undefined FUN_0040b730(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_0040b730(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = *(byte **)(param_1 + 0xa4);
  if (*(int *)(pbVar3 + -8) != 0) {
    if (param_2 != (byte *)0x0) {
      do {
        bVar1 = *param_2;
        bVar4 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_0040b772:
          iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
          goto LAB_0040b777;
        }
        if (bVar1 == 0) break;
        bVar1 = param_2[1];
        bVar4 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_0040b772;
        param_2 = param_2 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_0040b777:
      if (iVar2 != 0) {
        return 0;
      }
    }
    FUN_0040b7e0();
  }
  return 0;
}

