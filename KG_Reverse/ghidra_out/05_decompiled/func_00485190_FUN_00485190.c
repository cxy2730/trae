// Function: FUN_00485190
// Entry:    00485190
// Size:     220 bytes
// Conv:     unknown
// Signature: undefined FUN_00485190(void)
// Decompiled by Ghidra 12.1.2


void FUN_00485190(undefined4 *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  _TIME_ZONE_INFORMATION local_d0;
  _SYSTEMTIME local_24;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  GetSystemTime(&local_24);
  if (local_24.wMinute == DAT_03010fb0._2_2_) {
    if (local_24.wHour == (WORD)DAT_03010fb0) {
      if (local_24.wDay == DAT_03010fac._2_2_) {
        if (local_24.wMonth == DAT_03010fa8._2_2_) {
          if (local_24.wYear == (WORD)DAT_03010fa8) goto LAB_0048523a;
        }
      }
    }
  }
  DVar1 = GetTimeZoneInformation(&local_d0);
  if (DVar1 == 0xffffffff) {
    DAT_03010fa0 = 0xffffffff;
  }
  else if (((DVar1 == 2) && (local_d0.DaylightDate.wMonth != 0)) && (local_d0.DaylightBias != 0)) {
    DAT_03010fa0 = 1;
  }
  else {
    DAT_03010fa0 = 0;
  }
  DAT_03010fa8._0_2_ = local_24.wYear;
  DAT_03010fa8._2_2_ = local_24.wMonth;
  DAT_03010fac._0_2_ = local_24.wDayOfWeek;
  DAT_03010fac._2_2_ = local_24.wDay;
  DAT_03010fb0._0_2_ = local_24.wHour;
  DAT_03010fb0._2_2_ = local_24.wMinute;
  DAT_03010fb4._0_2_ = local_24.wSecond;
  DAT_03010fb4._2_2_ = local_24.wMilliseconds;
LAB_0048523a:
  uVar2 = FUN_0048e10a(local_14.wYear,local_14.wMonth,local_14.wDay,local_14.wHour,local_14.wMinute,
                       local_14.wSecond,DAT_03010fa0);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = uVar2;
  }
  return;
}

