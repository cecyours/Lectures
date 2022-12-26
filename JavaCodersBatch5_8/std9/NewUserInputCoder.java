

import java.util.*;
class NewUserInputCoder {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter size : ");
		int n = sc.nextInt();
		int i;
		int a[] = new int[n];

		System.out.println("Enter elememts : ");
	
		for(i=0;i<n;i++)
		{
			System.out.print("enter  a[ "+i+" ] : ");
			a[i] = sc.nextInt();
		}

		int max = a[0];
		// iterate all
		for(i=0;i<n;i++)
		{
			if(max<a[i])
			{
				max = a[i]; 
			}
		}

		System.out.println(" max : "+max);
	}
}