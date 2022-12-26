class CH11_abstarctClass  {
	public static void main(String[] args) {
		
		Code c = new Code();
		c.display();

	}
}

abstract class Task{

	abstract void display();
}

class Code extends Task{

	void display(){
		System.out.println("Hello World..");
	}
}	