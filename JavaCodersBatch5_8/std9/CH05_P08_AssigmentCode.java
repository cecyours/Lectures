


class CH05_P08_AssigmentCode{
	public static void main(String[] args) {
	
		int a,b;

		a = 10;
		b = 4;
		a += b; // a = a+b
		System.out.println("+= : "+a);	// 14	
		
		a-=b; // a = a-b
		System.out.println("-= : "+a);	// 10

		a/=b; // a = a/b
		System.out.println("/= : "+a);	 // 2

		b = 4;
		a = 2;
		a = a << b; // a= a<<b;
		/*
			c = a*2^b
		*/
		System.out.println("<<= : "+a);	 // 2

		b = 2;
		a = 16;
		a >>= b; // a= a<<b;
		/*
			c = a*2^b
		*/
		System.out.println(">>= : "+a);	 // 2

		a = 6;
		b = 12;
		a&=b;
		

	}
}