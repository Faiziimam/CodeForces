import java.util.*;

public class Word {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        int upper = 0;
        int lower = 0;
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch >= 'A' && ch <= 'Z') {
                upper++;
            } else {
                lower++;
            }

        }
        if (upper == lower) {
            System.out.println(str.toLowerCase());
        } else if (upper > lower) {
            System.out.println(str.toUpperCase());
        } else {
            System.out.println(str.toLowerCase());
        }

    }
}
