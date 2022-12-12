//Write a function to print the sum of all odd numbers from 1 to n.

import java.util.Scanner;
public class q2 {
    public static void main(String[] args) {
        System.out.print("Enter num: ");
        Scanner sc = new Scanner(System.in);
        Long num = sc.nextLong();
        sumOfOddNum(num);
    }
    public static void sumOfOddNum(Long n){
        Long sum = 0l;
        if (n <= 0) {
            System.out.println("Wrong input "+n);            
        } else {
            for (int i = 1; i <= n; i++) {
                if (i%2 != 0) {
                    sum += i;
                    System.out.print(i);
                    if (i!=n-1 && i!=n) {
                        System.out.print(" + ");
                    }
                }
            }
            System.out.print(" = "+sum);
            System.out.println();
        }
        System.out.println("The sum of all odd integers from 1 to "+n+" = "+sum);
    }
}
