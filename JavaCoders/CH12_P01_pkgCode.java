

/*first compile tthis : 

javac -d . fileName.java
*/
package CH12_MyPkgs;
public class CH12_P01_pkgCode{
	
	public void display(String name)
	{
		System.out.println("welcome "+name);
	}

	public void table(int n)
	{
		for(int i=1;i<=10;i++)
		{
			System.out.println(n+" x "+i+" = "+(i*n));
		}
	}
}