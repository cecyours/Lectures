import java.util.*;
public class continue_statement_by_user {
 public static void main(String[] args)
 {
    Scanner user =new Scanner(System.in);
    System.out.print("enter the number:");
    int a = user.nextInt();
    System.out.print("contnue:");
    int b = user.nextInt();
    for(int i=0;i<=a;i++)
    {
        if (i==b)
        {
            continue;
        }
        System.out.print(i);
        System.out.println(" ");
    }
 }   
}
