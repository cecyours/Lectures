import java.io.*;
public class skybags
{
    public static void main(String[] args)throws Exception
    {
        BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
        String a[] = {"aditya","amit","vaibahv","nikhil","gopal","shubham","kiran","sumit","kartik"};
        System.out.print("enter the number:");
        int i = Integer.parseInt(user.readLine());
        System.out.println(a[i]);
    }
}