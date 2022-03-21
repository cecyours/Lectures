import java.util.*;
class Employe{
	public static void main(String[] args) {

		Scanner sc= new Scanner(System.in);
		employe s = new employe();

		System.out.print("Enter name: ");
		String myName = sc.nextLine();

		System.out.print("Enter salary : ");
		double mysalary = sc.nextDouble();

		s.setData(myName,mysalary);
		s.getData();
	}
}

class employe{
	String name ;
	double salary ;

	void setData(String x, double y )
	{
      name = x;
      salary = y;
	}
      void getData()
    {
       System.out.println("Hello "+name+"\t salary : "+salary);

    }
}  
