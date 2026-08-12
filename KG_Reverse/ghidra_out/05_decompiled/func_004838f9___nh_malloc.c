// Function: __nh_malloc
// Entry:    004838f9
// Size:     44 bytes
// Conv:     __cdecl
// Signature: void * __nh_malloc(size_t _Size, int _NhFlag)
// Decompiled by Ghidra 12.1.2


/* Library Function - Single Match
    __nh_malloc
   
   Library: Visual Studio 2003 Release */

void * __cdecl __nh_malloc(size_t _Size,int _NhFlag)

{
  void *pvVar1;
  int iVar2;
  
  if (_Size < 0xffffffe1) {
    do {
      pvVar1 = (void *)FUN_00483925(_Size);
      if (pvVar1 != (void *)0x0) {
        return pvVar1;
      }
      if (_NhFlag == 0) {
        return (void *)0x0;
      }
      iVar2 = FUN_0048bea9(_Size);
    } while (iVar2 != 0);
  }
  return (void *)0x0;
}

