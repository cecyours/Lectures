
class CH11_P05_MultipleINheritance {
	public static void main(String[] args) {
		
		C c = new C();

		c.setName();
		c.getName();	
	}
}

public interface A{

	public void setName();
}
public interface B{
	public void getName();
}

/*
	A->C
	B->C
*/
class C implements A,B{

	String name;

	public void setName()
	{
		name = "SUmit";
	}

	public void getName()
	{
		System.out.println("welcome "+name);
	}
}