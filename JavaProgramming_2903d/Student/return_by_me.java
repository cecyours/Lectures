import java.io.*;
public class return_by_me {
    public static void main(String[]args)throws Exception
       {
        BufferedReader user =new BufferedReader(new InputStreamReader(System.in));
        tell pub = new tell();
        System.out.print("value of x=");
        int x = Integer.parseInt(user.readLine());
        System.out.print("value of y=");
        int y = Integer.parseInt(user.readLine());
        int result = pub.k10(x,y);
        System.out.println(result);
       }
}
class tell
{
    public int k10(int num1,int num2)
    {
        int a= num1 + num2;
        return a;
    }
}
