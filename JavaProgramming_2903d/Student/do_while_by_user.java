import java.util.*;
public class do_while_by_user
{
 public static void main(String args[])
 {
    Scanner user = new Scanner (System.in);
    System.out.print("the number is =");
    int i = user.nextInt();
    do
    {
        System.out.println(i);
        i++;
        
    }
    while(i==7);
 }
}