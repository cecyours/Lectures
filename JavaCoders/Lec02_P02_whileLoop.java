
import java.util.*;
class Lec02_P02_whileLoop{

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a number : ");
		int n = sc.nextInt();

		int i=n;
		
		while(i>=0)
		{
			System.out.println("Hell of code "+i);
			i--;
		}

	}
}