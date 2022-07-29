
import java.io.*;
import auto.*;
class Lec15_P02_lowerUpper  {
	public static void main(String[] args) throws Exception {
		
		Tool.print("Enter the String : ");
		String data = Tool.br.readLine();

		String upper = data.toUpperCase();
		Tool.println("uppercase : "+upper);

		String lower = data.toLowerCase();
		Tool.println("lowercase : "+lower);
	}

}