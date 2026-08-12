// Function: FUN_0044ce90
// Entry:    0044ce90
// Size:     1044 bytes
// Conv:     unknown
// Signature: undefined FUN_0044ce90(void)
// Decompiled by Ghidra 12.1.2


void FUN_0044ce90(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x124) == 0) {
    FUN_004463d0(param_1,s_NULL_row_buffer_02fb2d18);
  }
  if (((*(uint *)(param_1 + 0x78) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x78) & 0x40) == 0)) {
    FUN_004463d0(param_1,s_Uninitialized_row_02fb2d04);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x1000) != 0) {
    if ((char)param_2[2] == '\x03') {
      FUN_0044f610(param_2,*(int *)(param_1 + 0x124) + 1,*(undefined4 *)(param_1 + 0x144),
                   *(undefined4 *)(param_1 + 0x1b4),*(undefined2 *)(param_1 + 0x150));
    }
    else {
      if ((*(short *)(param_1 + 0x150) == 0) || ((*(uint *)(param_1 + 0x7c) & 0x2000000) == 0)) {
        iVar1 = *(int *)(param_1 + 0x124);
        iVar4 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x124);
        iVar4 = param_1 + 0x1b8;
      }
      FUN_0044f840(param_2,iVar1 + 1,iVar4);
    }
  }
  if ((((*(uint *)(param_1 + 0x7c) & 0x40000) != 0) && ((*(uint *)(param_1 + 0x7c) & 0x80) == 0)) &&
     (((char)param_2[2] == '\x06' || ((char)param_2[2] == '\x04')))) {
    FUN_00450050(param_2,*(int *)(param_1 + 0x124) + 1,0);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x600000) != 0) {
    iVar4 = FUN_0044dc20(param_1,param_2,*(int *)(param_1 + 0x124) + 1);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x260) = 1;
      if ((*(uint *)(param_1 + 0x7c) & 0x600000) == 0x400000) {
        FUN_00446560(param_1,s_png_do_rgb_to_gray_found_nongray_02fb2cdc);
      }
      if ((*(uint *)(param_1 + 0x7c) & 0x600000) == 0x200000) {
        FUN_004463d0(param_1,s_png_do_rgb_to_gray_found_nongray_02fb2cdc);
      }
    }
  }
  if (((*(uint *)(param_1 + 0x7c) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x74) & 0x800) == 0)) {
    FUN_0044dac0(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(byte *)(param_1 + 0x7c) & 0x80) != 0) {
    FUN_0044e0c0(param_2,*(int *)(param_1 + 0x124) + 1,param_1);
  }
  uVar2 = *(uint *)(param_1 + 0x7c);
  if (((((uVar2 & 0x2000) != 0) && ((uVar2 & 0x600000) == 0)) &&
      (((uVar2 & 0x80) == 0 ||
       ((*(short *)(param_1 + 0x150) == 0 && ((*(byte *)(param_1 + 0x157) & 4) == 0)))))) &&
     (*(char *)(param_1 + 0x157) != '\x03')) {
    FUN_0044f140(param_2,*(int *)(param_1 + 0x124) + 1,param_1);
  }
  if ((((*(uint *)(param_1 + 0x7c) & 0x40000) != 0) && ((*(uint *)(param_1 + 0x7c) & 0x80) != 0)) &&
     (((char)param_2[2] == '\x06' || ((char)param_2[2] == '\x04')))) {
    FUN_00450050(param_2,*(int *)(param_1 + 0x124) + 1,0);
  }
  if (((*(uint *)(param_1 + 0x7c) & 0x800000) != 0) && ((*(byte *)(param_2 + 2) & 4) != 0)) {
    FUN_0044f540(param_2,*(int *)(param_1 + 0x124) + 1,param_1);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x4000000) != 0) {
    FUN_0044d5d0(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x400) != 0) {
    FUN_0044d640(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(byte *)(param_1 + 0x7c) & 0x40) != 0) {
    FUN_0044fca0(param_2,*(int *)(param_1 + 0x124) + 1,*(undefined4 *)(param_1 + 0x208),
                 *(undefined4 *)(param_1 + 0x20c));
    if (param_2[1] == 0) {
      FUN_004463d0(param_1,s_png_do_quantize_returned_rowbyte_02fb2cb8);
    }
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x200) != 0) {
    FUN_0044fc50(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if (((*(uint *)(param_1 + 0x7c) & 0x4000) != 0) && ((*(uint *)(param_1 + 0x74) & 0x800) != 0)) {
    FUN_0044dac0(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(byte *)(param_1 + 0x7c) & 0x20) != 0) {
    FUN_0044ff40(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(byte *)(param_1 + 0x7c) & 8) != 0) {
    FUN_0044d3e0(param_2,*(int *)(param_1 + 0x124) + 1,param_1 + 0x1ad);
  }
  if ((*(byte *)(param_1 + 0x7c) & 4) != 0) {
    FUN_0044d2b0(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if (((char)param_2[2] == '\x03') && (-1 < *(int *)(param_1 + 0x14c))) {
    FUN_00450280(param_1,param_2);
  }
  if ((*(byte *)(param_1 + 0x7c) & 1) != 0) {
    FUN_004501b0(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x10000) != 0) {
    FUN_00450000(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x8000) != 0) {
    FUN_0044d860(param_2,*(int *)(param_1 + 0x124) + 1,*(undefined2 *)(param_1 + 0x160),
                 *(undefined4 *)(param_1 + 0x78));
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x80000) != 0) {
    FUN_0044d790(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x20000) != 0) {
    FUN_0044d690(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(byte *)(param_1 + 0x7c) & 0x10) != 0) {
    FUN_0044ffd0(param_2,*(int *)(param_1 + 0x124) + 1);
  }
  if ((*(uint *)(param_1 + 0x7c) & 0x100000) != 0) {
    if (*(code **)(param_1 + 100) != (code *)0x0) {
      (**(code **)(param_1 + 100))(param_1,param_2,*(int *)(param_1 + 0x124) + 1);
    }
    if (*(char *)(param_1 + 0x70) != '\0') {
      *(char *)((int)param_2 + 9) = *(char *)(param_1 + 0x70);
    }
    if (*(char *)(param_1 + 0x71) != '\0') {
      *(char *)((int)param_2 + 10) = *(char *)(param_1 + 0x71);
    }
    bVar3 = *(char *)((int)param_2 + 10) * *(char *)((int)param_2 + 9);
    *(byte *)((int)param_2 + 0xb) = bVar3;
    if (7 < bVar3) {
      param_2[1] = (uint)(bVar3 >> 3) * *param_2;
      return;
    }
    param_2[1] = (uint)bVar3 * *param_2 + 7 >> 3;
  }
  return;
}

