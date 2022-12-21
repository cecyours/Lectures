import java.io.*;
class WritingIntoFiles {
	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		FileOutputStream fout = new FileOutputStream("Sumit.txt");

		System.out.print("Enter your name : ");
		String name = br.readLine();

		fout.write(name.getBytes());



	}
}