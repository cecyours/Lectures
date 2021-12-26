
import java.io.*;
class CH02_P04_BufferedReaderStudentData{
	public static void main(String[] args) throws IOException {
		// Scanner sc = new Scanner(System.in);
 
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		Student s = new Student();

		System.out.print("     Enter rollNo : ");
		s.rollNo =  Integer.parseInt(br.readLine());

		System.out.print("       Enter Name : ");
		s.name = br.readLine();

		System.out.print("      Enter marks : ");
		s.marks = Float.parseFloat(br.readLine());
		
		System.out.print("Enter subjectName : ");
		s.subjectName = br.readLine();

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