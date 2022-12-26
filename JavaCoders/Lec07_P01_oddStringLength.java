
import java.util.*;
class Lec07_P01_oddStringLength {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int n=20; //20 size

		String words[] = new String[n];
		int i;
		System.out.println("Enter elements : ");

		for(i=0;i<n;i++)
		{
			System.out.print(" words[ "+i+" ] = ");
			words[i] = sc.nextLine();
		}

		System.out.println("--------------------");
		for(i=0;i<n;i++)
		{

			int len = words[i].length();

			if(len%2!=0)
			{
				System.out.println(" words[ "+i+" ] "+words[i]);	
			}

		}
	}
}
