import java.util.ArrayList;
import java.util.List;
import java.util.*;

public class BoyOrGirl {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String str=s.next();

        List<String> v = new ArrayList<String>();
        for(int j=0; j<str.length(); j++) {
        if(!v.contains("" + str.charAt(j)))
            v.add("" + str.charAt(j));
        }
        if(v.size()%2==0)
        {
            System.out.println("CHAT WITH HER!");
        }
        else
        {
            System.out.println("IGNORE HIM!");
        }
    }
}
