
import java.util.*;

class Lec12_p01  {
	public static void main(String[] args) {
			Scanner s=new Scanner(System.in);
			System.out.print("enter the string : ");
			
			String st=s.nextLine();
			
			int len=st.length();
			
			char ch;
			
			for(int i=97;i<=122;i++)
			{
				for(int j=0;j<len;j++)
				{
				ch=st.charAt(j);
				if(ch==(char)i||ch==(char)(i-32))
				{
				System.out.print(ch);
				}
			}
		}
		}	
}