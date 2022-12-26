
import java.util.Scanner;

class CH01_P05_Arithmetic  {
		
		public static void main(String[] args) {
			
			Scanner sc = new Scanner(System.in);

			System.out.print("Enter a number : ");
			int a = sc.nextInt();

			System.out.print("enter a number : ");
			int b = sc.nextInt();

			System.out.println(a+" + "+b+" = "+(a+b)); // 1020
			System.out.println(a+" - "+b+" = "+(a-b)); // 1020
			System.out.println(a+" * "+b+" = "+(a*b)); // 1020
			System.out.println(a+" / "+b+" = "+(a/b)); // 1020
			System.out.println(a+" % "+b+" = "+(a%b)); // 1020

		}
}