
class Gk_Inheritance {
	public static void main(String[] args) {
	
		B obj = new B();
		obj.display();	

	}
}
// A -> B
class A{
	String name = "Vaibhav";
	void display()
	{
		System.out.println("Hello World. !!!"+this);	
	}
}
class B extends A{

	String name = "Suraj";
	void display()
	{
		super.display();
		 		System.out.println(this.name+"\t"+super.name+"\t"+name+"Bye World. !!!"+this);	
	}
}	