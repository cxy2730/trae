// Function: FUN_0048fe2e
// Entry:    0048fe2e
// Size:     34 bytes
// Conv:     unknown
// Signature: undefined FUN_0048fe2e(void)
// Decompiled by Ghidra 12.1.2


void FUN_0048fe2e(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_03014ec0)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}

