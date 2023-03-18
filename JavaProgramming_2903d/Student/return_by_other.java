import java.io.*;
public class return_by_other {
    public static void main(String[] args)throws Exception
    {
        BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
        other oth = new other();
        
        System.out.print("enter the value of a=");
        int a = Integer.parseInt(user.readLine());
        
        System.out.print("enter the value of b=");
        int b = Integer.parseInt(user.readLine());
        
        int result = oth.c1(a, b);
        System.out.println(result);
    }
}
class other
{
    public int c1(int num1,int num2)
    {
        int c = num1 + num2;
        return c; 
    }
}
