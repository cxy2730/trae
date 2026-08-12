// Function: FUN_00489cfe
// Entry:    00489cfe
// Size:     88 bytes
// Conv:     unknown
// Signature: undefined FUN_00489cfe(void)
// Decompiled by Ghidra 12.1.2


int FUN_00489cfe(uchar *param_1,size_t param_2)

{
  uchar *_Str2;
  int iVar1;
  int *piVar2;
  
  _Str2 = (uchar *)*DAT_03010fdc;
  piVar2 = DAT_03010fdc;
  while( true ) {
    if (_Str2 == (uchar *)0x0) {
      return -((int)piVar2 - (int)DAT_03010fdc >> 2);
    }
    iVar1 = __mbsnbicoll(param_1,_Str2,param_2);
    if ((iVar1 == 0) &&
       ((*(char *)(*piVar2 + param_2) == '=' || (*(char *)(*piVar2 + param_2) == '\0')))) break;
    _Str2 = (uchar *)piVar2[1];
    piVar2 = piVar2 + 1;
  }
  return (int)piVar2 - (int)DAT_03010fdc >> 2;
}

