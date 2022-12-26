
import auto.*;
import java.io.*;
class Lec14_P03_array{
	public static void main(String[] args) throws Exception {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			
			// int a[] = {1,2,3,4,5,6,7,8,9,0};

			// for(int i=0;i<a.length;i++)
			// {
			// 	Tool.println("value : "+a[i]);
			// }

			// for(int x:a)
			// {
			// 	Tool.print(x+"\n");
			// }	

		Tool.print("Enter the size : ");
		int n = Integer.parseInt(br.readLine());

		int i;
		int a[] = new int[n];
		Tool.println("Enter the data : ");
		for(i=0;i<n;i++)
		{
			Tool.print("Enter data a[ "+i+" ] ");
			a[i] = Integer.parseInt(br.readLine());
		}

		Tool.print("Entered Data : \n");
		for(i=0;i<n;i++)
		{
			Tool.println("a[ "+i+" ] = "+a[i]);
		}
	}
}