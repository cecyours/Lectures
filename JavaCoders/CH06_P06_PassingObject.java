
import java.io.*;
class CH06_P06_PassingObject  {
	
	public static void main(String[] args) throws Exception {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		Student s = new Student();

		System.out.print("Enter the name : ");
		s.name = br.readLine();

		s.marks = new double[3];
		System.out.println("Enter the marks : ");

		String subject[] = {"maths","science","eng"};
		for(int i=0;i<3;i++)
		{
			System.out.print("enter marks  for subject "+subject[i]+" : ");
			s.marks[i] = Double.parseDouble(br.readLine());
		}

		Task.calculateResult(s);
	}
}

class Student{

	  String name;
	  double marks[];

 	
 		void setData(String name,double marks[])
 		{
 			this.name = name;
 			this.marks = marks;
 		}

 		void display()
 		{
 			System.out.println("welcome "+name);
 			for(double d : marks)
 			{
 				System.out.println("marks : "+d);
 			}
 		}


}

class Task{

	static void calculateResult(Student s) // passing object
	{

		System.out.println(" ======== RESULT ========= ");
		System.out.println("welcome "+s.name);

		double sum = 0;
			for(double d : s.marks)
 			{
 				System.out.println("marks : "+d);
 				sum+=d;
 			}

 			double pr = sum/3;
 			System.out.println("total "+sum+"\tpr "+pr);
	}
}