import java.io.*;
public class user1 {
public static void main(String[] args) throws Exception
{
     BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
   System.out.print("a=");
   int a =Integer.parseInt(user.readLine());
   System.out.print("b=");
   int b =Integer.parseInt(user.readLine());
    kal k= new kal(a,b);
     
}
}
class kal
{

    
    kal(int a,int b)
    {
    int c = a*b;
    System.out.println("c=" +c);
    }
}
