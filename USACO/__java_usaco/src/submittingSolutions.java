/*
ID: sai.s.n1
LANG: JAVA
TASK: test
*/
import java.io.*;
import java.util.*;

public class submittingSolutions {
    public static void main (String [] args) throws IOException {
        // Use BufferedReader rather than RandomAccessFile; it's much faster
        BufferedReader f = new BufferedReader(new InputStreamReader(System.in));
        // input file name goes above
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("test.out")));
        // Use StringTokenizer vs. readLine/split -- lots faster
        StringTokenizer st = new StringTokenizer(f.readLine());
        int i1 = Integer.parseInt(st.nextToken());    // first integer
        int i2 = Integer.parseInt(st.nextToken()); 	   // second integer
        out.println(i1+i2);
        f.close();				                       // output result
        out.close();                                  // close the output file
    }
}