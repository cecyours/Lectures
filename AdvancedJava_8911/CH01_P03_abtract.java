


class CH01_P03_abtract{
    
    public static void main(String[] args) {
        
        User u = new User();

        if(u.isValidBalance(10))
        {
            System.out.println("Done");
        }
        else
        {
            System.out.println("invalid balance...");
        }
    }
}

abstract class Bank{

    double balance = 9000;

    abstract  public boolean isValidBalance(double withdraw);

}

class User extends Bank{

    public boolean isValidBalance(double withdraw)
    {
        if(balance-withdraw<0)
            return false;
        return true;
    }
}