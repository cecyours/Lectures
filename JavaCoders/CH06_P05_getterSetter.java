
import java.io.*;
class CH06_P05_getterSetter {
	public static void main(String[] args) throws Exception {
		
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));

		Task t = new Task();
		System.out.print("Enter your name");
		t.setName(br.readLine());

		System.out.print("Enter your rollNO : ");
		t.setRollNo(Integer.parseInt(br.readLine()));
		

		System.out.println("weclome "+t.getName());
		System.out.println("your rollNO : "+t.getRollNo());

	}
}
class Task{

	private String name;
	private int rollNO;

	public void setName(String name)
	{
		
		this.name = name;
	}

	public void setRollNo(int rollNO)
	{
		this.rollNO = rollNO;
	}

	public String getName(){
		return this.name;
	}

	public int getRollNo()
	{
		return this.rollNO;
	}



}