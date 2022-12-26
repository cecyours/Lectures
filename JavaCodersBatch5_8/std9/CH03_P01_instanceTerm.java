
import java.util.*;
class CH03_P01_instanceTerm{

	public static void main(String[] args) {
		
		Scanner sc= new Scanner(System.in);
		Student s = new Student();

		System.out.print("Enter name: ");
		String myName = sc.nextLine();

		System.out.print("Enter marks : ");
		double myMarks = sc.nextDouble();

		s.setData(myName,myMarks);
		s.getData();

	}
}

class Student{

		String name;
		double marks;

		void setData(String x, double y) // set data
		{
			name = x;
			marks = y;
		}

		void getData() // display data
		{
			System.out.println("Hello "+name+"\t marks : "+marks);
		}
}