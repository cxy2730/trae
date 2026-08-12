// Function: FUN_00438080
// Entry:    00438080
// Size:     594 bytes
// Conv:     unknown
// Signature: undefined FUN_00438080(void)
// Decompiled by Ghidra 12.1.2


undefined4 __fastcall FUN_00438080(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  uint local_4;
  
  if (*(int *)(param_1 + 0xb0) != 0) {
    iVar3 = *(int *)(param_1 + 0x74);
    iVar6 = *(int *)(param_1 + 0x94);
    while (iVar6 <= iVar3) {
      puVar4 = *(undefined1 **)(param_1 + 0xb4);
      *(int *)(param_1 + 0x94) = iVar6 + 1;
      uVar1 = *puVar4;
      *(undefined1 **)(param_1 + 0xb4) = puVar4 + 1;
      switch(uVar1) {
      case 0:
      case 0x3b:
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb0);
        break;
      default:
        goto switchD_004380d3_caseD_1;
      case 0x21:
        *(int *)(param_1 + 0x94) = iVar6 + 2;
        uVar1 = puVar4[1];
        *(undefined1 **)(param_1 + 0xb4) = puVar4 + 2;
        switch(uVar1) {
        case 1:
          *(undefined1 **)(param_1 + 0xb4) = puVar4 + 0xf;
          *(int *)(param_1 + 0x94) = iVar6 + 0xf;
          bVar2 = puVar4[0xf];
          while (bVar2 != 0) {
            local_4 = (uint)bVar2;
            pbVar7 = (byte *)(*(int *)(param_1 + 0xb4) + local_4 + 1);
            iVar6 = *(int *)(param_1 + 0x94) + local_4 + 1;
            *(byte **)(param_1 + 0xb4) = pbVar7;
            *(int *)(param_1 + 0x94) = iVar6;
            if (iVar3 < iVar6) {
              return 0;
            }
            bVar2 = *pbVar7;
          }
          break;
        default:
          goto switchD_004380d3_caseD_1;
        case 0xf9:
          pbVar7 = puVar4 + 3;
          *(byte **)(param_1 + 0xb4) = pbVar7;
          *(uint *)(param_1 + 0x84) = *pbVar7 & 0x1c;
          *(uint *)(param_1 + 0x88) = *pbVar7 & 1;
          *(undefined1 **)(param_1 + 0xb4) = puVar4 + 4;
          *(uint *)(param_1 + 0x90) = (uint)*(ushort *)(puVar4 + 4);
          *(undefined1 **)(param_1 + 0xb4) = puVar4 + 6;
          *(uint *)(param_1 + 0x8c) = (uint)(byte)puVar4[6];
          *(undefined1 **)(param_1 + 0xb4) = puVar4 + 7;
          *(int *)(param_1 + 0x94) = iVar6 + 7;
          break;
        case 0xfe:
          bVar2 = puVar4[2];
          while (bVar2 != 0) {
            local_4 = (uint)bVar2;
            pbVar7 = (byte *)(*(int *)(param_1 + 0xb4) + local_4 + 1);
            iVar6 = *(int *)(param_1 + 0x94) + local_4 + 1;
            *(byte **)(param_1 + 0xb4) = pbVar7;
            *(int *)(param_1 + 0x94) = iVar6;
            if (iVar3 < iVar6) {
              return 0;
            }
            bVar2 = *pbVar7;
          }
          break;
        case 0xff:
          *(undefined1 **)(param_1 + 0xb4) = puVar4 + 0xe;
          *(int *)(param_1 + 0x94) = iVar6 + 0xe;
          bVar2 = puVar4[0xe];
          while (bVar2 != 0) {
            pbVar7 = (byte *)(*(int *)(param_1 + 0xb4) + bVar2 + 1);
            iVar6 = *(int *)(param_1 + 0x94) + bVar2 + 1;
            *(byte **)(param_1 + 0xb4) = pbVar7;
            *(int *)(param_1 + 0x94) = iVar6;
            if (iVar3 < iVar6) {
              return 0;
            }
            bVar2 = *pbVar7;
          }
        }
        iVar6 = *(int *)(param_1 + 0x94) + 1;
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
        *(int *)(param_1 + 0x94) = iVar6;
        if (iVar3 < iVar6) {
          return 0;
        }
        break;
      case 0x2c:
        uVar5 = FUN_00438440();
        return uVar5;
      }
      iVar6 = *(int *)(param_1 + 0x94);
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xb0);
  }
switchD_004380d3_caseD_1:
  return 0;
}

