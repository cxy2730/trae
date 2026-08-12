// Function: FUN_00482761
// Entry:    00482761
// Size:     125 bytes
// Conv:     unknown
// Signature: undefined FUN_00482761(void)
// Decompiled by Ghidra 12.1.2


int FUN_00482761(uchar *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_030151e8 != 0) &&
      ((DAT_03010fdc != (int *)0x0 ||
       (((DAT_03010fe4 != 0 && (iVar1 = FUN_00489b09(), iVar1 == 0)) && (DAT_03010fdc != (int *)0x0)
        ))))) && (piVar3 = DAT_03010fdc, param_1 != (uchar *)0x0)) {
    _MaxCount = _strlen((char *)param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,param_1,_MaxCount), iVar1 == 0)) {
        return *piVar3 + 1 + _MaxCount;
      }
    }
  }
  return 0;
}

