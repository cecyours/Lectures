
class CH01_P02_inheritance{
	public static void main(String[] args) {
		
		B gk = new B();
		gk.show(); // Class B
		gk.display(); // Class A
	}
}

// A -> B

class A{
	void display()
	{
		System.out.println("Class A");
	}
}


class B extends A{
	void show()
	{
		System.out.println("Class B");
	}
}