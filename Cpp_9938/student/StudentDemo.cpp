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

        cout<<"\n\t\t***Enter details***\n\n"<<this->rollNo<<endl;

        cout<<"\n\tEnter name : ";
        cin>>name;

        cout<<"\n\n\tEnter marks for 3 subjects : ";
        cin>>marks[0]>>marks[1]>>marks[2];

        total = 0;
        for(int i=0;i<3;i++)
        {

            total += marks[i];

        }

        avg = total/3;

    }

    void getData()
    {

        cout <<"\t\n\nrollNo : "<<rollNo<<" \t\nname : "<<name;
        for(int i=0;i<3;i++)
        {

            cout<<" "<<marks[i];

        }

        cout<<"\t\nTotal : "<<total<<"\t\nAvrage  : "<<avg;

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