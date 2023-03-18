import java.io.*;
public class global {
    public static void main(String[] args) throws Exception
    {
      BufferedReader user =new BufferedReader(new InputStreamReader(System.in));
      intex d = new intex();
      System.out.print("enter the number a=");
      int a = Integer.parseInt(user.readLine());
      System.out.print("enter the number b=");
      int b = Integer.parseInt(user.readLine());
      d.clear(a,b);
      d.cancel();

    }
}
class intex
{
    int c,a,b;

    void clear(int num1,int num2)
    {
        a=num1;
        b=num2;
        // c = a + b;
    }
    void cancel()
    {
        System.out.println("c="+a);
    }
}
