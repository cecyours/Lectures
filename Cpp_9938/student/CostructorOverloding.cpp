#include<iostream>
#include<string>

using namespace std;

class Student{

    int rollNo;
    string name;

    public:
    // @default_constructer

     Student()
     {

        rollNo = 0;
        name = " NULL ";

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

        cout<<"\t Wellcome "<<name<<" ,\t rollNo : "<<rollNo<<endl;

     }

};

int main()
{

    Student s1,s2(12," GK "),s3(s2);

    s1.display();
    s2.display();
    s3.display();

}