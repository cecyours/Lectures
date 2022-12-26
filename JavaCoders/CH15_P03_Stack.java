import java.io.*;
import java.util.*;

class CG15_P03_Stack{

	public static void main(String[] args) throws Exception{

		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));


			int choice;

			String bookName;
			Task t = new Task();
			do{

				System.out.println("   Press 1 to push : ");
				System.out.println("    Press 2 to pop : ");
				System.out.println("   Press 3 to peek : ");
				System.out.println("Press 4 to isEmpty : ");
				System.out.println(" Press 5 to search : ");
				System.out.println("Press 6 to display : ");
				System.out.println("   Press 7 to exit : ");

				  System.out.print("  Press the choice : ");
				  	choice = Integer.parseInt(br.readLine());

				  	System.out.println();
				  	switch(choice)
				  	{
				  		case 1 : 
					  		System.out.print("Enter the bookName  to push : ");
					  		bookName = br.readLine();
					  		t.push(bookName); 
				  		break;

				  		case 2:
				  			bookName = t.pop();
				  			System.out.println(bookName+" is removed(pop)");
				  		break;

				  		case 3:
				  			bookName = t.peek();
				  			System.out.println(bookName+" is last element ..");
				  		break;

				  		case 4:
				  			System.out.println("isEmpty : "+t.isEmpty());
				  		break;


				  		case 5:
				  			System.out.print("Enter the bookName  to push : ");
					  		bookName = br.readLine();
					  		int pos = t.search(bookName); 
					  		System.out.println("position : "+pos);
					  	break;

					  	case 6:
					  		t.display();
					  	break;

					  	case 7:
					  		System.out.println("exit.....");
					  		System.exit(0);
					  	default:
					  		System.out.println("invalid ");

				  	}


			}while(true);

		
	}
}

class Task{

	Stack<String> myList;

	public Task()
	{
		myList = new Stack<String>();
	}

	void display()
	{

		ListIterator li = myList.listIterator();

		int i = 1;
		while(li.hasNext())
		{
			System.out.println(i+" : "+li.next());
			i++;
		}
	}

	void push(String data)
	{
		myList.push(data);
	}

	boolean isEmpty()
	{
		return myList.isEmpty();
	}

	String peek()
	{
		return myList.peek();
	}

	String pop()
	{
		return myList.pop();
	}

	int search(String bookName)
	{
		return myList.search(bookName);
	}


 }
