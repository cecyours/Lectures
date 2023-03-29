public class parametr_class {
    public static void main(String[] args) {
        std10 std = new std10();
        std.mango(10,10 );
    }
    
}
class std10
{
    public void mango(int num1, int num2)
    {
        int addition = num1 + num2;
        System.out.print("Sum of num1 and num2 is= "+addition);
    }
}
