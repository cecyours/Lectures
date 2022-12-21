
class CH15_P01_ArrayObjects  {
	public static void main(String[] args) {
		
		Student s[] = new Student[10];

		s[0] = new Student(10,"Sumit",98.32);
		s[1] = new Student(11,"Rio",93.32);
		s[2] = new Student(12,"Neha",38.32);
		s[3] = new Student(13,"Work",14.32);
		s[4] = new Student(14,"Sunita",48.32);
		s[5] = new Student(15,"Mohan",5.52);
		s[6] = new Student(16,"Rohit",23.62);
		s[7] = new Student(17,"Coder",55.00);
		s[8] = new Student(18,"press",64.64);
		s[9] = new Student(19,"happy",90.12);

		System.out.printf("%7s | %10s | %5s\n","rollNo","name","marks");
		System.out.printf("%7s + %10s + %5s\n","------","--------","-------------");
		for(int i=0;i<s.length;i++)
		{
			System.out.printf("%7d | %10s | %f\n",s[i].rollNo,s[i].studentName,s[i].marks);
		}

	}
}
class Student{

	int rollNo;
	String studentName;
	float marks;

	public Student(){

	}

	public  Student(int rollNo,String name,double marks)
	{
		this.studentName = name;
		this.rollNo = rollNo;
		this.marks = (float)marks;
	}
}