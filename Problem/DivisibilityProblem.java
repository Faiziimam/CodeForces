import java.util.Scanner;

public class DivisibilityProblem {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        int a, b;
        int i = 0;
        while (t > i) {
            a = s.nextInt();
            b = s.nextInt();

            if (a % b == 0) {
                System.out.println("0");
            } else {
                System.out.println(b - (a % b));
            }
            i++;
        }
    }
}
