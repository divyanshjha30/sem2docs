import java.util.Scanner;

public class Functions {
    public static void printMyName(String x){
        System.out.println("Hiii!! "+x+" I Love Youuuu!!!");
        return;
    }
    public static void main(String[] args) {
        System.out.print("Enter your name: ");
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();
        printMyName(name);
    }
}
