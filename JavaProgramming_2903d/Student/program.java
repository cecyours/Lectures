import java.io.*;
public class program {
    public static void main(String[] args)throws Exception
    {
        BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Gender=");
        String a = user.readLine();
        if(a.equals("male"))
        {
            System.out.println("PANTS");
            System.out.println("SHRIT");
            System.out.println("T-SHRIT");
            System.out.println("TROUSER");
            System.out.println("SHOES");
            System.out.println("WATCH");
        }
        else if (a.equals("female"))
         {
            System.out.println("SUIT");
            System.out.println("RING");
            System.out.println("BANGEL");
            System.out.println("EARING");
            System.out.println("SLEEPER");
        }
    }
}
