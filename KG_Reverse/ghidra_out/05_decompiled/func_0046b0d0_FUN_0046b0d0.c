// Function: FUN_0046b0d0
// Entry:    0046b0d0
// Size:     412 bytes
// Conv:     unknown
// Signature: undefined FUN_0046b0d0(void)
// Decompiled by Ghidra 12.1.2


undefined1 * FUN_0046b0d0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  pbVar4 = &DAT_02fd2690;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_0046b106:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0046b10b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_0046b106;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0046b10b:
  if (iVar3 == 0) {
    return &LAB_0046b030;
  }
  pcVar5 = s_NewPlay_02fd2688;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_0046b147:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0046b14c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_0046b147;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0046b14c:
  if (iVar3 == 0) {
    return &LAB_0046b050;
  }
  pcVar5 = s_GetPlayState_02fd2678;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_0046b188:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0046b18d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_0046b188;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0046b18d:
  if (iVar3 == 0) {
    return &LAB_0046b0a0;
  }
  pcVar5 = s_CreatePlayer_02fd2668;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_0046b1c9:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0046b1ce;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_0046b1c9;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0046b1ce:
  if (iVar3 == 0) {
    return &LAB_0046b000;
  }
  pcVar5 = s_RemovePlayer_02fd2658;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_0046b20a:
      iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
      goto LAB_0046b20f;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_0046b20a;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0046b20f:
  if (iVar3 == 0) {
    return &LAB_0046b070;
  }
  pcVar5 = s_SetPauseState_02fd2648;
  while( true ) {
    bVar1 = *param_1;
    bVar6 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) break;
    if (bVar1 == 0) {
      return &DAT_0046b080;
    }
    bVar1 = param_1[1];
    bVar6 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) break;
    param_1 = param_1 + 2;
    pcVar5 = pcVar5 + 2;
    if (bVar1 == 0) {
      return &DAT_0046b080;
    }
  }
  return (undefined1 *)(~-(uint)(1 - bVar6 != (uint)(bVar6 != 0)) & 0x46b080);
}

