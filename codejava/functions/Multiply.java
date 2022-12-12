import java.util.Scanner;

public class Multiply {
    
    public static int calculateProduct(int a, int b){
        return a * b;
    }
    public static void main(String[] args) {
        System.out.print("Enter Number 1: ");
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        System.out.print("Enter Number 2: ");
        Scanner sc2 = new Scanner(System.in);
        int num2 = sc2.nextInt();
        int product = calculateProduct(num1, num2);
        System.out.println("The product of "+num1+" and "+num2+" is: "+product);
    }
}
