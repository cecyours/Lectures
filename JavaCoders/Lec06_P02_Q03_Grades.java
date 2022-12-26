
import java.util.*;
class Lec06_P02_Q03_Grades {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter size : ");
		int N = sc.nextInt();

		int a[] = new int[N];
		int i;
		
		System.out.println("Enter elements : \n");
		for(i=0;i<N;i++)
		{
			System.out.print(" a [ "+i+" ] = ");
			a[i]= sc.nextInt();
		}

		int excellent=0,good=0,fair=0,poor=0,fail=0;

		for(i=0;i<N;i++)
		{
			if(a[i]>=80 && a[i]<=100)
			{
				excellent++;
			}
			else if(a[i]>=60 && a[i]<=79)
			{
				good++;
			}
			else if(a[i]>=40 && a[i]<=59)
			{
				fair++;
			}
			else if(a[i]>=20 && a[i]<=39)
			{
				poor++;
			}
			else{
				fail++;
			}
		}


		System.out.println("excellent[80-100] : "+excellent);
		System.out.println("      good[60-79] : "+good);
		System.out.println("      fair[40-59] : "+fair);
		System.out.println("      poor[20-39] : "+poor);
		System.out.println("        fail[<20] : "+fail);


	}
}