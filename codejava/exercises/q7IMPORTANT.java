//Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.

import java.util.*;
public class q7IMPORTANT  {
    public static void main(String[] args) {
        Long negative = 0l, positive = 0l, zeroes = 0l;
        char choice;
        
        Scanner sc = new Scanner(System.in);

        do {
            System.out.print("Enter num: ");
            Long num1 = sc.nextLong();
            if (num1<0) {
                negative++;
            } else if (num1>0) {
                positive++;
            } else {
                zeroes++;
            }
            System.out.println("Do you wish to continue? (y/n)");
            choice = sc.next().charAt(0);
        } while (choice == 'y' || choice == 'Y');
        System.out.println("Count of Positive nos: "+positive+"\n"+"Count of Negative nos: "+negative+"\n"+"Count of zeroes: "+zeroes);
    }
}
