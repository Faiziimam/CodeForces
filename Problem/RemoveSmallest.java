import java.util.Arrays;
import java.util.Scanner;

public class RemoveSmallest {
    public static Scanner s = new Scanner(System.in);

    public static void solve() {
        int n = s.nextInt();
        int a[] = new int[n];
        for (int i = 0; i < a.length; i++) {
            a[i] = s.nextInt();
        }
        Arrays.sort(a);
        boolean ok = true;
        for (int i = 1; i < a.length; i++) {
            ok &= (a[i] - a[i - 1] <= 1);

        }
        if (ok) {
            System.out.println("Yes");
        } else
            System.out.println("No");
    }

    public static void main(String[] args) {
        RemoveSmallest obj = new RemoveSmallest();

        int t = s.nextInt();
        for (int i = 0; i < t; i++) {
            obj.solve();
        }
    }
}