
import java.io.*;
class Lec12_P04_startsWithendsWith  {
	public static void main(String[] args) throws Exception {
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter your string : ");
		String s = br.readLine();

		System.out.print("Enter your starts : ");
		String start= br.readLine();

		// boolean f = s.startsWith(start);
		// System.out.println("status : "+f);

		if(s.startsWith(start)){
			System.out.println("works !!");
		}
		else{
			System.out.println("fails.. ");
		}
	}
}