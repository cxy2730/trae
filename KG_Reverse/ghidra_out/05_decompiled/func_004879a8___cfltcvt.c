// Function: __cfltcvt
// Entry:    004879a8
// Size:     81 bytes
// Conv:     __cdecl
// Signature: errno_t __cfltcvt(double * arg, char * buffer, size_t sizeInBytes, int format, int precision, int caps)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __cfltcvt
   
   Library: Visual Studio 2003 Release */

errno_t __cdecl
__cfltcvt(double *arg,char *buffer,size_t sizeInBytes,int format,int precision,int caps)

{
  errno_t eVar1;
  
  if ((sizeInBytes == 0x65) || (sizeInBytes == 0x45)) {
    eVar1 = FUN_004876f6(arg,buffer,format,precision);
  }
  else {
    if (sizeInBytes == 0x66) {
      eVar1 = FUN_00487819(arg,buffer,format);
      return eVar1;
    }
    eVar1 = FUN_00487915(arg,buffer,format,precision);
  }
  return eVar1;
}

