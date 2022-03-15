
class CH01_P01_Dog{
	public static void main(String[] args) {
		
		Dog d = new Dog();
		d.name="Tommy";
		d.barking();
	}
}


class Dog{

	/** properties*/
	String name;
	int height;


	/**behaviour*/
	void barking()
	{
		System.out.println(name+" is barking....");
	}
}