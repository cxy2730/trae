// Function: FUN_0049017c
// Entry:    0049017c
// Size:     201 bytes
// Conv:     unknown
// Signature: undefined FUN_0049017c(void)
// Decompiled by Ghidra 12.1.2


uint FUN_0049017c(LPWSTR param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((param_2 != (byte *)0x0) && (param_3 != 0)) {
    bVar1 = *param_2;
    if (bVar1 != 0) {
      if (DAT_0301119c == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)bVar1;
        }
        return 1;
      }
      if ((PTR_DAT_02fd98b4[(uint)bVar1 * 2 + 1] & 0x80) == 0) {
        iVar2 = MultiByteToWideChar(DAT_030111ac,9,(LPCSTR)param_2,1,param_1,
                                    (uint)(param_1 != (LPWSTR)0x0));
        if (iVar2 != 0) {
          return 1;
        }
      }
      else {
        if (1 < (int)DAT_02fd9ac0) {
          if ((int)param_3 < (int)DAT_02fd9ac0) goto LAB_0049020e;
          iVar2 = MultiByteToWideChar(DAT_030111ac,9,(LPCSTR)param_2,DAT_02fd9ac0,param_1,
                                      (uint)(param_1 != (LPWSTR)0x0));
          if (iVar2 != 0) {
            return DAT_02fd9ac0;
          }
        }
        if ((DAT_02fd9ac0 <= param_3) && (param_2[1] != 0)) {
          return DAT_02fd9ac0;
        }
      }
LAB_0049020e:
      puVar3 = (undefined4 *)FUN_004843ad();
      *puVar3 = 0x2a;
      return 0xffffffff;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}

