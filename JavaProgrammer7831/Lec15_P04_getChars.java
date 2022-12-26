

import java.io.*;
import auto.*;
class Lec15_P04_getChars  {
	public static void main(String[] args) throws Exception {
		
		// Tool.print("Enter the String : ");
		// String data = Tool.br.readLine();
		String data = "01234567890"; 


		char ch[] = {'x','y','z','u','p'};

		data.getChars(0,3,ch,2);


		for(char c: ch)
		{
			Tool.print(c+"");
		}
}
}