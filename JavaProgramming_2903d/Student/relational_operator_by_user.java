import java.util.*;
public class relational_operator_by_user
{
    public static void main(String[] args)
    {
        Scanner user = new Scanner(System.in);
        System.out.print("enter the number =" );
        int a = user.nextInt();
        System.out.print("enter the number ="  );
        int b = user.nextInt();
        int  c = a + b ;
        System.out.println(a + "+" +b+ "=" +c);
        System.out.print("enter the number ="  );
        int e = user.nextInt();
        System.out.print("enter the number ="  );
        int f = user.nextInt();
        int d = e + f;
        System.out.println(e + "+" +f+ "=" +d);
        System.out.println("the number is equal to =" +(c==d));
        System.out.println("the number is not equal to =" +(c!=d));
        System.out.println("the number is less then equal to =" +(c<=d));
        System.out.println("the number is greater then equal to =" +(c>=d));
        System.out.println("the number is greater then =" +(c>d));
        System.out.println("the number is lessthen =" +(c<d));




    }
}