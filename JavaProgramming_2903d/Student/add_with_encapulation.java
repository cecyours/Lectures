public class add_with_encapulation {
    public static void main(String [] args)
    {
        lemon l = new lemon();
        int ans = l.getData(6,8,5);
        System.out.println("d=" +ans);
    }  
}
class lemon
{
    private int a;
    private int b;
    private int c;

    public  int getData(int a, int b, int c)
    {
        int d = a + b + c;
        return d;
    }
    
}