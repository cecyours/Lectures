
class Lec09_P02_MultipleInheritance {
	public static void main(String[] args) {
		
		Student s = new Student();
		s.name = "Sumit";
		s.autherName = "tagor";
		s.price = 392;
		s.bookName = "Hunger the Kill";

		s.display();
	}
}

class Book{
	String bookName;
	double price;
}

class Author extends Book{
	String autherName;
}

class Student extends Author{
	String name;

	void display()
	{
		System.out.println( "Book Name : "+bookName);
		System.out.println("     price : "+price);
		System.out.println("autherName : "+autherName);
		System.out.println("      name : "+name);
	}
}