

import java.io.*;
class Lec14_P02_whileLoop {
	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));


		int sum = 0;

		while(sum<=100)
		{
			System.out.print("Enter the num : ");
			int x = Integer.parseInt(br.readLine());

			sum = sum+x;
			System.out.println("\u001B[31m value : "+sum+" \u001B[0m");
		}
	}
}