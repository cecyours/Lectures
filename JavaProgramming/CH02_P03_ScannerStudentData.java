
import java.util.*;
class CH02_P03_ScannerStudentData{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		Student s = new Student();

		System.out.print("     Enter rollNo : ");
		s.rollNo = sc.nextInt();

		System.out.print("       Enter Name : ");
		s.name = sc.nextLine();

		System.out.print("      Enter marks : ");
		s.marks = sc.nextFloat();
		
		System.out.print("Enter subjectName : ");
		s.subjectName = sc.nextLine();

		

		System.out.println("       Name : "+s.name);
		System.out.println("     rollNo : "+s.rollNo);
		System.out.println("subjectName : "+s.subjectName);
		System.out.println("      marks : "+s.marks);


	}
}

class Student{
	int rollNo;
	String name,subjectName;
	float marks;
}