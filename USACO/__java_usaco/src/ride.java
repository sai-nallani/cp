/*
ID: sai.s.n1
LANG: JAVA
TASK: ride
*/
import java.util.*;
import java.io.*;

class ride {
    public static int whichNum(char c) {
        char[] alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".toCharArray();
        for (int i = 0; i < alphabet.length; i++) {
            if (alphabet[i] == c) {
                return i+1;
            }
        }
        return -1;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("ride.in"));
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("ride.out")));

        StringTokenizer st = new StringTokenizer(br.readLine());
        char[] comets = st.nextToken().toUpperCase().toCharArray();
        st = new StringTokenizer(br.readLine());
        char[] group = st.nextToken().toUpperCase().toCharArray();
        int cometsCode = 1;
        int groupsCode = 1;

        for (char c: comets) {
            cometsCode *= whichNum(c);
        }
        for (char c: group) {
            groupsCode *= whichNum(c);
        }
        System.out.println(cometsCode);
        System.out.println(groupsCode);
        if ((cometsCode % 47) == (groupsCode % 47)) {
            out.println("GO");
        } else {
            out.println("STAY");
        }
        br.close();
        out.close();
    }
}
