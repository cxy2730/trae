// Function: FUN_0048e48c
// Entry:    0048e48c
// Size:     647 bytes
// Conv:     unknown
// Signature: undefined FUN_0048e48c(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048e48c(void)

{
  char cVar1;
  char cVar2;
  char *_Str1;
  DWORD DVar3;
  int iVar4;
  size_t sVar5;
  char *_Source;
  int local_8;
  
  FUN_00489a54(0xc);
  DAT_02fdbde8 = 0xffffffff;
  DAT_02fdbdd8 = 0xffffffff;
  DAT_030111d0 = 0;
  _Str1 = (char *)FUN_00482761(&DAT_02f9d524);
  if (_Str1 == (char *)0x0) {
    FUN_00489ab5(0xc);
    DVar3 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_030111d8);
    if (DVar3 == 0xffffffff) {
      return;
    }
    DAT_02fdbd40 = DAT_030111d8 * 0x3c;
    DAT_030111d0 = 1;
    if (DAT_0301121e != 0) {
      DAT_02fdbd40 = DAT_02fdbd40 + DAT_0301122c * 0x3c;
    }
    if ((DAT_03011272 == 0) || (DAT_03011280 == 0)) {
      DAT_02fdbd44 = 0;
      DAT_02fdbd48 = 0;
    }
    else {
      DAT_02fdbd44 = 1;
      DAT_02fdbd48 = (DAT_03011280 - DAT_0301122c) * 0x3c;
    }
    iVar4 = WideCharToMultiByte(DAT_030111ac,0x220,(LPCWSTR)&DAT_030111dc,-1,PTR_DAT_02fdbdcc,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 == 0) || (local_8 != 0)) {
      *PTR_DAT_02fdbdcc = 0;
    }
    else {
      PTR_DAT_02fdbdcc[0x3f] = 0;
    }
    iVar4 = WideCharToMultiByte(DAT_030111ac,0x220,(LPCWSTR)&DAT_03011230,-1,PTR_DAT_02fdbdd0,0x3f,
                                (LPCSTR)0x0,&local_8);
    if ((iVar4 != 0) && (local_8 == 0)) {
      PTR_DAT_02fdbdd0[0x3f] = 0;
      return;
    }
LAB_0048e6fd:
    *PTR_DAT_02fdbdd0 = 0;
  }
  else {
    if ((*_Str1 != '\0') &&
       ((DAT_03011284 == (char *)0x0 || (iVar4 = _strcmp(_Str1,DAT_03011284), iVar4 != 0)))) {
      FUN_004837fe(DAT_03011284);
      sVar5 = _strlen(_Str1);
      DAT_03011284 = _malloc(sVar5 + 1);
      if (DAT_03011284 != (char *)0x0) {
        FUN_00489dc0(DAT_03011284,_Str1);
        FUN_00489ab5(0xc);
        _strncpy(PTR_DAT_02fdbdcc,_Str1,3);
        _Source = _Str1 + 3;
        PTR_DAT_02fdbdcc[3] = 0;
        cVar1 = *_Source;
        if (cVar1 == '-') {
          _Source = _Str1 + 4;
        }
        iVar4 = FUN_00482c09(_Source);
        DAT_02fdbd40 = iVar4 * 0xe10;
        for (; (cVar2 = *_Source, cVar2 == '+' || (('/' < cVar2 && (cVar2 < ':'))));
            _Source = _Source + 1) {
        }
        if (*_Source == ':') {
          _Source = _Source + 1;
          iVar4 = FUN_00482c09(_Source);
          DAT_02fdbd40 = DAT_02fdbd40 + iVar4 * 0x3c;
          for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
          }
          if (*_Source == ':') {
            _Source = _Source + 1;
            iVar4 = FUN_00482c09(_Source);
            DAT_02fdbd40 = DAT_02fdbd40 + iVar4;
            for (; ('/' < *_Source && (*_Source < ':')); _Source = _Source + 1) {
            }
          }
        }
        if (cVar1 == '-') {
          DAT_02fdbd40 = -DAT_02fdbd40;
        }
        DAT_02fdbd44 = (int)*_Source;
        if (DAT_02fdbd44 != 0) {
          _strncpy(PTR_DAT_02fdbdd0,_Source,3);
          PTR_DAT_02fdbdd0[3] = 0;
          return;
        }
        goto LAB_0048e6fd;
      }
    }
    FUN_00489ab5(0xc);
  }
  return;
}

