//Write a function that calculates the Greatest Common Divisor of 2 numbers. 

import java.util.*;

public class q9 {
    public static void main(String[] args) {
        System.out.print("Enter num1: ");
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        System.out.print("Enter num2: ");
        Scanner sc2 = new Scanner(System.in);
        int num2 = sc2.nextInt();
        int hcf = gcd(num1, num2);
        System.out.println(hcf);

    }
    public static int gcd(int a, int b){
        if (a == 0)
            return b;
         
        return gcd(b%a, a);
    }
}
