package patterns;
public class Patterns {
    public static void main(String[] args) {
        for (int i = 1; i < 5; i++) {
            for (int j = 1; j < 6; j++) {
                if (i==2 || i==3) {
                    if (j==2 || j==3 || j==4) {
                        System.out.print(" ");
                    } else {
                        System.out.print("*");
                    }
                } else {
                    System.out.print("*");
                }

            }
            System.out.print("\n");
        }
    }
}
