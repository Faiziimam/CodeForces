import java.util.Scanner;

public class PetyaAndStrings {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String fir = s.next();
        String second = s.next();
        String first = fir.toLowerCase();
        String sec = second.toLowerCase();

        if (first.compareTo(sec) == 0) {
            System.out.println("0");
        }
        if (first.compareTo(sec) > 0) {
            System.out.println("1");
        }
        if (first.compareTo(sec) < 0) {
            System.out.println("-1");
        }

    }
}