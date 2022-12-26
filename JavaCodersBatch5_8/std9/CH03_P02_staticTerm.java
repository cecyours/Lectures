
class CH03_P02_staticTerm{
	public static void main(String[] args) {
		
		// Student s = new Student();
		Student.setData("saksham",90.0);
		Student.getData();
	}
}
class Student{

	static String name;
	static double marks;

	static void setData(String name,double marks)
	{
		Student.name = name;
		Student.marks = marks;
	}
	static void getData()
	{
		System.out.println("welcome "+name+"\t"+marks);
	}
}