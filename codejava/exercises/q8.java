//Two numbers are entered by the user, x and n. Write a function to find the value of one number raised to the power of another i.e. xn.

import java.util.*;
public class q8 {
    public static void main(String[] args) {
        System.out.print("Enter base num: ");
        Scanner sc = new Scanner(System.in);
        Long num1 = sc.nextLong();
        System.out.print("Enter power: ");
        Long num2 = sc.nextLong();
        Long power = powerFunction(num1,num2);
        System.out.println("The answer is: "+power);
    }
    public static Long powerFunction(Long num1,Long num2){
        Long power = num1;
        for (int i = 1; i < num2; i++) {
            power *= num1;          
        }
        return power;
    }
}
