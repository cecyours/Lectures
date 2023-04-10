import java.util.*;
public class break_statement_by_user {
    public static void main(String[] args)
   {
       Scanner user = new Scanner(System.in);
       System.out.print("enter the number:");
       int a = user.nextInt();
       System.out.print("the number is break:");
    int b = user.nextInt();
    for(int i=0;i<=a;i++)
    {
        if (i==b)
        {
            break;
        }
        System.out.print(i);
        System.out.println(" ");
    }
} 


}
