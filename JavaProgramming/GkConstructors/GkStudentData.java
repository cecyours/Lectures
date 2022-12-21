class GkStudentData{
	public static void main(String[] args) {
		
		int n = 20;
		String name = "Vaibhav";
		Student s = new Student(name,n);
		s.display();

		Student me = new Student();
		me.display();

		Student you = new Student("Suraj",87);
		you.display();

	}
}
class Student{

	String name;
	int rollno;
	public Student(String name,int rollno)
	{
		this.name = name;
		this.rollno =rollno;
	}

	public Student()
	{
		name ="Gk";
		rollno = 48;
	}

	void display()
	{
		System.out.println("Hello "+name+", "+rollno);
	}
}