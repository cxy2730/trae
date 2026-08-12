// KG_Ghidra_FullExport.java
// Ghidra 12.1.2 headless 脚本 - 完整导出 KG.exe 反编译数据
// 作者: 海鸥
// 输出:
//   ghidra_out/01_functions.json       所有函数列表
//   ghidra_out/02_strings.json         所有字符串
//   ghidra_out/03_imports.json         IAT 完整导入
//   ghidra_out/04_exports.json         EAT 导出表
//   ghidra_out/05_decompiled/<func>.c  每个函数反编译 C 代码
//   ghidra_out/06_disasm/<func>.asm    每个函数反汇编
//   ghidra_out/07_xrefs.json           交叉引用
//   ghidra_out/08_mem_blocks.json      内存块布局
//   ghidra_out/09_summary.json         摘要统计

import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.address.*;
import ghidra.program.model.data.DataType;
import ghidra.util.task.TaskMonitor;

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.*;

public class KGFullExport extends GhidraScript {

    private String outDir;

    @Override
    protected void run() throws Exception {
        outDir = System.getProperty("output.dir", "/workspace/KG_Reverse/ghidra_out");
        new File(outDir).mkdirs();
        new File(outDir + "/05_decompiled").mkdirs();
        new File(outDir + "/06_disasm").mkdirs();

        println("[*] KG_Ghidra_FullExport starting, output: " + outDir);
        println("[*] Program: " + currentProgram.getName());
        println("[*] Language: " + currentProgram.getLanguageID());
        println("[*] Compiler: " + currentProgram.getCompilerSpec().getCompilerSpecID());

        // 1. 函数列表
        exportFunctions();

        // 2. 字符串
        exportStrings();

        // 3. 导入表 IAT
        exportImports();

        // 4. 导出表 EAT
        exportExports();

        // 5. 反编译 (C 代码)
        exportDecompiled();

        // 6. 反汇编
        exportDisassembly();

        // 7. 交叉引用
        exportXrefs();

        // 8. 内存块布局
        exportMemoryBlocks();

        // 9. 摘要统计
        exportSummary();

        println("[*] KG_Ghidra_FullExport DONE");
    }

