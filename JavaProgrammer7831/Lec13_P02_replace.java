
import java.io.*;
class Lec13_P02_replace  {
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter a String : ");
		String s = br.readLine();

		System.out.print("Enter replace string as x,y: ");
		String data = br.readLine();

		System.out.println(" data : "+data);
		String code[] = data.split(",");

		System.out.println("code 0: "+code[0]);
		System.out.println("code 1: "+code[1]);

		char ch1= code[0].charAt(0);
		char ch2= code[1].charAt(0);
		
		String new_s = s.replace(ch1,ch2);
		System.out.println(" new String "+new_s);



	}
}