
class Lec16_P02_Android{
	public static void main(String[] args) {
		
		Android a = new Android();

		a.display();

		Android a2 = new Android("gk",34);
		a2.display();
	}
}

class Android{

	String name;
	int activies;

	public Android()
	{
		name = "sumit";
		activies = 20;
	}

	public Android(String name,int activies)
	{
		this.name = name;
		this.activies = activies;
	}

	void display()
	{
		System.out.println("name : "+name);
		System.out.println("activies : "+activies);
	}
}