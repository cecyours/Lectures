class Lec09_P03_Heirchical {
	public static void main(String[] args) {
		
		C c = new C();
		c.displayA();
		c.displayC();
		System.out.println("-------------------------------");

		D d = new D();
		d.displayA();
		d.displayB();
		d.displayD();

		System.out.println("-------------------------------");
		
		E e = new E();
		e.displayA();
		e.displayB();
		e.displayE();


	}
}
class A{
	void displayA()
	{
		System.out.println("class A "+this);
	}
}

class B extends A{
	void displayB()
	{
		System.out.println("class B "+this);
	}
}

class C extends A{
	void displayC()
	{
		System.out.println("class C "+this);
	}
}

class D extends B{
	void displayD()
	{
		System.out.println("class D "+this);
	}
}

class E extends B{ 
	void displayE()
	{
		System.out.println("class E "+this);
	}
}