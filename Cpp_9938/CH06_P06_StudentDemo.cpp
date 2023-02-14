

#include<iostream> 
#include<string>

using namespace std;

class Student{

    string name;
    int rollNo;
    float marks[3],avg,total;
     


    public:
        static int counter;
        Student()
        {
            counter++;
            rollNo = counter;
        }

    void setData()
    {
        cout<<"Enter details for student "<<this->rollNo<<endl;

        cout<<"Enter name  : ";
        cin>>name;

        cout<<"Enter marks for 3 subjects : ";
        cin>>marks[0]>>marks[1]>>marks[2];

        total = 0;
        for(int i=0;i<3;i++)
        {
            total += marks[i];
        }

        avg = total/3;
    }

    void getData(){
        cout<<"rollno : "<<rollNo<<" name : "<<name;
        for(int i=0;i<3;i++)
        {
            cout<<" "<<marks[i];
        }

        cout<<" "<<total<<" "<<avg;
    }
};

int Student::counter = 0;

int main()
{ 

    Student s1,s2,s3;

    s1.setData();
    s2.setData();
    s3.setData();


    s1.getData();
    s2.getData();
    s3.getData();
}