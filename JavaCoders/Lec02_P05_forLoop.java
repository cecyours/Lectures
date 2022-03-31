class Lec02_P05_forLoop{
	public static void main(String[] args) {
		

		int i;
		for(i=100;i>=20;i--)
		{
			if(i%3==0 || i%5==0)
			{
				System.out.println("Hello World.. "+i);	
			}
		}
	}
}