
class CH01_P02_classObject_methods_members{

	public static void main(String[] args) {
		
		// Dog.display();
		// int a = 10;
		Dog d1 = new Dog();
		Dog d2 = new Dog();
		Dog d3 = new Dog();



		d1.display();
		d2.display();
		d3.display();


	}
}

class Dog{

	private String name = "Tommy"; //members
	 public void display() // methods
	{
		System.out.println(name+"Hello World----"+this);
	}
}