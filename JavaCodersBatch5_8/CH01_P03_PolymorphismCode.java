

class CH01_P03_PolymorphismCode{
	public static void main(String[] args) {
		
		Addition me = new Addition();
		me.sum(10,30,3);
		me.sum(3,1,4);
	}
}
class Addition{

	void sum(int a,int b)
	{
		int c = a+b;
		System.out.println("m1 "+a+" + "+b+" = "+c);
	}

	void sum(int a,int b,int c)
	{
		int d = a+b+c;
		System.out.println("m2 "+a+" + "+b+" + "+c+" = "+d);	
	}
}