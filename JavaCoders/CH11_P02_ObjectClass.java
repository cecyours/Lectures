
class CH11_P02_ObjectClass {
	public static void main(String[] args) {
			
			Student s1 = new Student();
			Student s2 = new Student();

			System.out.println("hashCode of s1 : "+s1.hashCode());
			System.out.println("hashCode of s2 : "+s2.hashCode());

			System.out.println("to String : "+s1.toString());
	}
}

class Student {

	void display()
	{
		System.out.println("Hello World .. ");
	}

	public String toString()
	{
		return super.toString()+" hi";
	}
}