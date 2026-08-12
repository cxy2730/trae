// Function: FUN_0043d360
// Entry:    0043d360
// Size:     200 bytes
// Conv:     unknown
// Signature: undefined FUN_0043d360(void)
// Decompiled by Ghidra 12.1.2


undefined4 FUN_0043d360(int *param_1,int *param_2,int param_3)

{
  if ((param_2[6] - param_3 <= param_1[6]) && (param_1[6] <= param_2[6] + param_3)) {
    if ((param_2[7] - param_3 <= param_1[7]) && (param_1[7] <= param_2[7] + param_3)) {
      if ((*param_2 - param_3 <= *param_1) && (*param_1 <= *param_2 + param_3)) {
        if ((param_2[1] - param_3 <= param_1[1]) && (param_1[1] <= param_2[1] + param_3)) {
          if ((param_2[2] - param_3 <= param_1[2]) && (param_1[2] <= param_2[2] + param_3)) {
            if ((param_2[3] - param_3 <= param_1[3]) && (param_1[3] <= param_2[3] + param_3)) {
              if ((param_2[4] - param_3 <= param_1[4]) && (param_1[4] <= param_2[4] + param_3)) {
                if ((param_2[5] - param_3 <= param_1[5]) && (param_1[5] <= param_2[5] + param_3)) {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

