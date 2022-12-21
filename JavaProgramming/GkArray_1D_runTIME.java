import java.io.*;
class GkArray_1D_runTIME  {
	public static void main(String[] args) throws Exception {
		
		ArrayGk obj = new ArrayGk();
		obj.setData();
		obj.display();

		}	
}
class ArrayGk{

	int a[];
	int i;
	int n;
	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	void setData() throws Exception
	{
		System.out.print("Enter size : ");
		n = Integer.parseInt(br.readLine());
		a = new int[n];

		System.out.println("Enter "+n+" elements : ");
		for(i=0;i<n;i++)
		{
			// System.out.print("Enter a[ "+i+" ] : ");
			// a[i] = Integer.parseInt(br.readLine());
			a[i] = (i+1)*10; // automatic initialization
		}

			}
	void display()
	{
		for(i=0;i<a.length;i++)
		{
			System.out.println("a[ "+i+"] : "+a[i]);
		}
	}
}