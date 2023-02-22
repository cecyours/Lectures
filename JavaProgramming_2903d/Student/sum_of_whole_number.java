import java.util.*;
public class sum_of_whole_number
{
    public static void main(String args[])
    {
        Scanner user = new Scanner(System.in);
        System.out.print("a=" );  
        int a =  user.nextInt();
        int sum = 0;
        do
    {
        sum+=a;
        a++;
        System.out.println("the number is " +sum);
        System.out.println(sum+ "+" + "=" +a);
        
    }
    while(a<=10);
     }
}
    
