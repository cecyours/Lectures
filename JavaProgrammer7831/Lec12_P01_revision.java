
/*
concat

String concat(String s)

String ans = s1.concat(s2)

// -------
int lenght()
int len = s1.lenght();

// --------
char charAt(int i); 

char ch = s1.charAt(4);

*/

import java.io.*;

class Lec12_P01_revision  {
 	public static void main(String[] args) throws Exception {
 		
 		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

 		System.out.print("enter your str : ");
 		String s = br.readLine();

 		String newString = "Mr/Ms ".concat(s);
 		System.out.println("welcome  "+newString);

 		System.out.println("---------------------->");
 		int len = s.length();
 		System.out.println("length : "+len);

 		System.out.println("---------------------->");
 		System.out.print("Enter the index : ");
 		int x = Integer.parseInt(br.readLine());

 		try{

	 		char ch = s.charAt(x);
 			System.out.println("Character at "+x+" is "+ch);

 		}
 		catch(Exception e)
 		{
 			System.out.println("Error "+e);
 		}

 		System.out.println("Hello World \u2456");

 	}
 } 