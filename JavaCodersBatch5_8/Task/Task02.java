
import java.util.*;
class Task02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a number : ");
		int n = sc.nextInt();

		int temp=n;
		int sum=0,rem;

		while(n>0)
		{
			rem = n%10;
			sum+=rem;
			n=(int)n/10;
		}

		if(temp%sum==0)
		{
			System.out.println("Harshad number.");
		}
		else {
			System.out.println("Not Harshad number.");
		}
	}
}