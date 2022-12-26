
// simple :  parent -> child.
class Lec09_P01_Inheritance  {
	public static void main(String[] args) {
		// code 
		B b = new B();
		b.display();
	}
}

class A{

	void display()
	{
		System.out.println("Hello World");
	}
}

class B extends A{

	void display()
	{
		System.out.println("Bye World..");
		super.display();
		System.out.println("Home");
	}
}