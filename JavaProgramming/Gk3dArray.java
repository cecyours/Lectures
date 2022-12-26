class Gk3dArray{
	public static void main(String[] args) {
		Gk.display();
	}
}
class Gk{
	static int a[][][] = {
					{ {1,2},
					  {3},
					  {4,1}},

					{ {1,2},
					  {3,4,4,3},
					  {4,1}}};
	static int i,j,k;
 	static void display()
 	{
 		for(i=0;i<a.length;i++)
 		{
 			for(j=0;j<a[i].length;j++)
 			{
 				for(k=0;k<a[i][j].length;k++)
 				{
 					System.out.print("\t"+a[i][j][k]);
 				}
 				System.out.println();
 			}
 			System.out.print(" - - -- --\n");

 		}
 	}
}				