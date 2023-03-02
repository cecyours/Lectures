import java.io.*;
public class buffer_reader {
    public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter the number= ");
        int n = Integer.parseInt(br.readLine());

    }
    
}
