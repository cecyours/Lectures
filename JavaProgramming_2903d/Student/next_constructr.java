public  class next_constructr {
    public static void main(String[] args) throws Exception
    {
             kal k= new kal();
        kal k1= new kal(9);
        k1.d();
    }    
    }
    class kal
    {
        int a = 2;
        int b = 4;
        int d_global;
        int c = a*b;
        
        kal()
    {
        System.out.println("c=" +c);
    }
    kal(int d)
    {
         d_global = d;
        }
        void d()
        
        {
            
            System.out.println("d_global=" +d_global);
    }
    }
