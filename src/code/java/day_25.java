import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    public static boolean ifPrime(int number){
    if (number == 1) return false;
    for (int i=2; i*i <= number; i++) if (number % i == 0) return false; 
    return true;
}

    public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    int n = scan.nextInt();
    while(n-->0){
        int num = scan.nextInt();
        if (ifPrime(num)) System.out.printf("Prime\n"); 
        else System.out.printf("Not prime\n");
    }  
    scan.close();
    }
}