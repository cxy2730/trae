// Function: _malloc
// Entry:    004838e7
// Size:     18 bytes
// Conv:     __cdecl
// Signature: void * _malloc(size_t _Size)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    _malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl _malloc(size_t _Size)

{
  void *pvVar1;
  
  pvVar1 = __nh_malloc(_Size,DAT_03011178);
  return pvVar1;
}

