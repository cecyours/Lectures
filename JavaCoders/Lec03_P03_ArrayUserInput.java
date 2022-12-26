
import java.util.*;
class Lec03_P03_ArrayUserInput {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter your size : ");
		int n = sc.nextInt();

		int rollNo[] = new int[n];

		System.out.println("Enter data please : \n");
		int i;
		for(i=0;i<n;i++)
		{
			System.out.print("Enter rollNo [ "+i+" ] = ");
			rollNo[i] = sc.nextInt();
		}

		System.out.println("<-------------------->");

		for(i=0;i<n;i++)
		{
			System.out.println(" rollNo [ "+i+" ] = "+rollNo[i]);
		}


	}
}