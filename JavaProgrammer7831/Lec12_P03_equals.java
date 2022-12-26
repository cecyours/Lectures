// equals : Sumit SUMIT
// ignore : same

import java.io.*;
class Lec12_P03_equals {
	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("   Enter user name  :");
		String s1 = br.readLine();

		System.out.print("Enter re-user name  :");
		String s2 = br.readLine();
 

		if(!s1.equalsIgnoreCase(s2))
		{
			System.out.println("welcome");
		}
		else{
			System.out.println("Bye..");
		}


	}
}