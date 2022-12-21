class GkPatternModification  {
	public static void main(String[] args) {
		
		PatternGk obj = new PatternGk();
		obj.display();
	}
}
class PatternGk{
	int i,j,n=10;
	void display()
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<=i;j++)
			{
				if(i-1==j)
				{
					System.out.print(" - ");
				}
				else
				System.out.print(" * ");
			}
			System.out.println();
		}
	}
}