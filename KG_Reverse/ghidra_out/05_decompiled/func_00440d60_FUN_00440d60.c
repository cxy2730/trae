// Function: FUN_00440d60
// Entry:    00440d60
// Size:     1431 bytes
// Conv:     unknown
// Signature: undefined FUN_00440d60(void)
// Decompiled by Ghidra 12.1.2


uint FUN_00440d60(int *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)*param_1;
  iVar5 = ((puVar1[4] & 4) != 0) + 1;
  if (((puVar1[4] & 2) == 0) && ((param_3 != param_4 || (param_4 != param_5)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (0xff < param_2) {
    FUN_004463d0(*(undefined4 *)*puVar1,s_color_map_index_out_of_range_02fb1f6c);
  }
  if (param_7 == 3) {
    if (param_1[8] == 0) {
      FUN_00440d00(param_1);
    }
    param_7 = param_1[8];
    if (param_7 != 3) goto LAB_00440f65;
    iVar2 = param_1[9];
    param_3 = FUN_0043e660(param_3 * 0x101,iVar2);
    param_3 = param_3 & 0xffff;
    param_4 = FUN_0043e660(param_4 * 0x101,iVar2);
    param_4 = param_4 & 0xffff;
    param_5 = FUN_0043e660(param_5 * 0x101,iVar2);
    param_5 = param_5 & 0xffff;
    if ((!bVar3) && (iVar5 != 2)) {
      uVar7 = param_3 * 0xff >> 0xf;
      param_3 = ((uint)(byte)(&DAT_02f97858)[uVar7] * (param_3 * 0xff & 0x7fff) >> 0xc) +
                (uint)(ushort)(&DAT_02f97458)[uVar7] >> 8 & 0xff;
      uVar7 = param_4 * 0xff >> 0xf;
      uVar8 = param_5 * 0xff >> 0xf;
      param_4 = ((uint)(byte)(&DAT_02f97858)[uVar7] * (param_4 * 0xff & 0x7fff) >> 0xc) +
                (uint)(ushort)(&DAT_02f97458)[uVar7] >> 8 & 0xff;
      param_5 = ((uint)(byte)(&DAT_02f97858)[uVar8] * (param_5 * 0xff & 0x7fff) >> 0xc) +
                (uint)(ushort)(&DAT_02f97458)[uVar8] >> 8 & 0xff;
      param_7 = 1;
      goto LAB_00440f03;
    }
    param_7 = 2;
    param_6 = param_6 * 0x101;
LAB_00440ff0:
    if (bVar3) {
      iVar2 = param_3 * 0x1b38 + param_4 * 0x5b8a + param_5 * 0x93e;
      if (iVar5 == 2) {
        param_4 = iVar2 + 0x4000U >> 0xf;
        param_3 = param_4;
        param_5 = param_4;
      }
      else {
        uVar7 = (iVar2 + 0x80U >> 8) * 0xff + 0x40;
        uVar8 = uVar7 >> 0x16;
        param_7 = 1;
        param_4 = ((uint)(byte)(&DAT_02f97858)[uVar8] * (uVar7 >> 7 & 0x7fff) >> 0xc) +
                  (uint)(ushort)(&DAT_02f97458)[uVar8] >> 8 & 0xff;
        param_3 = param_4;
        param_5 = param_4;
      }
    }
    else if (iVar5 == 1) {
      uVar7 = param_3 * 0xff >> 0xf;
      param_3 = ((uint)(byte)(&DAT_02f97858)[uVar7] * (param_3 * 0xff & 0x7fff) >> 0xc) +
                (uint)(ushort)(&DAT_02f97458)[uVar7] >> 8 & 0xff;
      uVar7 = param_4 * 0xff >> 0xf;
      uVar8 = param_5 * 0xff >> 0xf;
      param_4 = ((uint)(byte)(&DAT_02f97858)[uVar7] * (param_4 * 0xff & 0x7fff) >> 0xc) +
                (uint)(ushort)(&DAT_02f97458)[uVar7] >> 8 & 0xff;
      param_5 = ((uint)(byte)(&DAT_02f97858)[uVar8] * (param_5 * 0xff & 0x7fff) >> 0xc) +
                (uint)(ushort)(&DAT_02f97458)[uVar8] >> 8 & 0xff;
      param_6 = (param_6 + 0x81) * 0xff >> 0x10;
      goto LAB_00440f27;
    }
  }
  else {
LAB_00440f65:
    if (param_7 == 4) {
      param_3 = param_3 * 0x101;
      param_4 = param_4 * 0x101;
      param_5 = param_5 * 0x101;
LAB_00440fc5:
      param_7 = 2;
      param_6 = param_6 * 0x101;
      goto LAB_00440ff0;
    }
    if (param_7 == 1) {
      if ((bVar3) || (iVar5 == 2)) {
        param_3 = (uint)(ushort)(&DAT_02f97258)[param_3];
        param_4 = (uint)(ushort)(&DAT_02f97258)[param_4];
        param_5 = (uint)(ushort)(&DAT_02f97258)[param_5];
        goto LAB_00440fc5;
      }
    }
    else if (param_7 == 2) goto LAB_00440ff0;
  }
LAB_00440f03:
  if (param_7 != iVar5) {
    FUN_004463d0(*(undefined4 *)*puVar1,s_bad_encoding__internal_error__02fb1f4c);
  }
LAB_00440f27:
  uVar7 = puVar1[4];
  if (((uVar7 & 0x20) == 0) || ((uVar7 & 1) == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  uVar6 = uVar7 >> 3 & 2;
  if (iVar5 == 2) {
    uVar4 = uVar7 & 3;
    iVar5 = param_1[3] + (uVar4 + 1) * param_2 * 2;
    switch(uVar4) {
    case 1:
      uVar4 = uVar8 ^ 1;
      *(short *)(iVar5 + uVar4 * 2) = (short)param_6;
    case 0:
      if (param_6 < 0xffff) {
        if (param_6 != 0) {
          uVar7 = param_4 * param_6 + 0x7fff;
          *(short *)(iVar5 + uVar8 * 2) = (short)(uVar7 / 0xffff);
          return uVar7 * -0x7fff7fff;
        }
        param_4 = 0;
      }
      *(short *)(iVar5 + uVar8 * 2) = (short)param_4;
      return uVar4;
    case 3:
      *(short *)(iVar5 + ((-(uint)(uVar8 != 0) & 0xfffffffd) + 3) * 2) = (short)param_6;
    case 2:
      if (param_6 < 0xffff) {
        if (param_6 == 0) {
          param_5 = 0;
          param_4 = 0;
          param_3 = 0;
        }
        else {
          param_5 = (param_5 * param_6 + 0x7fff) / 0xffff;
          param_4 = (param_4 * param_6 + 0x7fff) / 0xffff;
          param_3 = (param_3 * param_6 + 0x7fff) / 0xffff;
        }
      }
      uVar7 = (uVar6 ^ 2) + uVar8;
      *(undefined2 *)(iVar5 + uVar7 * 2) = (undefined2)param_5;
      *(short *)(iVar5 + 2 + uVar8 * 2) = (short)param_4;
      *(short *)(iVar5 + (uVar6 + uVar8) * 2) = (short)param_3;
      return uVar7;
    }
  }
  else {
    uVar4 = uVar7 & 3;
    iVar5 = (uVar4 + 1) * param_2 + param_1[3];
    switch(uVar4) {
    case 1:
      *(char *)((uVar8 ^ 1) + iVar5) = (char)param_6;
    case 0:
      *(char *)(iVar5 + uVar8) = (char)param_4;
      break;
    case 3:
      uVar4 = (-(uint)(uVar8 != 0) & 0xfffffffd) + 3;
      *(char *)(uVar4 + iVar5) = (char)param_6;
    case 2:
      *(undefined1 *)((uVar6 ^ 2) + iVar5 + uVar8) = (undefined1)param_5;
      *(char *)(iVar5 + 1 + uVar8) = (char)param_4;
      *(char *)(iVar5 + uVar6 + uVar8) = (char)param_3;
      return CONCAT31((int3)(uVar4 >> 8),(undefined1)param_5);
    }
  }
  return uVar7 & 3;
}

