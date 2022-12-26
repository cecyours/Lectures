
import java.util.*;
public class Code{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		System.out.print("Enter a size : ");
		int n = s.nextInt();
		int a[] = new int[n];
 		
 		int temp=0;

 		System.out.println("Enter the list : ");

 		for(int i=0;i<n;i++)
 		{
 			System.out.print("enter an element : ");
 			a[i] = s.nextInt();
 		}
 		// code to get data

 		System.out.print("Enter data to search : ");
 		int sh = s.nextInt();
 		int i;
 		for(i=0;i<n;i++)
 		{
 			// code to search
 			if(sh==a[i])
 			{
 				temp=1;
 				break;
 			}
 		}
 		// dOg

 		if(temp==1)
 		{
 			System.out.println("Data found !!!"+i);
 		}
 		else
 		{
 			System.out.println(" NO SUCH ELEMENT ");
 		}
	}
}