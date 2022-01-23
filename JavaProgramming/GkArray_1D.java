class GkArray_1D {
	public static void main(String[] args) {
		
		ArrayGk obj = new ArrayGk();
		obj.display();
	}
}
class ArrayGk{

	int a[] = {1,2,3,4,5,6,7};
	int i;

	void display()
	{
		for(i=0;i<a.length;i++)
		{
			System.out.println("Hello "+a[i]);
		}
	}
}