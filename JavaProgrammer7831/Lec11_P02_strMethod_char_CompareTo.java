
import java.io.*;
class Lec10_P02_strMethod_char_CompareTo {
	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter your str : ");
		String str = br.readLine();

		char ch = str.charAt(1);

		System.out.println("Character : "+ch);
	

		System.out.println("--------------compare-------------");

		String s1 = "ABC";
		String s2 = "ABC";
		int x = s1.compareTo(s2);
		System.out.println("compare :"+x);
	}
}