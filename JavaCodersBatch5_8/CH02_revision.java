
class Code{
	public static void main(String[] args) {
		Student y = new Student();
	
		y.name="Gk";
		y.display();
		
		y.name="Prince";
		y.display();
	}
}
class Student{
	String name;

	void display()
	{
		System.out.println("Hello "+name);
	}
}