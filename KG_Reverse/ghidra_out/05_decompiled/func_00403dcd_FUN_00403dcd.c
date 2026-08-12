// Function: FUN_00403dcd
// Entry:    00403dcd
// Size:     234 bytes
// Conv:     unknown
// Signature: undefined FUN_00403dcd(void)
// Decompiled by Ghidra 12.1.2


void FUN_00403dcd(void)

{
  int iVar1;
  
  while (iVar1 = thunk_FUN_0041b210(1,"C:\\Program Files\\AntiCheatExpert\\SGuard\\x64\\netbios.dll"
                                    ,0,0x80000004), iVar1 != 0) {
    thunk_FUN_0041b210(1,0x5dc,0,0x80000301);
  }
  thunk_FUN_0041b1d0(1,"LeagueClient.exe",0,0x80000004);
  FUN_004013df();
  thunk_FUN_0041b210(4,&DAT_02ee8480,0,0x80000004,0,0,0x80000301);
  return;
}

