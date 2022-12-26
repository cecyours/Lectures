class Lec10_P02_cmdArgs  {
	public static void main(String[] ks) {
		
		System.out.println("Hello World ");

		for(String s: ks) // with for-each loop
		{
			System.out.println("work "+s);
		}
	
		System.out.println("<----------------->");

		int i = 0;
		for(i=0;i<5;i++) //with for loop
		{
			System.out.println("hello "+ks[i]);
		}
	}
}