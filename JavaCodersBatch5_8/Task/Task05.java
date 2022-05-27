import java.util.*;
class Task05  {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n,temp,ans=0,rem;
		int pow=0;

		System.out.print("Enter a number : ");
		n = sc.nextInt();

		temp = n;
		while(temp>0)
		{
			pow++;
			temp/=10;
		}
		temp=n;
		while(temp>0)
		{
			rem = temp%10;
			ans = ans+(int)Math.pow(rem,pow--);
			temp/=10;
		}

		if(ans == n)
			System.out.println(n+" is a Disarium number");
		else 
			System.out.println(n+" is not a Disarium number");

	}
}