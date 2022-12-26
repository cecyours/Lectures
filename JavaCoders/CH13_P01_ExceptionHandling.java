
import java.io.*;

class CH13_P01_ExceptionHandling  {
	public static void main(String[] args) throws Exception {
			
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

			int a[] = {1,3,5,7,2,6,7,3,8,27};
			System.out.println("Enter the index  value : ");
			int i = Integer.parseInt(br.readLine());

			try
			{
				System.out.println("your lucky number is : "+a[i]);
			}
			catch (Exception e) {
				System.out.println("There is an Error..");

				for(i=0;i<10;i++)
					System.out.print(" "+i);
			}

			System.out.println("hello Sumit");
	}
}

/*types of Error
1. Compile time -> syntax error -> typing mistake
2. Runtime -> logic error

*/
