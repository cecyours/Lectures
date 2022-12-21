/*server*/
import java.net.*;
import java.io.*;
class ServerCode  {
	public static void main(String[] args) throws Exception {
		
		ServerSocket serverSocker = new ServerSocket(1020);


		System.out.println("Waiting for Request..");
		Socket server = serverSocker.accept();

		BufferedReader brClient = new BufferedReader(new InputStreamReader(server.getInputStream()));
		BufferedReader brKeyboard = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Connected..");

		PrintStream ps = new PrintStream(server.getOutputStream());

		ps.println("Say somethig..");

		String sendMsg,getMsg;
		while(true)
		{

			 	getMsg = brClient.readLine();
				System.out.println("client : "+getMsg);

				if(getMsg.equals("Exit"))
				{
					break;
				}
				System.out.print("Me : ");
				sendMsg = brKeyboard.readLine();
				ps.println(sendMsg);
		 

		}
		
		ps.close();


	}
}