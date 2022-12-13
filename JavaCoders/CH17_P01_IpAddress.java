import java.io.*;
import java.net.*;
class CH17_P01_IpAddress {
	public static void main(String[] args)  throws Exception{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.print("Enter the url : ");
		String url = br.readLine();


		InetAddress ip = InetAddress.getByName(url);

		System.out.println("your ip address : "+ip);





	}
}