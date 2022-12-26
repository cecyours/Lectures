// oak/ java -> oracle - minecraft
 

 // system.in -> keyboard
// system.out -> monitor

import java.io.*;
class Lec10_P03_UserFullFtConcat{
	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter your first Name ");
		String fname =br.readLine();


		System.out.print("Enter your last Name ");
		String lname =br.readLine();


		String fullName = fname.concat(lname);
		// String fullName = fname+" "+lname;

		System.out.println("welcome "+fullName);
	}
}