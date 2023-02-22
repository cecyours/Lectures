import java.util.*;
public class sum_of_whole_number
{
    public static void main(String args[])
    {
        Scanner user = new Scanner(System.in);
        System.out.print("the number is=");      
        int a =  user.nextInt();
        int sum = 0;
        do
    {
        a++;
        sum+=a;
        System.out.println("the number is " +sum);
        
    }
    while(a<=10);
     }
}
    
