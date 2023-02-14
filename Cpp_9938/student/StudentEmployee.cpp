#include<iostream>
#include<string>

using namespace std;

class Student{

    private:
        int Rollno;
        string name;


    public:
        Student()
        {
            
            Rollno = 0;
            name = "NULL";

        }

        void display()
        {
            cout<<"\n\n\t Roll no => "<<Rollno<<"\t name  => "<<name<<endl<<endl;
        }
};
class Employee{

    private:
        int EMP_no;
        string EMP_name;

    
    public:
        Employee()
        {

            EMP_no = 101;
            EMP_name = " ALAN ";

        }

        void display()
        {
            cout<<"\n\t EMPLOYEE_NO => "<<EMP_no<<"\t EMPLOYEE_NAME => "<<EMP_name;
        }

};
int main()
{
    Student  s;

    Employee  E;

    s.display();

    E.display();


}