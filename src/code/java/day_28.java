import java.io.*;
import java.util.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        String regexPattern = "@gmail.com";
        Pattern p = Pattern.compile(regexPattern);
        List<String> list = new ArrayList<String>();
        for(int i = 0; i < N; i++){
            String firstName = in.next();
            Matcher m = p.matcher(in.next());
            if (m.find()) list.add(firstName); 
        }
        in.close();
        Collections.sort(list);
        for (String user : list) {
            System.out.println(user);
        }
    }
}