
class Std10_class_Object{
	public static void main(String[] args) {
		
		Student s1 = new Student();
		
		// S.o.p("Enter roll No : ")
		s1.rollno = // sc.nextInt();

		s1.name = "rohit";
		s1.marks = 89.33;
		s1.display();

		Student s2 = new Student();
		s2.rollno = 32;
		s2.name = "Prince";
		s2.marks = 87.42;
		s2.display();

		s1.name = "Gk";
		s1.display();// 
	}
}

class Student {
	int rollno;
	String name;
	double marks;


	void display(){
		System.out.println("name : "+name+"\t roll No : "+rollno+"\t marks : "+marks+"/100");
	} 
}