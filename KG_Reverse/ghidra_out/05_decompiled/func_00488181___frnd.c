// Function: __frnd
// Entry:    00488181
// Size:     18 bytes
// Conv:     unknown
// Signature: undefined __frnd(void)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __frnd
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release, Visual Studio 2012 Release,
   Visual Studio 2019 Release */

float10 __frnd(double param_1)

{
  return (float10)ROUND(param_1);
}

