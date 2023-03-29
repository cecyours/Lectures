public class encapulation {
    public static void main(String [] args)
    {
        ad g = new ad();
        System.out.println(g.getData());
        g.getData();
        System.out.println(g.getdata());
        g.getdata();
    }
}
class ad
{
    private int x=2;
    private String y="Aditya";
    public int getData()
    {
        return x;
    }
    public String getdata()
    {
        return y;
    }
}

