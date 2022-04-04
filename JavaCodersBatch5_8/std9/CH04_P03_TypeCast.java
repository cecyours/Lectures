
class CH04_P03_TypeCast{
	public static void main(String[] args) {
		
		// small -> large : implicit | int -> float

		int i = 30;
		float f = i;

		System.out.println("implicit int : "+i+"\t float : "+f);

		// large -> small : explicit : float-> int
		f = 49f;
		i = (int)f;// 
		System.out.println("explicit int : "+i+"\t float : "+f);


	}
}