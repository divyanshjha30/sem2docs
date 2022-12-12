import java.util.Scanner;

public class Sum {
    public static int calculateSum(int x, int y){
        int sum = x+y;
        return sum;
    }
    public static void main(String[] args) {
        System.out.print("Enter Number 1: ");
        Scanner sc = new Scanner(System.in);
        int num1 = sc.nextInt();
        System.out.print("Enter Number 2: ");
        Scanner sc2 = new Scanner(System.in);
        int num2 = sc2.nextInt();
        int sum2 = calculateSum(num1, num2);
        System.out.println("The sum of "+num1+" and "+num2+" is: "+sum2);
    }
}
