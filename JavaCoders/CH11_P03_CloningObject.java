

class CH11_P03_CloningObject  {
	public static void main(String[] args) throws CloneNotSupportedException {
		
		Student s1 = new Student("Sumit");

		Student s2 = (Student)s1.clone();


		s1.name = "gk";

		s1.display(); // gk
		s2.display(); // sumit
	}
}

class Student implements Cloneable {

	String name;

	public Student()
	{
		name = "HOME";
	}

	public Student(String name)
	{
		this.name = name;
	}

	void display()
	{
		System.out.println("welcome "+name);
	}

	protected Object clone() throws CloneNotSupportedException
	{

		return super.clone();
	}
}