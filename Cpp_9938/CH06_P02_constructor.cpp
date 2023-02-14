#include<iostream>
#include<string>
using namespace std;

// need of contructor

class Student{
    private:
        int rollNo;
        string name;
    
    public:
        Student()
        {
            rollNo = 0;
            name = "Null";
        }
        

        void display()
        {
            cout<<"roll no "<<rollNo<<"\t name : "<<name;
        }
};

int main()
{
    Student s;
    

    s.display();
}