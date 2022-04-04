
/**
x++,
++x

*/
class CH05_P02_incrementsIn{

	public static void main(String[] args) {
		// pre increment 

		int x = 10;
		System.out.println("during pre increment : "+(++x)); // 11
		System.out.println(" after pre increment : "+(x)); // 11
	

		System.out.println("during post increment : "+(x++)); // 11
		System.out.println(" after post increment : "+(x)); // 12
	}


}