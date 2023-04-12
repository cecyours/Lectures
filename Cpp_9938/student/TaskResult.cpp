#include<iostream>
using namespace std;

class Student{

    string Name;
    int RollNo;
    float marks[5],avg,total;

    public:
        static int counter;

        Student()
        {

            counter++;
            RollNo = counter;

        }
    
    void setData()
    {

        cout<<"\n\t\t*****Enter Details*****\n\n"<<this->RollNo<<endl;

        cout<<"\n\tEnter Name : ";
        cin>>Name;

        cout<<"\n\n\tEnter marks for 5 Subjects : ";
        cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];

        total = 0;

        for(int i=0 ; i<5 ; i++ )
        {
            total += marks[i];
        }

        avg = total/5;

    }

    void getdata()
    {

        cout<<"\n\n\tROLLNO : "<<RollNo<<" \n\tNAME : "<<Name;

        for(int i = 0 ; i < 5 ; i++)
        {
            cout<<" "<<marks[i];
        }

        cout<<"\n\tTOTAl : "<<total<<"\n\tAVERAGE : "<<avg;

    }
};

int Student :: counter = 0;

int main()
{

    Student s1,s2,s3;

    s1.setData();
    s2.setData();
    s3.setData();

    s1.getdata();
    s2.getdata();
    s3.getdata();

}