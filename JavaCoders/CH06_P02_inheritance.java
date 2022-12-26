
class CH06_P02_inheritance  {
	public static void main(String[] args) {
		
		B b = new B();
		b.display();
	}
}


class A{ //parent

	void display()
	{
		System.out.println("Hello Sumit ..");
	}
}

class B extends A{ //child

	void display23()
		{
			System.out.println("Hello Ronald ..");
		}
}