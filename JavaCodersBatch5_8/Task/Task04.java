
import java.util.*;
class Task04 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int num,temp,rem1,rem2;
		int ans;
		boolean f = true;

		System.out.print("Enter a number: ");
		num = sc.nextInt();

		ans = num;
		while(num>0)
		{
			rem1 = num%10;
			num/=10;
			temp = num;

			while(temp>0)
			{
				rem2 = temp%10;
				if(rem1==rem2)
				{
					f=false;
					break;
				}
				temp/=10;
			}
			if(!f)
				break;
		}

		if(f)
			System.out.println(ans+" Unique Number ");
		else 
			System.out.println(ans+" Not Unique Number.");
	}
}