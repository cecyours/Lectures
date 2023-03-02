import java.util.*;
public class all_operators {
        public static void main(String[] args)
{
    int sum=0;
    Scanner user =new Scanner(System.in);
    System.out.print("enter value of a= ");
    int a = user.nextInt();
    System.out.print("enter value of b= ");
    int b = user.nextInt();
    int c = a * b;
    System.out.println(a+ "*" +b+ "=" +c);
    System.out.print("enter value of d= ");
    int d = user.nextInt();
    System.out.print("enter value of e= ");
    int e = user.nextInt();
    int f = d * e;
    System.out.println(d+ "*" +e+ "=" +f);
    if (c==f)
    {
        for(int i=1; i<=20; i++)
        {
            sum+=i;
            System.out.println("sum of number=" +sum );
        }
    }
    else{

        System.out.print("This is not equal");
    }
}
}
