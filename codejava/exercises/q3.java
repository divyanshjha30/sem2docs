//Write a function which takes in 2 numbers and returns the greater of those two.
import java.util.*;
public class q3 {
    public static void main(String[] args) {
        System.out.print("Enter num1: ");
        Scanner sc = new Scanner(System.in);
        Long num1 = sc.nextLong();
        System.out.print("Enter num2: ");
        Scanner sc2 = new Scanner(System.in);
        Long num2 = sc2.nextLong();
        Long answer = maxNumber(num1, num2);
        if (answer != 0) {
            System.out.println("The greater number is: "+answer);    
        }
        }
    public static Long maxNumber(Long x, Long y){
        Long max = 0l;
        if (x>y) {
            max = x;
        } else if (x<y) {
            max = y;
        } else {
            System.out.println("Numbers are equal");
            return 0l;
        }
        return max;
    }
}
