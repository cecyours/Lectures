
class CH03_P04_methodsWithSum{
	public static void main(String[] args) {	
		
		Operation p = new Operation();
		// p.sum();

		int x;
		x = p.sum(10,50);
		System.out.println("Hello "+x);
	}
}
class Operation{

	void sum()
	{
		int a,b,c;
		a = 10;
		b = 3;
		c = a+b;
		System.out.println(a+" + "+b+" = "+c);	
	}

	int sum(int a,int b)
	{
		return a+b;
	}
}