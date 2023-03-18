import java.io.*;
public class by_user_constructer{
    public static void main(String [] args)throws Exception
    {
        BufferedReader user =new BufferedReader(new InputStreamReader(System.in));
        System.out.print("a=");
        int a = Integer.parseInt(user.readLine());
        System.out.print("b=");
        int b = Integer.parseInt(user.readLine());
        sys g = new sys(a,b);
    }
}
class sys
{   
    sys(int a , int b)
    {
        int c = a + b;
        System.out.println("C=" +c);      
    }
}