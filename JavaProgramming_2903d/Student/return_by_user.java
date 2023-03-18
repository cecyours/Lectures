public class return_by_user {
    public static void main(String [] args)
    {
        user x = new user();
        int b = x.i1(3,7);
        System.out.println("a="+3+ "+" +7);
        System.out.print("b=" +b);

    }
}
class user
{
    public int i1(int num1, int num2)
    {
        int a = num1 +num2;
        return a;
    }
}