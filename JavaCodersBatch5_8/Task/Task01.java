
import java.util.*;
class Task01  {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a number : ");
		int n = sc.nextInt();

		int ans=0;
		boolean f= false;
		while(n>0)
		{

		int temp = n;
		int rem=0,happy=0;

			while(temp>0)
			{
				rem = temp%10;
				happy = happy+rem*rem;
				temp=(int)temp/10;
			}
			ans = n;
			n = happy;
			n=n/10;
			if(happy==1)
			{
				f = true;
				ans = happy;
				break;
			}
		}
		if(f)
		{
			System.out.println("Happy number : "+ans);
		}
		else{
			System.out.println("sad number : "+ans);

		}
	}
}