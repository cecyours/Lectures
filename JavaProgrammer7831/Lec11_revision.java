
import java.io.*;
class Lec11_revision{
	public static void main(String[] args) throws IOException {


		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter a number : ");
		int a = Integer.parseInt(br.readLine());

		System.out.print("Enter a number : ");
		int b = Integer.parseInt(br.readLine());

		int c= a+b;
		System.out.println(a+" + "+b+" = "+c);// 20+42=62
			
		
	}
}