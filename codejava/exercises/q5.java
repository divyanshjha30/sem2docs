//Write a function that takes in age as input and returns if that person is eligible to vote or not. A person of age > 18 is eligible to vote.
import java.util.*;
public class q5 {
    public static void main(String[] args) {
        System.out.print("Enter age: ");
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();
        boolean vote = voteOrNot(age);
        if (vote) {
            System.out.println("You're "+age+". You can vote!");
        } else {
            System.out.println("You're "+age+". You can't vote xD");
        }
    }
    public static boolean voteOrNot(int age){
        if (age>=18) {
            return true;
        } else {
            return false;
        } 
    }
}
