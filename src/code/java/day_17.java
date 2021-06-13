import java.util.Scanner;

class Calculator {

    public int power(int n, int p) throws Exception {
        if (n < 0 || p < 0) throw new Exception("n and p should be non-negative");
        return (int) Math.pow(n, p);
    }
}

class Solution {

    public static void main(String[] argh) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while (T-->0) {
            int n = sc.nextInt();
            int p = sc.nextInt();
            Calculator myCalculator = new Calculator();
            try {
                int ans = 
                System.out.println(myCalculator.power(n, p););

            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
    sc.close();
    }
}
