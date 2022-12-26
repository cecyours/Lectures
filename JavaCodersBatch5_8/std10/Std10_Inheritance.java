
class Std10_Inheritance{
	public static void main(String[] args) {
		
		B b = new B();
		b.display2(); // 2
		b.display(); // 1

	}
}

class A{
	void display()
	{
		System.out.println("Hello World... 1");
	}
}
class B extends A{
	// nothing
	void display2()
	{
		System.out.println("Hello World... 2");
	}
}