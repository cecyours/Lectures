import java.util.*;
public class assianment_operator_by_user
{
    public static void main(String[] args)
    {
        Scanner user = new Scanner(System.in);
        System.out.println("enter the number:= ");
        int a = user.nextInt();
        System.out.println("enter the number:=");
        int b = user.nextInt();
         a += b;
        System.out.println("the number is =" +a);

    }
}