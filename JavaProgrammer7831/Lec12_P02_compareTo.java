// compareTo : Sumit SUMIT
// ignore : same

import java.io.*;
class Lec12_P02_compareTo {
	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("   Enter password  :");
		String s1 = br.readLine();

		System.out.print("Enter re-password  :");
		String s2 = br.readLine();
 
		if(s1.compareTo(s2)==0)
		{
			System.out.println(" \u001B[31m password Match \u001B[0m");
		}
		else{
			System.out.println("\u001B[31m password doesn't match \u001B[0m");
		}

		System.out.println("----------------- ignore care ");

		if(s1.compareToIgnoreCase(s2)==0)
		{
			System.out.println(" \u001B[31m password Match \u001B[0m");
		}
		else{
			System.out.println("\u001B[31m password doesn't match \u001B[0m");
		}


	}
}