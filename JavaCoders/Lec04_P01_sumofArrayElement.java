import java.util.*;
class Lec04_P01_sumofArrayElement {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter size of an Array : ");
		int n = sc.nextInt();

		int a[] = new int[n]; // allocate size

		System.out.println("Enter "+n+" elements : ");
		int i;

		int sum=0;
		for(i=0;i<n;i++)
		{
			System.out.print(" a [ "+i+" ] = ");
			a[i] = sc.nextInt();
			
			sum = sum+a[i];
		}

		System.out.println("sum is "+sum);

	}
}