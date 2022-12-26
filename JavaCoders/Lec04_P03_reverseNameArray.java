
import java.util.*;
class Lec04_P03_reverseNameArray {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		// System.out.print("Enter no of students : ");
		// int size = sc.nextInt();
			int size=5;
		String name[] = new String[size];
		int i;
		System.out.println("Enter names of Students : ");

		for(i=0;i<size;i++)
		{
			System.out.print(" student [ "+i+" ] = ");
			name[i] = sc.nextLine();
		}

		System.out.println("----------"); // ?

		for(i=size-1;i>=0;i--)
		{
			System.out.println(" student [ "+i+" ] = "+name[i]);
		}

		}
}