
public class ultimate_class_object {
    public static void main(String[] args) {
        employee emp = new employee();
        emp.getData();
        emp.z();
    }    
}
class employee
{
    int emp_num = 10;
    public void getData()
    {
        int emp_num = 20;
        System.out.println(emp_num);
        System.out.println(this.emp_num);                                                              
        
    }
    int emp1_num=100;
    
    public void z()
    {
        int emp1_num = 30;
        System.out.println("This is loacal variable= "+emp1_num);
        System.out.println("This is global variable= "+this.emp1_num);                                                              

        
    }
}