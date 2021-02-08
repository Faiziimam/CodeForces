import java.util.*;

public class WordCapitalization {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str = s.next();

        System.out.println(str.toUpperCase().charAt(0) + str.substring(1));
    }
}
