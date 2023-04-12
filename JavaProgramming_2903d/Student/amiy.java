import java.io.*; 
public class amiy
{
    public static void  main(String[] args) throws Exception
    {
    BufferedReader user = new BufferedReader(new InputStreamReader(System.in));
    int a[]={5,7,8,5,4,7,8,9,32,22,9,7,65,4,5,75,43,33,67};
    System.out.println("Enter the index number= ");
    int j = Integer.parseInt(user.readLine());
    System.out.println(a[j]);
    }
}
