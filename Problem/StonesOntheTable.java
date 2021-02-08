import java.util.*;
public class StonesOntheTable {
    public static void main(String[] args) {
      Scanner s=new Scanner(System.in);
        
      int n=s.nextInt();
      String str=s.next();
      int count=0;
      for(int i=0;i<n;i++)
      {
          if(str.charAt(i) == str.charAt(i+1))
          {
           count++;
          }
      }
      System.out.println(count);
    }
}
