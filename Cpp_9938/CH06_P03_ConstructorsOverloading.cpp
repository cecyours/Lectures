#include<iostream>
#include<string>
using namespace std;
class Student{

    int rollNo;
    string name;

    public:
    // @default_constructor
     Student()
        {

            rollNo = 0;
            name = "NULL";
        }
    
    // @paremeterize_contructor
    Student(int rollNo,string name)
    {
        this->rollNo = rollNo;
        this->name = name;
    }

    // @copy_constructor

    Student(Student &s)
    {
        this->name = s.name;
        this->rollNo = s.rollNo;
    }
    void display()
    {
        cout<<"welcome "<<name<<" , rollNo : "<<rollNo<<endl;
    }
};
int main()
{
    Student s1,s2(12,"yash"),s3(s2);

    s1.display();
    s2.display();   
    s3.display();

}