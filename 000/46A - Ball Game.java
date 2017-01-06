import java.util.Scanner;
 
public class Main{
   public static void main(String[] args) {
      int n = new Scanner(System.in).nextInt();
      int h = 1;
      String str = "";
      for (int i = 1; i < n; i ++) {
         h = (h + i) % n;
         if (h == 0) h = n;
         str += Integer.toString(h) + " ";
      }
      System.out.println(str.substring(0, str.length() - 1));
   }
}