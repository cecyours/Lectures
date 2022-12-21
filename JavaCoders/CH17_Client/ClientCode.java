/*client*/
import java.io.*;
import java.net.*;
class ClientCode  {
	public static void main(String[] args) throws Exception {
			
			Socket client = new Socket("localhost",1020);

			System.out.println("I am connected..");

			BufferedReader brServer = new BufferedReader(new InputStreamReader(client.getInputStream()));

			BufferedReader brKeyboard = new BufferedReader(new InputStreamReader(System.in));
			PrintStream ps = new PrintStream(client.getOutputStream());
			String getMsg,sendMsg;

			while(true)
			{
				getMsg = brServer.readLine();
				System.out.println("server : "+getMsg);

				System.out.print("client : ");
				sendMsg = brKeyboard.readLine();

				ps.println(sendMsg);

				if(sendMsg.equals("Exit"))
				{
					break;
				}

			}





	}
}