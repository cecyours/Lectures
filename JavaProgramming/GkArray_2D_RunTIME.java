import java.io.*;
class GkArray_2D_RunTIME {
	public static void main(String[] args)throws Exception {
		ArrayGk g = new ArrayGk();
		g.setData();
		g.display();
	}
}
class ArrayGk{

	int a[][];
	int i,j;
	int counter=1;
	int r,c;

	BufferedReader br;

	void setData() throws Exception
	{
		br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter rows : ");
	 	r = Integer.parseInt(br.readLine());

	 	System.out.print("Enter columns : ");
	 	c = Integer.parseInt(br.readLine());

	 	a = new int[r][c];

	 	System.out.println("Enter elements : ");
	 	for(i=0;i<r;i++)
	 	{
	 		for(j=0;j<c;j++)
	 		{
	 			// System.out.print("Enter a[ "+i+" ][ "+j+" ]: ");
	 			// a[i][j] = Integer.parseInt(br.readLine());
	 			a[i][j] = counter;
	 			counter++;
	 		}
	 	}	 		
	}
	void display()
	{
	   System.out.println("Entered Matrix : ");
	 	for(i=0;i<r;i++)
	 	{
	 		for(j=0;j<c;j++)
	 		{
	 			System.out.printf(" %2d ",a[i][j]);
	 		}
	 		System.out.println();
	 	}	 		
	}
}