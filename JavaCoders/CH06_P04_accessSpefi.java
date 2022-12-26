
// public : all places..
// default : same folder mai kahi pe bhi
// private : same class
// protected : few class -> permission.. 
public class CH06_P04_accessSpefi  {
		

	public static void main(String[] args) {
			
			Task2 t2 = new Task2();
			t2.display();
	}	

}

 class Task{
	 String name="Gk is here.";
}

class Task2{
	void display()
	{
			Task t = new Task();
			System.out.println(t.name);
	}
}

