import java.util.*;

public class Translation {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        String str2 = s.next();

        StringBuilder sbr = new StringBuilder();
        StringBuilder sb2 = new StringBuilder();

        sbr.append(str);
        sb2.append(str2);
        sbr.reverse();
        int i = 0;
        char s1 = sbr.charAt(i);
        char s2 = sbr.charAt(i);

        for (i = 0; i < sbr.length(); i++) {
            if (s1 == s2) {
                System.out.println("Yes");   
            } else
                System.out.println("No");
        }

    }
}
