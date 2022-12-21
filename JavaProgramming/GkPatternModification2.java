class GkPatternModification2 {
	public static void main(String[] args) {
		
		PatternGk p = new PatternGk();
		p.display();
	}
}
class PatternGk{
	int i,j,n=10;
	void display()
	{
		for(i=1;i<n;i++)
		{
			for(j=1;j<=i;j++)
			{
				if((j%2==1 && j%i==0) || (i%3==0 && i%j==0) || (i*j)%3!=0)
				{
					System.out.print("  ");
				}
				else
				System.out.print(" * ");
			}
			System.out.println();
		}
	}
}