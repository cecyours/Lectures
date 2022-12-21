
import java.util.*;
class Lec02_P02_whileLoop{

	public static void main(String[] args) {
		
		Scanner hm = new Scanner(System.in);

		System.out.print("Enter a Number : ");
		int n = hm.nextInt();

		int i=1;

		while(i<=10)
		{

			System.out.println(n+" x "+i+" = "+(n*i)); // 5 x 2 = 10
			i++;
		}

	}
}