// Function: FUN_004226d0
// Entry:    004226d0
// Size:     1080 bytes
// Conv:     unknown
// Signature: undefined FUN_004226d0(void)
// Decompiled by Ghidra 12.1.2


bool FUN_004226d0(uint param_1,int *param_2,undefined4 *param_3)

{
  HDC hdc;
  BITMAPINFOHEADER *pBVar1;
  undefined4 *puVar2;
  HBITMAP pHVar3;
  HDC hdc_00;
  HDC hdc_01;
  HGDIOBJ h;
  HGDIOBJ h_00;
  byte *pbVar4;
  int iVar5;
  void *pjBits;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_34;
  int local_2c;
  BITMAPINFOHEADER local_28;
  
  puVar2 = param_3;
  if ((((param_2 == (int *)0x0) || (*param_2 == 0)) || (param_1 == 0)) ||
     (hdc = *(HDC *)(param_1 + 4), hdc == (HDC)0x0)) {
    return false;
  }
  param_3[1] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = hdc;
  param_3[1] = *param_2;
  param_3[2] = param_2[1];
  param_3[3] = param_2[2];
  iVar7 = *param_2;
  if ((iVar7 == 3) || (iVar7 == 4)) {
    param_3[4] = param_2[3];
    return true;
  }
  if (iVar7 == 5) {
    pBVar1 = (BITMAPINFOHEADER *)param_2[4];
    pHVar3 = CreateDIBitmap(hdc,pBVar1,4,&pBVar1[0x1a].biXPelsPerMeter,(BITMAPINFO *)pBVar1,0);
    param_3[5] = pHVar3;
    if (pHVar3 != (HBITMAP)0x0) {
      hdc_00 = CreateCompatibleDC(hdc);
      hdc_01 = CreateCompatibleDC(hdc);
      h = SelectObject(hdc_00,(HGDIOBJ)param_3[5]);
      pHVar3 = CreateCompatibleBitmap(hdc,param_3[2],param_3[3]);
      h_00 = SelectObject(hdc_01,pHVar3);
      BitBlt(hdc_01,0,0,param_3[2],param_3[3],hdc_00,0,0,0xcc0020);
      SelectObject(hdc_00,h);
      DeleteDC(hdc_00);
      SelectObject(hdc_01,h_00);
      DeleteDC(hdc_01);
      DeleteObject((HGDIOBJ)param_3[5]);
      param_3[5] = pHVar3;
      return param_3[5] != 0;
    }
  }
  else {
    if (iVar7 == 7) {
      pHVar3 = CreateBitmap(param_2[1],param_2[2],1,1,(void *)param_2[4]);
      param_3[5] = pHVar3;
      return param_3[5] != 0;
    }
    if (iVar7 == 6) {
      pBVar1 = (BITMAPINFOHEADER *)param_2[4];
      pHVar3 = CreateDIBitmap(hdc,pBVar1,4,&pBVar1[0x1a].biXPelsPerMeter,(BITMAPINFO *)pBVar1,0);
      param_3[5] = pHVar3;
      return param_3[5] != 0;
    }
    if (iVar7 == 8) {
      local_28.biWidth = param_2[1];
      local_28.biHeight = -param_2[2];
      local_28.biSize = 0x28;
      local_28.biPlanes = 1;
      local_28.biBitCount = 0x20;
      local_28.biCompression = 0;
      local_28.biSizeImage = 0;
      local_28.biXPelsPerMeter = 0;
      local_28.biYPelsPerMeter = 0;
      local_28.biClrUsed = 0;
      local_28.biClrImportant = 0;
      FUN_004062a0();
      iVar7 = param_2[2];
      iVar5 = param_2[1];
      pbVar4 = (byte *)FUN_004062c0(iVar7 * iVar5 * 4);
      param_3 = (undefined4 *)0x0;
      pbVar8 = (byte *)param_2[4];
      pbVar9 = pbVar4;
      for (uVar6 = iVar7 * iVar5 & 0x3fffffff; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pbVar9 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      }
      if (param_2[2] != 0) {
        do {
          param_1 = 0;
          if (param_2[1] != 0) {
            do {
              if (pbVar4[3] == 0xff) {
                pbVar4 = pbVar4 + 4;
              }
              else {
                iVar7 = 3;
                do {
                  pbVar8 = pbVar4;
                  iVar5 = __ftol();
                  if (iVar5 < 0xff) {
                    *pbVar8 = (iVar5 < 1) - 1U & (byte)iVar5;
                  }
                  else {
                    *pbVar8 = 0xff;
                  }
                  iVar7 = iVar7 + -1;
                  pbVar4 = pbVar8 + 1;
                } while (iVar7 != 0);
                pbVar4 = pbVar8 + 2;
              }
              param_1 = param_1 + 1;
            } while (param_1 < (uint)param_2[1]);
          }
          param_3 = (undefined4 *)((int)param_3 + 1);
        } while (param_3 < (uint)param_2[2]);
      }
      pHVar3 = CreateDIBitmap(hdc,&local_28,4,(void *)(-(uint)(local_2c != 0) & local_34),
                              (BITMAPINFO *)&local_28,0);
      puVar2[5] = pHVar3;
      FUN_004064a0();
      return puVar2[5] != 0;
    }
    pjBits = (void *)FUN_004224a0(param_2[4],param_2[1],param_2[2],0);
    if (pjBits == (void *)0x0) {
      return false;
    }
    local_28.biWidth = param_2[1];
    local_28.biHeight = param_2[2];
    local_28.biSize = 0x28;
    local_28.biPlanes = 1;
    local_28.biBitCount = 0x18;
    local_28.biCompression = 0;
    local_28.biSizeImage = 0;
    local_28.biXPelsPerMeter = 0;
    local_28.biYPelsPerMeter = 0;
    local_28.biClrUsed = 0;
    local_28.biClrImportant = 0;
    pHVar3 = CreateDIBitmap(hdc,&local_28,4,pjBits,(BITMAPINFO *)&local_28,0);
    param_3[5] = pHVar3;
    FUN_00492f40(pjBits);
  }
  return param_3[5] != 0;
}

