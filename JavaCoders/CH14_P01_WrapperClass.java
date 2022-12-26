
class CH14_P01_WrapperClass {
	public static void main(String[] args) {
	
		Integer i = 65;

		byte b = i.byteValue();

		System.out.println("byte value : "+b);


		Character ch = 'a';

		char c = ch.charValue();
		System.out.println("Character : "+c);

		ch = 'p';
		System.out.println("is digit : "+Character.isDigit(ch));

	}
}
