#include<iostream>
#include<string>

using namespace std;

class Student{

    private:
        int RollNo ;
        string name ;

    public:

        Student()
        {

            RollNo = 0;
            name = "NULL";

        }

        void display()
        {
            cout<<"\n\n\t\t***STUDENT DATA***\n";

            cout<<"\n\t Roll no => "<<RollNo<<"\t name => "<<name<<endl;
        }

    // @paremeterize
    Student(int RollNo,string name)
    {

        this->RollNo = RollNo;
        this->name = name;

    }

    // @copy
    Student(Student &s)
    {
        this->name = s.name;
        this->RollNo = s.RollNo;
    }

};

class Employee{

    private:
        int EMP_ID;
        string Emp_name;
        string EMP_Dep;
        float Salary;

        public:
            Employee()
            {

                EMP_ID = 1001;
                Emp_name = " ALAN ";
                EMP_Dep = "USA";
                Salary = 30000.00;

            }

            // @paremeterize
            Employee(int EMP_ID,string EMP_name,string EMP_Dep,float Salary)
            {
                this->EMP_ID = EMP_ID;
                this->Emp_name = EMP_name;
                this->EMP_Dep = EMP_Dep;
                this->Salary = Salary;

            }

            // @copy
            Employee(Employee &e)
            {
                this->EMP_ID = e.EMP_ID;
                this->EMP_Dep = e.EMP_Dep;
                this->Emp_name = e.Emp_name;
                this->Salary = e.Salary;

            }

            void display()
            {
                cout<<"\n\n\t\t***EMPLOYEE DATA***\n";

                cout<<"\n\t ID => "<<EMP_ID<<"\n\t Name => "<<Emp_name<<"\n\t Department => "<<EMP_Dep<<"\n\t Salary : "<<Salary<<endl;
            }
};
int main()
{

    Student s1,s2(101,"GK"),s3(s1);
    Employee e1,e2(1,"Raj","USA",899),e3(e2);

    s1.display();
    s2.display();
    s3.display();

    e1.display();
    e2.display();
    e3.display();

}