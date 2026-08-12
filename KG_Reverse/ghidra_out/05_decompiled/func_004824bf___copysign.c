// Function: __copysign
// Entry:    004824bf
// Size:     33 bytes
// Conv:     __cdecl
// Signature: double __copysign(double _Number, double _Sign)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __copysign
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2019 Release */

double __cdecl __copysign(double _Number,double _Sign)

{
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,_Number._0_4_);
}

