import java.util.Scanner;

interface AdvancedArithmetic {
    int divisorSum(int n);
}

class Calculator implements AdvancedArithmetic {
    @Override
    public int divisorSum(int n) {
    int ans = 0;
    for(int i=1; i<=n; i++)
    if (n%i==0) ans += i;    
    return ans;
    }
}

class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        AdvancedArithmetic myCalculator = new Calculator();
        int sum = myCalculator.divisorSum(n);
        System.out.println("I implemented: " + myCalculator.getClass().getInterfaces()[0].getName() + "\n" + sum);
        scan.close();
    }
}