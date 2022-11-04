
class CH06_P02_constructor  {
	public static void main(String[] args) {
		 
		new Task("SUMIT"); //t3
		new Task(20);//t2
		new Task();
		new Task(8,9,8+9); //?
		//t.display();
  
		Task t3 = new Task();
	}
}

class Task{

	public Task() // t1
	{
		System.out.println("Happy Me..");
	}

	public Task(int a) //t2
	{

		System.out.println("Hiii");
	}


	public Task(String code) //t3
	{
		System.out.println("Bye bye..");
	}

	public Task(int a,int b,int c)
	{
		System.out.println(a+" + "+b+" = "+c);
	}
	 
}