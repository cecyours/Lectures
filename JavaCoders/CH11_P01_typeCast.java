
class CH11_P01_typeCast  {
	public static void main(String[] args) {
		
			/*small to large : widening type casting , implicti type casting.*/

			int i = 10;
			float f = 39.5f;

			f = i; // int to float : widening

			System.out.println("Hello There : "+f);


			/*large to small : narrowing : explicit type casting.*/

			f = 37.24f;
			i = (int)f; // explicit

			String me = f+"";
			System.out.println("Hello World.. : "+i);
			System.out.println("Hello World.. : "+me);



	}
}

