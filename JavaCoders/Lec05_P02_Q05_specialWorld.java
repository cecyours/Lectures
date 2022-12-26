
import java.util.*;
class Lec05_P02_Q05_specialWorld  {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter a word : ");
		String word = sc.nextLine();

		word = word.toUpperCase();

		System.out.println("word : "+word);

		char ch1 = word.charAt(0);
		char ch2 = word.charAt(word.length()-1);

		if(ch1==ch2)
		{
			System.out.println("special word : "+word);
		}
		else{
			System.out.println("not a special word : "+word);
		}

	}
}