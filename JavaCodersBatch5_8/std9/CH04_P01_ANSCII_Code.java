
class CH04_P01_ANSCII_Code{
	public static void main(String[] args) {
		
		int $x;
		for(int i=65;i<=90;i++)
		{
			if(i%5==0)
				System.out.println();
			System.out.print("\t\t"+i+" : "+(char)i);
		}


		System.out.println("Hello \u4039");

	}
}