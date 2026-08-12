// Function: FUN_004248f0
// Entry:    004248f0
// Size:     243 bytes
// Conv:     unknown
// Signature: undefined FUN_004248f0(void)
// Decompiled by Ghidra 12.1.2


HICON FUN_004248f0(short *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  PBYTE presbits;
  HICON pHVar5;
  uint uVar6;
  uint uVar7;
  BYTE *pBVar8;
  PBYTE pBVar9;
  
  if ((((param_1 != (short *)0x0) && (0x16 < param_2)) && (*param_1 == 0)) &&
     ((param_1[1] == 2 && (param_1[2] != 0)))) {
    bVar1 = *(byte *)(param_1 + 3);
    uVar3 = *(uint *)(param_1 + 7);
    uVar4 = *(undefined4 *)(param_1 + 5);
    bVar2 = *(byte *)((int)param_1 + 7);
    uVar7 = *(uint *)(param_1 + 9);
    if ((uVar7 <= param_2) && (uVar3 <= param_2 - 0x16)) {
      presbits = (PBYTE)FUN_00492f17(uVar3 + 4);
      *(undefined4 *)presbits = uVar4;
      pBVar8 = (BYTE *)(uVar7 + (int)param_1);
      pBVar9 = presbits;
      for (uVar6 = uVar3 >> 2; pBVar9 = pBVar9 + 4, uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pBVar9 = *(undefined4 *)pBVar8;
        pBVar8 = pBVar8 + 4;
      }
      for (uVar7 = uVar3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pBVar9 = *pBVar8;
        pBVar8 = pBVar8 + 1;
        pBVar9 = pBVar9 + 1;
      }
      pHVar5 = CreateIconFromResourceEx(presbits,uVar3 + 4,0,0x30000,(uint)bVar1,(uint)bVar2,0);
      FUN_00492f40(presbits);
      return pHVar5;
    }
  }
  return (HICON)0x0;
}

