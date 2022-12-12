import java.util.Scanner;

public class Factorial {
    
    public static void factorialResult(Long x) {
        Long y = x;
        if (x < 0) {
            System.out.println("Negative numbers can't be calculated, you donkey :/");
            return;
        } else if (x == 0) {
            System.out.println("The factorial of 0 is 1");
            return;
        } else if (x == 1) {
            System.out.println("The factorial of 1 is 1");
            return;
        } else {
            for (Long i = x-1; i > 0; i--) {
                if (i == x-1) {
                    System.out.print(x);
                } else {
                    System.out.print(y);
                }
                y *= i;
                System.out.print(" * "+i+" = "+y+"\n");
            }
            System.out.println("The factorial of "+x+" is: "+y);
        }
        return;
    }
    public static void main(String[] args) {
        System.out.print("Enter a Num: ");
        Scanner sc = new Scanner(System.in);
        Long num = sc.nextLong();
        factorialResult(num);
    }
}
