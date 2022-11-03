import java.io.*;


class CH06_P01_oops {
	
	public static void main(String[] args) throws Exception {
			
			BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			

			//TODO get info of Dog

			System.out.print("Enter the name : ");
			String name = br.readLine();

			System.out.print("Enter the color: ");
			String color = br.readLine();

			System.out.print("Enter the height : ");
			float height = Float.parseFloat(br.readLine());

			System.out.print("Enter the breed: ");
			String breed = br.readLine();

			Dog d = new Dog(name,color,height,breed);
			d.getData();


		}	
}

class Dog{
	//properties
	String name;
	String color;
	float height;
	String breed;

	public Dog()
	{
		// default
	}

	public Dog(String name,String color,float height,String breed)
	{
		this.name = name;
		this.color = color;
		this.height = height;
		this.breed = breed;
	}

	void getData()
	{

		System.out.println("name : "+name);
		System.out.println("color : "+color);
		System.out.println("height : "+height);
		System.out.println("breed : "+breed);
	}
}
// members(variable-properies) + methods(action-function) = class