import java.util.*;
public class arithmatic_operatare_by_user
{
    public static void main(String[] args)
    {
        Scanner user = new Scanner (System.in);
        System.out.print("enter the number=" );
        int a = user.nextInt();
        System.out.print("enter the number=" );
        int b = user.nextInt();
        int c = a + b;
         int d = a * b;
         int e = a - b;
         int f = a / b;
        System.out.println(a + "+" + b + "=" +c);
         System.out.println(a + "*" + b + "=" +d);
         System.out.println(a + "-" + b + "=" +e);
         System.out.println(a + "/" + b + "=" +f);
            
    }
}