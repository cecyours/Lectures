
import java.util.*;
class Lec04_P04_ReverseArray{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter size : ");
		int n = sc.nextInt();

		int student_id[] = new int[n];
		int i;

		for(i=0;i<n;i++)
		{
			System.out.print("Student [ "+i+" ] = ");
			student_id[i]=sc.nextInt();
		}

		System.out.println("--------------"); // partition

		for(i=n-1;i>=0;i--)
		{
			System.out.println("Student [ "+i
				+" ] = "+student_id[i]);
		}
	}
}