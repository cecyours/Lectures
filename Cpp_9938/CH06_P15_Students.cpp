#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

class Student{

    private:
    int rollno;
    string studentName;
    string subjectName;
    double subjectMark;

    public:
    static int  current_rollno;

    Student()
    {
        this->rollno = ++current_rollno;
    }

    Student(string studentName,string subjectName,double subjectMark){

        this->rollno = ++current_rollno;
        this->studentName = studentName;
        this->subjectName = subjectName;
        this->subjectMark = subjectMark;
    }

    int getRollNo()
    {
        return this->rollno;
    }

    string getStudentName()
    {
        return this->studentName;
    }

    string getSubjectName()
    {
        return this->subjectName;
    }

    double getSubjectMark()
    {
        return this->subjectMark;
    }

    void setRollNo(int rollno)
    {
        this->rollno = rollno;
    }

    void setStudentName(string studentName)
    {
        this->studentName = studentName;
    }
    void setSubjectName(string subjectName)
    {
        this->subjectName = subjectName;
    }
    void setSubjectMark(double subjectMark)
    {
        this->subjectMark = subjectMark;
    }
};

int Student::current_rollno = 0;
int main()
{
    Student s[10],temp;
    int n,i;
    int rollno;
    string studentName;
    string subjectName;
    double subjectMark;

    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the data : \n";

    for(i=0;i<n;i++)
    {

        cout<< "Enter details for student "<<i+1<<endl;
        cout<<"Student Name : ";
        cin>>studentName;

        cout<<"Subject Name : ";
        cin>>subjectName;

        cout<<"subject marks : ";
        cin>>subjectMark;

        s[i].setStudentName(studentName);
        s[i].setSubjectName(subjectName);
        s[i].setSubjectMark(subjectMark);

    }
// sort logic


for(i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(s[i].getSubjectMark()<s[j].getSubjectMark())
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
}
    cout<<"-------------"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<s[i].getRollNo()<<" "<<s[i].getStudentName()<<endl;
    }

}