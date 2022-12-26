class GkArray_2D_compileTIME {
	public static void main(String[] args) {
		ArrayGk.display();
	}
}
class ArrayGk{
	static int a[][] = {{1},
					   {4,2,9,10},
				       {3,5,6}};
	static int i,j;
	static void display()
	{
		for(i=0;i<a.length;i++)
		{
			for (j=0;j<a[i].length;j++) 
			{
				System.out.print(" "+a[i][j]);	
			}
			System.out.println();
		}
	}
}