import java.util.*;

public class NextRound {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int count = 0;
        int a[] = new int[n];
        for (int i = 0; i < a.length; i++) {
            a[i] = s.nextInt();
        }
        int check = a[k - 1];
        for (int i = 0; i < n; i++) {
            if (a[i] >= check && (check != 0 || a[i] != 0)) {
                count++;
            } else if (a[i] < check) {
                break;
            }
        }
        System.out.println(count);
    }
}