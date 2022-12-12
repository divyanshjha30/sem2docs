//Enter 3 numbers from the user & make a function to print their average.

import java.util.Scanner;

public class q1 {
    public static void main(String[] args) {
        System.out.print("Enter num1: ");
        Scanner sc = new Scanner(System.in);
        Long num1 = sc.nextLong();
        System.out.print("Enter num2: ");
        Scanner sc2 = new Scanner(System.in);
        Long num2 = sc2.nextLong();
        System.out.print("Enter num3: ");
        Scanner sc3 = new Scanner(System.in);
        Long num3 = sc3.nextLong();
        Long average = averageFunction(num1, num2, num3);
        System.out.println("The average of "+num1+", "+num2+", "+num3+" = "+average);
    }
    public static Long averageFunction(Long x, Long y, Long z){
        return (x+y+z)/3;
    }
}
