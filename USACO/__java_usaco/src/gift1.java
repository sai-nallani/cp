/*
ID: sai.s.n1
LANG: JAVA
TASK: gift1
*/
import java.util.*;
import java.io.*;

public class gift1 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new FileReader("gift1.in"));
        PrintWriter pw = new PrintWriter(new BufferedWriter(new FileWriter("gift1.out")));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int NP = Integer.parseInt(st.nextToken()); // Number of people
        HashMap<String, Integer> people = new HashMap<String, Integer>(NP); // Hashmap of accounts
        String name;
        ArrayList<String> names = new ArrayList<String>(NP);
        for (int i = 0; i < NP; i++) {
            name = br.readLine();
            names.add(name);
            people.put(name, 0);
        } // Update hashmap with people

        String giver, getter;
        int money, numOfGetters;

        for (int i = 0; i < NP; i++) {
            giver = br.readLine();
            st = new StringTokenizer(br.readLine());
            money = Integer.parseInt(st.nextToken());
            numOfGetters = Integer.parseInt(st.nextToken());
            if (numOfGetters == 0) {
                continue;
            }
            people.replace(giver, people.get(giver) + (money % numOfGetters) - money);

            for (int j = 0; j < numOfGetters; j++) {
                getter = br.readLine();
                people.replace(getter, people.get(getter) + Math.floorDiv(money, numOfGetters));

            }
        }

        System.out.println(people);
        for (String key: names) {
            pw.println(key + " " + people.get(key));
        }
        br.close();
        pw.close();
    }
}
