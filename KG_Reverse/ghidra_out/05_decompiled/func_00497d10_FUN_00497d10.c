// Function: FUN_00497d10
// Entry:    00497d10
// Size:     50 bytes
// Conv:     unknown
// Signature: undefined FUN_00497d10(void)
// Decompiled by Ghidra 12.1.2


void __fastcall FUN_00497d10(int *param_1)

{
  CTypeLibCache *this;
  
  FUN_0049d98a(0xd);
  this = (CTypeLibCache *)(**(code **)(*param_1 + 0x20))();
  if (this != (CTypeLibCache *)0x0) {
    CTypeLibCache::Unlock(this);
  }
  FUN_0049d9fa(0xd);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}

