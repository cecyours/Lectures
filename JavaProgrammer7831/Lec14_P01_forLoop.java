

import java.io.*;
class Lec14_P01_forLoop{
	public static void main(String[] args) throws Exception{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter start Number : ");
		int s = Integer.parseInt(br.readLine());

		System.out.print("Enter the Number : ");
		int n = Integer.parseInt(br.readLine());


		System.out.print("Enter skip number : ");
		int skip = Integer.parseInt(br.readLine());
		int i;

		for(i=s;i<=n;i = i + skip)
		{
			System.out.println("\t number : "+i);
		}

		// for - each

		String names[]  = {"Karan","Pappu","Abhisek","Ria","Gk"};

		for(String k: names)
		{
			System.out.println("welcome "+k);
		}

	}
}