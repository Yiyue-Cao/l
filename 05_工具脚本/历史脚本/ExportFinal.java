import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.io.*;
import java.nio.file.*;
public class ExportFinal extends GhidraScript {
 public void run() throws Exception {
  String[] a=getScriptArgs(); File out=new File(a[0]);out.mkdirs();
  DecompInterface dec=new DecompInterface();dec.openProgram(currentProgram);
  PrintWriter idx=new PrintWriter(new File(out,"index.tsv"));
  long base=currentProgram.getImageBase().getOffset();
  for(String line:Files.readAllLines(Paths.get(a[1]))) {
   String[] parts=line.split("\\t",2);long off=Long.parseLong(parts[0],16);
   Address adr=toAddr(base+off);Function f=getFunctionAt(adr);
   if(f==null) { disassemble(adr);f=createFunction(adr,null); }
   if(f==null){idx.println(parts[0]+"\tMISSING\t"+parts[1]);continue;}
   DecompileResults r=dec.decompileFunction(f,300,monitor);
   String filename=parts[0]+".c";
   try(PrintWriter w=new PrintWriter(new File(out,filename))){
    w.println("// ELF address 0x"+parts[0]+"; "+parts[1]);
    if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());else w.println("// FAILED "+r.getErrorMessage());
   }
   idx.println(parts[0]+"\t"+(r.decompileCompleted()?"OK":"FAILED")+"\t"+parts[1]);idx.flush();
  }
  idx.close();dec.dispose();
 }
}
