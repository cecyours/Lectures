import java.io.*;
import java.util.*;
class GkNormalConstructors{
	public static void main(String[] args) {
			

			int a = 10;
			new Student();
			Student s = new Student("23",7);
		 	
		 	Scanner sc = new Scanner(System.in);
		 	new Student(new Scanner(System.in));
		 }	 
}
class Student{

	public Student()
	{
		System.out.println("#1 Hello World...");
	}
	public Student(int x)
	{
		System.out.println("#2 Hello World..."+x);
	}
	public Student(String cm)
	{
		System.out.println("#3 Hello World..."+cm);
	}
	public Student(int a,int i)
	{
		System.out.println("#4 Hello World..."+a+"\t"+i);
	}
	public Student(String a,int i)
	{
		System.out.println("#5 Hello World..."+a+"\t"+i);
	}
	public Student(Scanner s)
	{
		System.out.println("#6 Hello World...");
	}
}