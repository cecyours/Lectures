import java.io.*;
public class string_by_user {
    public static void main(String[] args)throws Exception
    {
        BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("x=");
        String x = user.readLine();
       // System.out.println("string is =" +x.length() );
      //  System.out.println("string is =" +x.toLowerCase() );
     //   System.out.println("string is =" +x.toUpperCase() );
       // System.out.println("string is =" +x.trim() );
       // System.out.println("string is =" +x.substring(6));   
     //   System.out.println("string is=" +x.substring(5,8));
          //System.out.println("string is=" +x.replace('a','c'));
         // System.out.println("string is=" +x.startsWith("aditya"));
          //System.out.println("string is=" +x.endsWith("amit"));
          //System.out.println("string is=" +x.charAt(3));
          //System.out.println("string is=" +x.indexOf("my"));
          //System.out.println("string is=" +x.indexOf("my",3));
          System.out.println("string is=" +x.lastIndexOf("my"));
          

        }
}