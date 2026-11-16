import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import java.io.*;
import ghidra.program.model.pcode.JumpTable;
import java.util.*;
import java.nio.file.*;
public class ExportBounded extends GhidraScript {
 public void run() throws Exception {
  String[] a=getScriptArgs(); File out=new File(a[0]);out.mkdirs();
  long ib=currentProgram.getImageBase().getOffset();
  Path sizes=Paths.get(a[1]).getParent().resolve("sizes.tsv");
  for(String row:Files.readAllLines(sizes)) {
   String[] r=row.split("\\t");long start=Long.parseLong(r[0],16),size=Long.parseLong(r[1],16);
   Address adr=toAddr(ib+start);Function f=getFunctionAt(adr);
   Function old=getFunctionContaining(adr);
   if(old!=null && !old.getEntryPoint().equals(adr))removeFunction(old);
   ArrayList<Address> remove=new ArrayList<>();
   FunctionIterator it=currentProgram.getFunctionManager().getFunctions(toAddr(ib+start+1),true);
   while(it.hasNext()){Function x=it.next();if(x.getEntryPoint().getOffset()>=ib+start+size)break;remove.add(x.getEntryPoint());}
   for(Address x:remove)currentProgram.getFunctionManager().removeFunction(x);
   disassemble(adr);if(f==null)f=createFunction(adr,null);
   if(f!=null)f.setBody(new AddressSet(adr,toAddr(ib+start+size-1)));
  }
  Path repairs=Paths.get(a[1]).getParent().resolve("repairs.tsv");
  if(Files.exists(repairs)) for(String row:Files.readAllLines(repairs)) {
   if(row.trim().isEmpty())continue;
   String[] r=row.split("\\t");long start=Long.parseLong(r[0],16),size=Long.parseLong(r[1],16),jump=Long.parseLong(r[2],16),table=Long.parseLong(r[3],16);int n=Integer.parseInt(r[4]);
   Function f=getFunctionAt(toAddr(ib+start));if(f==null)continue;
   ArrayList<Address> remove=new ArrayList<>();
   FunctionIterator it=currentProgram.getFunctionManager().getFunctions(toAddr(ib+start+1),true);
   while(it.hasNext()){Function x=it.next();if(x.getEntryPoint().getOffset()>=ib+start+size)break;remove.add(x.getEntryPoint());}
   for(Address x:remove)currentProgram.getFunctionManager().removeFunction(x);
   ArrayList<Address> dest=new ArrayList<>();
   for(int i=0;i<n;i++){Address t=toAddr(ib+table+currentProgram.getMemory().getInt(toAddr(ib+table+4*i)));dest.add(t);disassemble(t);}
   f.setBody(new AddressSet(toAddr(ib+start),toAddr(ib+start+size-1)));
   new JumpTable(toAddr(ib+jump),dest,true).writeOverride(f);
   println("Repaired "+row);
  }
  DecompInterface dec=new DecompInterface();dec.openProgram(currentProgram);
  PrintWriter idx=new PrintWriter(new File(out,"index.tsv"));
  long base=currentProgram.getImageBase().getOffset();
  for(String line:Files.readAllLines(Paths.get(a[1]))) {
   String[] parts=line.split("\\t",2);long off=Long.parseLong(parts[0],16);
   Address adr=toAddr(base+off);Function f=getFunctionAt(adr);
   if(f==null) { disassemble(adr);f=createFunction(adr,null); }
   if(f==null){idx.println(parts[0]+"\tMISSING\t"+parts[1]);continue;}
   DecompileResults r=dec.decompileFunction(f,90,monitor);
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
