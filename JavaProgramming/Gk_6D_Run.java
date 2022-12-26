import java.io.*;
class Gk_6D_Run {
	public static void main(String[] args) throws Exception{
		Code c = new Code();
		c.getData();
	}
}
class Code{
	int a[][][][][][];
	int i1,i2,i3,i4,i5,i6;
	int n1,n2,n3,n4,n5,n6;
	int counter=0;

	BufferedReader br;
	void getData() throws Exception
	{
		br = new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter n1 : ");
		n1 = Integer.parseInt(br.readLine());
		
		System.out.print("Enter n2 : ");
		n2 = Integer.parseInt(br.readLine());
		
		System.out.print("Enter n3 : ");
		n3 = Integer.parseInt(br.readLine());
		
		System.out.print("Enter n4 : ");
		n4 = Integer.parseInt(br.readLine());
		
		System.out.print("Enter n5 : ");
		n5 = Integer.parseInt(br.readLine());
		
		System.out.print("Enter n6 : ");
		n6 = Integer.parseInt(br.readLine());

		a = new int[n1][n2][n3][n4][n5][n6];
		for(i1=0;i1<n1;i1++)
			for(i2=0;i2<n2;i2++)
				for(i3=0;i3<n3;i3++)
					for(i4=0;i4<n4;i4++)
						for(i5=0;i5<n5;i5++)
							for(i6=0;i6<n6;i6++)
								a[i1][i2][i3][i4][i5][i6] = ++counter;


		for(i1=0;i1<n1;i1++)
		{
			for(i2=0;i2<n2;i2++)
			{
				for(i3=0;i3<n3;i3++)
				{
					for(i4=0;i4<n4;i4++)
					{
						for(i5=0;i5<n5;i5++)
						{
							for(i6=0;i6<n6;i6++)
							{
								System.out.printf(" %3d ",a[i1][i2][i3][i4][i5][i6]);
							}
							System.out.print("&&&&");
						}
						System.out.print(" | ");
					}
					System.out.println();
				}
				System.out.println("--------");
			}
			System.out.println("======");
		}
		System.out.println("*** ***");

	}

}