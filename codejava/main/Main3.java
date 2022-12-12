package main;
import java.util.Scanner;

public class Main3 {
    public static void main(String[] args) {
        System.out.print("Enter num1: ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.print("Enter num2: ");
        Scanner sc2 = new Scanner(System.in);
        int b = sc2.nextInt();
        int sum = a+b;
        System.out.println(sum); 
    }
}
