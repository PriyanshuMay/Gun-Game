import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int d1 = scan.nextInt();
    int m1 = scan.nextInt();
    int y1 = scan.nextInt();
    int d2 = scan.nextInt();
    int m2 = scan.nextInt();
    int y2 = scan.nextInt();
    int ans = 0;
    if (y1 > y2) ans = 10000;
    else if (y1 == y2) {
    if (m1 > m2) ans = 500 * (m1 - m2);
    else if (m1 == m2 &&d1 > d2) ans = 15 * (d1 - d2);      
    }
    System.out.println(ans);
    scan.close(); 
    }
}