
import java.util.*;
class ReverseNumber{
	static int reverseNumber(int num)
	{
		int rev=0;
		int rem;
		while(num>0)
		{
			rem = num%10;
			rev = rev*10+rem;
			num=num/10;
		}
		return rev;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = 10;
		int a[] = new int[n];
		int rev[] = new int[n];

		System.out.print("Enter "+n+" numbers : ");
		int i;

		for(i=0;i<n;i++)
		{
			System.out.print("Enter a number :");
			a[i] = sc.nextInt(); 
			rev[i] = ReverseNumber.reverseNumber(a[i]);	
		} 

		for(i=0;i<n;i++)
		{
			System.out.printf("\n %3d : %3d",a[i],rev[i]);
		}

	}	
}