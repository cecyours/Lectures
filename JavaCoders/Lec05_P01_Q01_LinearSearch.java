
import java.util.*;
class Lec05_P01_Q01_LinearSearch{
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter size : ");
		int n = sc.nextInt();

		int a[] = new int[n];
		int i;
		System.out.println("Enter elements : ");

		for(i=0;i<n;i++)
		{
			System.out.print(" a [ "+i+" ] = ");
			a[i] = sc.nextInt();
		}

		System.out.print("Enter element to search : ");
		int data = sc.nextInt();

		boolean f = false;
		int index=0;
		for(i=0;i<n;i++)
		{
			if(data==a[i]) // data.equals(names[i])
			{
				index = i;
				f = true;
				break;
			}
		}

		if(f)
		{
			System.out.println(data+" is  found  at ..."+index);
		}
		else{
			System.out.println("No such element found.");
		}



	}
}