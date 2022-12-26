
import java.io.*;
class Lec11_TaskFullName  {
	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String fName, mName, lName, fullName;

		System.out.print("Enter your first Name ; ");
		fName = br.readLine();

		System.out.print("Enter your middle Name ; ");
		mName = br.readLine();

		System.out.print("Enter your last Name ; ");
		lName = br.readLine();

		// method 1
		fullName =  fName.concat(" "+mName.concat(" "+lName));

		//method 2

			String x = fName.concat(" "+mName);
			fullName = x.concat(" "+lName);

		System.out.println("welcome "+fullName);

		int y = fullName.length();
		System.out.println("length : "+y);
	}
}