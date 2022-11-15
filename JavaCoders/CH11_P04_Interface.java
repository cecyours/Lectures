
class CH11_P04_Interface {
	public static void main(String[] args) {
		
		Task t = new Task();
		t.showPattern();
	}
}

/*class : extends*/
/*interface : implements*/


public interface Pattern{
	int row = 10;
	int column =10;

	public void showPattern();
}

class Task implements Pattern
{
		public void showPattern()
		{
			for(int j=0;j<row;j++)
			{ 
				for(int i=0;i<column;i++)
				{
					System.out.print(" * ");
				}
				System.out.println();
			}
		}

}