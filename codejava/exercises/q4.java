//Write a function that takes in the radius as input and returns the circumference of a circle.


import java.util.*;

public class q4 {
    public static void main(String[] args) {
        System.out.print("Enter radius in cm: ");
        Scanner sc = new Scanner(System.in);
        Double r = sc.nextDouble();
        if(r<0){
           System.out.println("Wrong input (Radius cant be negative, dummy)"); 
        } else { 
        Double circum = circumferenceCalculator(r);
        System.out.println("The circumference is: "+circum);
        }
    }
    public static Double circumferenceCalculator(Double r){
        Double circum = 2*3.14*r;
        return circum;
    }
}
