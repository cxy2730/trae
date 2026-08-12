// Function: OpenPrinterA
// Entry:    00480fcc
// Size:     6 bytes
// Conv:     __stdcall
// Signature: BOOL OpenPrinterA(LPSTR pPrinterName, LPHANDLE phPrinter, LPPRINTER_DEFAULTSA pDefault)
// Decompiled by Ghidra 12.1.2


BOOL OpenPrinterA(LPSTR pPrinterName,LPHANDLE phPrinter,LPPRINTER_DEFAULTSA pDefault)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00480fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenPrinterA(pPrinterName,phPrinter,pDefault);
  return BVar1;
}

