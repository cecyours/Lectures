
/**

A  B | &&
----------
0 0  : 0 
0 1  : 0
1 0  : 0
1 1  : 1

---------

A  B | ||
----------
0 0  : 0
0 1  : 1
1 0  : 1
1 1  : 1
*/
import java.util.*;
class CH05_P07_LogicalOperator{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int a,b,c=4;

		System.out.print("Enter a number : ");
		a = sc.nextInt();

		System.out.print("Enter a number : ");
		b = sc.nextInt();

		if(a>b && a>10)
		{
			System.out.println("true block");
		}
		else
		{
			System.out.println("false block");
		}
		System.out.println("----------------------------");
		if(a>b || a>10)
		{
			System.out.println("true block");
		}
		else
		{
			System.out.println("false block");
		}

		System.out.println("----------------------------");
		if(!(a>b))
		{
			System.out.println("true block");
		}
		else
		{
			System.out.println("false block");
		}

	}
}