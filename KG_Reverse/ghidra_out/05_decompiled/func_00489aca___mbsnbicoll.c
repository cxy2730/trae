// Function: __mbsnbicoll
// Entry:    00489aca
// Size:     63 bytes
// Conv:     __cdecl
// Signature: int __mbsnbicoll(uchar * _Str1, uchar * _Str2, size_t _MaxCount)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __mbsnbicoll
   
   Library: Visual Studio 2003 Release */

int __cdecl __mbsnbicoll(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  int iVar1;
  
  if (_MaxCount == 0) {
    return 0;
  }
  iVar1 = FUN_0048f2a2(DAT_030151e4,1,_Str1,_MaxCount,_Str2,_MaxCount,DAT_03014fc4);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}

