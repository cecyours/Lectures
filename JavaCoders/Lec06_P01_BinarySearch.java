
import java.util.*;
class Lec06_P01_BinarySearch{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		int a[] = {31,36,45,50,60,75,86,90};

		int len = a.length;

		System.out.print("Enter data to search : ");
		int sh = sc.nextInt();

		int mid,front=0,back=len-1;
		boolean f = false;

		while(front<=back)
		{
			mid = (front+back)/2;

			if(sh>a[mid])
			{
				front=front+1;
			}
			if(sh<a[mid])
			{
				back=back-1;
			}

			if(sh==a[mid])
			{
				f = true;
				break;
			}
		}

		if(f)
		{
			System.out.println("Search Successful");
		}
		else
		{
			System.out.println("Search un-successful");	
		}
	}
}