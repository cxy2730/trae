// Function: FUN_00442870
// Entry:    00442870
// Size:     327 bytes
// Conv:     unknown
// Signature: undefined FUN_00442870(void)
// Decompiled by Ghidra 12.1.2


float10 FUN_00442870(double param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  if (param_2 == param_3) {
    return (float10)param_1;
  }
  fVar1 = (float10)0.0;
  switch(param_2) {
  case 1:
    switch(param_3) {
    case 2:
switchD_004428a2_caseD_1:
      return (float10)param_1 * (float10)0.1;
    case 3:
      return (float10)param_1 * (float10)0.0394;
    case 4:
      return (float10)param_1 * (float10)2.8367999999999998;
    case 5:
switchD_00442921_caseD_1:
      return (float10)param_1 * (float10)10.0;
    }
    break;
  case 2:
    switch(param_3) {
    case 1:
      goto switchD_00442921_caseD_1;
    case 3:
      return (float10)param_1 * (float10)0.39399999999999996;
    case 4:
      return (float10)param_1 * (float10)28.368;
    case 5:
      return (float10)param_1 * (float10)100.0;
    }
    break;
  case 3:
    switch(param_3) {
    case 1:
      return (float10)param_1 * (float10)25.38071065989848;
    case 2:
    case 5:
      return (float10)param_1 * (float10)253.8071065989848;
    case 4:
      return (float10)param_1 * (float10)72.0;
    }
    break;
  case 4:
    switch(param_3) {
    case 1:
      return (float10)param_1 * (float10)0.35250987027636776;
    case 2:
    case 5:
      return (float10)param_1 * (float10)3.5250987027636778;
    case 3:
      fVar1 = (float10)param_1 * (float10)0.013888888888888888;
    }
    break;
  case 5:
    switch(param_3) {
    case 1:
      goto switchD_004428a2_caseD_1;
    case 2:
      return (float10)param_1 * (float10)0.01;
    case 3:
      return (float10)param_1 * (float10)0.00394;
    case 4:
      return (float10)param_1 * (float10)0.28368;
    }
  }
  return fVar1;
}

