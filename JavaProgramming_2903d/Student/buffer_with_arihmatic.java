import java.io.*;
public class buffer_with_arihmatic {
    public static void main(String[] args)throws Exception {
        int a,b,c,d,f,e,i,sum=0 ;
        BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
         System.out.print("Enter the number1= ");
         a = Integer.parseInt(user.readLine());
         System.out.print("Enter the number2= ");
         b = Integer.parseInt(user.readLine());
         c = a + b;
         System.out.println(a+ "+" +b+ "=" +c);
         System.out.print("Enter the number3= ");
         d = Integer.parseInt(user.readLine());
         System.out.print("Enter the number4= ");
         e = Integer.parseInt(user.readLine());
         f = d + e;
         System.out.println(d+ "+" +e+ "=" +f);
         if (c==f)
         {
                for(i=1; i<=6; i++)
            {
                sum+=i;
                System.out.println(i+ "+" + "=" +sum );
            }
         }
        else
            {
            System.out.print("This is not equal");
            }
            }
         }
    

