
import java.util.*;
class CH05_P06_relationalOperator{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int a,b;

		System.out.print("Enter a Number : ");
		a = sc.nextInt();

		System.out.print("Enter a Number : ");
		b = sc.nextInt();
		// a:4,b=5
		System.out.println(a+" > "+b+" : "+(a>b));
		System.out.println(a+" < "+b+" : "+(a<b));
		System.out.println(a+" >= "+b+" : "+(a>=b));
		System.out.println(a+" <= "+b+" : "+(a<=b));
		System.out.println(a+" == "+b+" : "+(a==b));
		System.out.println(a+" != "+b+" : "+(a!=b));


		if(a>b)
		{
			System.out.println(a+" is greater than "+b);
		}
		
	}
}