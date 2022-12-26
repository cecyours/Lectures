
import java.io.*;
class Lec16_P01_StringBuffer {
	public static void main(String[] args) throws Exception {


		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter your name: ");

		StringBuffer s = new StringBuffer(br.readLine());

		System.out.println("Hello World... "+s);
	}
}