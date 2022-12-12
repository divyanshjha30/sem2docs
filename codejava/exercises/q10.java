//Write a program to print Fibonacci series of n terms where n is input by user :
// 0 1 1 2 3 5 8 13 21 ..... 
// In the Fibonacci series, a number is the sum of the previous 2 numbers that came before it.

import java.util.*;
public class q10 {
    public static void main(String[] args) {
        System.out.print("Enter num: ");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.print("The fibonacci series is: ");
        fibonacciSequence(num);
    }
    public static void fibonacciSequence(int num){
        int f1 = 0, f2 = 1;
        if (num < 1)
            return;
        System.out.print("( " + f1 + " ");
        for (int i = 1; i < num; i++) {
            System.out.print(f2 + " ");
            int next = f1 + f2;
            f1 = f2;
            f2 = next;
        }
        System.out.print(")");
    }
}