    // ---------------- 函数列表 ----------------
    private void exportFunctions() throws Exception {
        String path = outDir + "/01_functions.json";
        PrintWriter pw = new PrintWriter(new FileWriter(path));
        pw.println("[");

        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator it = fm.getFunctions(true);
        boolean first = true;
        int count = 0;

        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            if (!first) pw.println(",");
            first = false;
            pw.print("  {");
            pw.print("\"name\": \"" + jsonEscape(f.getName()) + "\", ");
            pw.print("\"entry\": \"" + f.getEntryPoint().toString() + "\", ");
            pw.print("\"size\": " + f.getBody().getNumAddresses() + ", ");
            pw.print("\"isThunk\": " + f.isThunk() + ", ");
            pw.print("\"isExternal\": " + f.isExternal() + ", ");
            pw.print("\"callingConv\": \"" + f.getCallingConventionName() + "\", ");
            pw.print("\"signature\": \"" + jsonEscape(f.getSignature().getPrototypeString()) + "\", ");
            pw.print("\"paramCount\": " + f.getParameterCount());
            pw.print("}");
            count++;
            if (count % 1000 == 0) println("  functions: " + count);
        }
        pw.println("\n]");
        pw.close();
        println("[*] Functions exported: " + count + " -> " + path);
    }

    // ---------------- 字符串 ----------------
    private void exportStrings() throws Exception {
        String path = outDir + "/02_strings.json";
        PrintWriter pw = new PrintWriter(new FileWriter(path));
        pw.println("[");

        DataIterator it = currentProgram.getListing().getDefinedData(true);
        boolean first = true;
        int count = 0;

        while (it.hasNext() && !monitor.isCancelled()) {
            Data d = it.next();
            DataType dt = d.getDataType();
            String typeName = dt.getName();
            // 只处理字符串类型
            if (!typeName.contains("string") && !typeName.contains("String") &&
                !typeName.contains("char") && !typeName.contains("unicode") &&
                !typeName.contains("Unicode")) {
                continue;
            }
            Object val = d.getValue();
            if (val == null) continue;
            String s = val.toString();
            if (s.length() < 4) continue;  // 过滤太短的

            if (!first) pw.println(",");
            first = false;
            pw.print("  {");
            pw.print("\"addr\": \"" + d.getAddress().toString() + "\", ");
            pw.print("\"type\": \"" + typeName + "\", ");
            pw.print("\"len\": " + s.length() + ", ");
            pw.print("\"value\": \"" + jsonEscape(s) + "\"");
            pw.print("}");
            count++;
        }
        pw.println("\n]");
        pw.close();
        println("[*] Strings exported: " + count + " -> " + path);
    }

    // ---------------- 导入表 ----------------
    private void exportImports() throws Exception {
        String path = outDir + "/03_imports.json";
        PrintWriter pw = new PrintWriter(new FileWriter(path));
        pw.println("[");

        SymbolTable st = currentProgram.getSymbolTable();
        SymbolIterator it = st.getExternalSymbols();
        boolean first = true;
        int count = 0;
        // 用 import table manager 更准
        ReferenceIterator refs = currentProgram.getReferenceManager().getExternalReferences();
        Map<String, List<String>> byLib = new TreeMap<>();

        while (refs.hasNext() && !monitor.isCancelled()) {
            ExternalReference ref = (ExternalReference) refs.next();
            String lib = ref.getLibraryName();
            String sym = ref.getLabel();
            String addr = ref.getFromAddress().toString();
            if (lib == null) lib = "?";
            if (sym == null) sym = "?";
            byLib.computeIfAbsent(lib, k -> new ArrayList<>())
                .add("{\"lib\": \"" + jsonEscape(lib) + "\", \"name\": \"" + jsonEscape(sym) +
                     "\", \"ref_addr\": \"" + addr + "\"}");
            count++;
        }

        for (Map.Entry<String, List<String>> e : byLib.entrySet()) {
            for (String line : e.getValue()) {
                if (!first) pw.println(",");
                first = false;
                pw.print("  " + line);
            }
        }
        pw.println("\n]");
        pw.close();
        println("[*] Imports exported: " + count + " -> " + path);
    }

    // ---------------- 导出表 ----------------
    private void exportExports() throws Exception {
        String path = outDir + "/04_exports.json";
        PrintWriter pw = new PrintWriter(new FileWriter(path));
        pw.println("[");

        java.util.Iterator<Address> it = currentProgram.getSymbolTable().getExternalEntryPointIterator();
        boolean first = true;
        int count = 0;
        while (it.hasNext() && !monitor.isCancelled()) {
            Address a = it.next();
            Symbol[] syms = currentProgram.getSymbolTable().getSymbols(a);
            Symbol s = (syms != null && syms.length > 0) ? syms[0] : null;
            String name = (s != null) ? s.getName() : "?";
            if (!first) pw.println(",");
            first = false;
            pw.print("  {\"name\": \"" + jsonEscape(name) + "\", " +
                     "\"addr\": \"" + a.toString() + "\"}");
            count++;
        }
        pw.println("\n]");
        pw.close();
        println("[*] Exports exported: " + count + " -> " + path);
    }

    // ---------------- 反编译 ----------------
    private void exportDecompiled() throws Exception {
        DecompInterface decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        opts.grabFromProgram(currentProgram);
        decomp.setOptions(opts);
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(true);
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(currentProgram)) {
            println("[!] Decompiler failed to open program");
            return;
        }

        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator it = fm.getFunctions(true);
        int count = 0;
        int errors = 0;
        long startTime = System.currentTimeMillis();

        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            String addr = f.getEntryPoint().toString();
            // 文件名: sub_<addr>.c, 但替换特殊字符
            String safeName = "func_" + addr.replaceAll("[^a-zA-Z0-9]", "_");
            String fname = safeName + "_" + sanitize(f.getName()) + ".c";

            try {
                DecompileResults res = decomp.decompileFunction(f, 60, monitor);
                if (res != null && res.decompileCompleted()) {
                    String code = res.getDecompiledFunction().getC();
                    if (code == null) code = "// decompilation returned null\n";
                    try (PrintWriter pw = new PrintWriter(new FileWriter(
                            outDir + "/05_decompiled/" + fname))) {
                        pw.println("// Function: " + f.getName());
                        pw.println("// Entry:    " + addr);
                        pw.println("// Size:     " + f.getBody().getNumAddresses() + " bytes");
                        pw.println("// Conv:     " + f.getCallingConventionName());
                        pw.println("// Signature: " + f.getSignature().getPrototypeString());
                        pw.println("// Decompiled by Ghidra 12.1.2");
                        pw.println();
                        pw.print(code);
                    }
                } else {
                    errors++;
                    try (PrintWriter pw = new PrintWriter(new FileWriter(
                            outDir + "/05_decompiled/" + fname))) {
                        pw.println("// Function: " + f.getName());
                        pw.println("// Entry:    " + addr);
                        pw.println("// FAILED TO DECOMPILE");
                        if (res != null) {
                            pw.println("// Error: " + res.getErrorMessage());
                        }
                    }
                }
            } catch (Exception ex) {
                errors++;
            }
            count++;
            if (count % 500 == 0) {
                long elapsed = (System.currentTimeMillis() - startTime) / 1000;
                println("  decompiled: " + count + " (" + elapsed + "s, " + errors + " errors)");
            }
        }
        decomp.dispose();
        println("[*] Decompiled: " + count + " (" + errors + " errors)");
    }

    // ---------------- 反汇编 ----------------
    private void exportDisassembly() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator it = fm.getFunctions(true);
        int count = 0;

        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            String addr = f.getEntryPoint().toString();
            String safeName = "func_" + addr.replaceAll("[^a-zA-Z0-9]", "_");
            String fname = safeName + "_" + sanitize(f.getName()) + ".asm";

            try (PrintWriter pw = new PrintWriter(new FileWriter(
                    outDir + "/06_disasm/" + fname))) {
                pw.println("; Function: " + f.getName());
                pw.println("; Entry:    " + addr);
                pw.println("; Size:     " + f.getBody().getNumAddresses() + " bytes");
                pw.println();
                InstructionIterator ii = currentProgram.getListing().getInstructions(f.getBody(), true);
                while (ii.hasNext()) {
                    Instruction inst = ii.next();
                    pw.println(inst.getAddress() + "  " + inst.toString());
                }
            }
            count++;
            if (count % 1000 == 0) println("  disasm: " + count);
        }
        println("[*] Disassembly exported: " + count);
    }

    // ---------------- 交叉引用 ----------------
    private void exportXrefs() throws Exception {
        String path = outDir + "/07_xrefs.json";
        PrintWriter pw = new PrintWriter(new FileWriter(path));
        pw.println("[");

        ReferenceManager rm = currentProgram.getReferenceManager();
        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator it = fm.getFunctions(true);
        boolean first = true;
        int count = 0;

        while (it.hasNext() && !monitor.isCancelled()) {
            Function f = it.next();
            String fAddr = f.getEntryPoint().toString();
            // 谁调用了我 (refs to)
            java.util.Iterator<Reference> refsTo = rm.getReferencesTo(f.getEntryPoint());
            while (refsTo.hasNext()) {
                Reference r = refsTo.next();
                if (!first) pw.println(",");
                first = false;
                pw.print("  {\"target\": \"" + fAddr + "\", " +
                         "\"target_name\": \"" + jsonEscape(f.getName()) + "\", " +
                         "\"from\": \"" + r.getFromAddress().toString() + "\", " +
                         "\"type\": \"" + r.getReferenceType().toString() + "\"}");
                count++;
            }
        }
        pw.println("\n]");
        pw.close();
        println("[*] Xrefs exported: " + count + " -> " + path);
    }

    // ---------------- 内存块 ----------------
    private void exportMemoryBlocks() throws Exception {
        String path = outDir + "/08_mem_blocks.json";
        PrintWriter pw = new PrintWriter(new FileWriter(path));
        pw.println("[");

        MemoryBlock[] blocks = currentProgram.getMemory().getBlocks();
        boolean first = true;
        for (MemoryBlock b : blocks) {
            if (!first) pw.println(",");
            first = false;
            pw.print("  {\"name\": \"" + b.getName() + "\", " +
                     "\"start\": \"" + b.getStart().toString() + "\", " +
                     "\"end\": \"" + b.getEnd().toString() + "\", " +
                     "\"size\": " + b.getSize() + ", " +
                     "\"perms\": \"" + (b.isRead() ? "R" : "-") + (b.isWrite() ? "W" : "-") + (b.isExecute() ? "X" : "-") + "\", " +
                     "\"type\": \"" + b.getType().toString() + "\"}");
        }
        pw.println("\n]");
        pw.close();
        println("[*] Memory blocks exported: " + blocks.length);
    }

    // ---------------- 摘要 ----------------
    private void exportSummary() throws Exception {
        String path = outDir + "/09_summary.json";
        PrintWriter pw = new PrintWriter(new FileWriter(path));
        FunctionManager fm = currentProgram.getFunctionManager();

        long totalFuncs = fm.getFunctionCount();
        long totalInstructions = currentProgram.getListing().getNumInstructions();
        long totalDefinedData = currentProgram.getListing().getNumDefinedData();

        pw.println("{");
        pw.println("  \"program\": \"" + jsonEscape(currentProgram.getName()) + "\",");
        pw.println("  \"language\": \"" + currentProgram.getLanguageID() + "\",");
        pw.println("  \"compiler\": \"" + currentProgram.getCompilerSpec().getCompilerSpecID() + "\",");
        pw.println("  \"image_base\": \"" + currentProgram.getImageBase().toString() + "\",");
        pw.println("  \"functions\": " + totalFuncs + ",");
        pw.println("  \"instructions\": " + totalInstructions + ",");
        pw.println("  \"defined_data\": " + totalDefinedData + ",");
        pw.println("  \"memory_blocks\": " + currentProgram.getMemory().getBlocks().length + ",");
        pw.println("  \"export_tool\": \"Ghidra 12.1.2\",");
        pw.println("  \"export_time\": \"" + new Date().toString() + "\"");
        pw.println("}");
        pw.close();
        println("[*] Summary -> " + path);
    }

    // ---------------- 工具 ----------------
    private static String jsonEscape(String s) {
        if (s == null) return "";
        StringBuilder sb = new StringBuilder();
        for (char c : s.toCharArray()) {
            switch (c) {
                case '"':  sb.append("\\\""); break;
                case '\\': sb.append("\\\\"); break;
                case '\n': sb.append("\\n");  break;
                case '\r': sb.append("\\r");  break;
                case '\t': sb.append("\\t");  break;
                default:
                    if (c < 0x20) sb.append(String.format("\\u%04x", (int) c));
                    else sb.append(c);
            }
        }
        return sb.toString();
    }

    private static String sanitize(String s) {
        if (s == null) return "noname";
        return s.replaceAll("[^a-zA-Z0-9_]", "_");
    }
}
