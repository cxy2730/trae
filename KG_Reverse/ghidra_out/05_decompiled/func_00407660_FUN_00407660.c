// Function: FUN_00407660
// Entry:    00407660
// Size:     90 bytes
// Conv:     unknown
// Signature: undefined FUN_00407660(void)
// Decompiled by Ghidra 12.1.2


undefined4 __thiscall FUN_00407660(int param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  bool bVar4;
  
  pbVar3 = *(byte **)(param_1 + 0x98);
  if (*(int *)(pbVar3 + -8) != 0) {
    if (param_2 != (byte *)0x0) {
      do {
        bVar1 = *param_2;
        bVar4 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_004076a2:
          iVar2 = (1 - (uint)bVar4) - (uint)(bVar4 != 0);
          goto LAB_004076a7;
        }
        if (bVar1 == 0) break;
        bVar1 = param_2[1];
        bVar4 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_004076a2;
        param_2 = param_2 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_004076a7:
      if (iVar2 != 0) {
        return 0;
      }
    }
    FUN_004079c0();
  }
  return 0;
}

