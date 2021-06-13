import java.util.*;
import java.util.Scanner;

public class Solution {

    Stack<Character> s = new Stack<Character>();
    Queue<Character> q = new LinkedList<Character>();
    void pushCharacter(char ch)
        {
        s.push(ch);
    }
     void enqueueCharacter(char ch){
        q.add(ch);
     }
    char popCharacter() {
        return s.pop();
    }

    char dequeueCharacter()
        {
        return q.remove();
        }


    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String input = scan.nextLine();
        scan.close();
        char[] s = input.toCharArray();
        Solution p = new Solution();

        for (char c : s) {
            p.pushCharacter(c);
            p.enqueueCharacter(c);
        }

        boolean isPalindrome = true;
        for (int i = 0; i < s.length / 2; i++) {
            if (p.popCharacter() != p.dequeueCharacter()) {
                isPalindrome = false;
                break;
            }
        }
    if (isPalindrome) System.out.println("The word, " + input + ", is a palindrome.");
    else System.out.println("The word, " + input + ", is not a palindrome.");    
    
    }
}