
class CH06_P03_polymorephism {
	public static void main(String[] args) {
			
			 Task t= new Task();

			 t.sum(2,4,9);
			 t.sum(4,2);
	}
}
 

class Task{

	// overloading
	void sum()
	{
		System.out.println("No data..");
	}

	void sum(int a,int b)
	{ 
		System.out.println(a+ " + "+b+" = "+(a+b));
	}

	void sum(int a,int b,int c)
	{

		System.out.println(a+" + "+b+" + "+c+" = "+(a+b+c));
	}

}