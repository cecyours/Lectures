
import java.io.*;

class MyDataWithBufferedReader{
    
    public static void main(String ds[]) throws IOException
    {
        InputStreamReader is = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(is);

            System.out.print("Enter a name : ");
            String name = br.readLine();


            System.out.print("Enter a rollNo : ");
            int rollNo = Integer.parseInt(br.readLine());

 
            System.out.println("value : "+rollNo+"  : "+name+" hii");

    }
}