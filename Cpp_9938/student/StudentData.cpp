#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

class Student{

    private:
        int rollno;
        string studentName;
        string subjectName;
        double subjectMark;

    public:
        static int current_rollno;

    Student()
    {
        this -> rollno = ++current_rollno;
    }

    Student(string studentName,string subjectName,double subjectMark)
    {
        this->rollno = ++current_rollno;
        this->studentName = studentName;
        this->subjectName = subjectName;
        this->subjectMark = subjectMark;
    }

    int getRollNO()
    {
        return this->rollno;
    }

    string getstudentName()
    {
        return this->studentName;
    }

    string getsubjectName()
    {
        return this->subjectName;
    }

    double getsubjectMark()
    {
        return this->subjectMark;
    }

    void setRollNO(int rollno)
    {
        this->rollno = rollno;
    }

    void setStudentName(string studentName)
    {
        this->studentName = studentName;
    }

    void setSubjectName(string subjrctName)
    {
        this->subjectName = subjrctName;
    }

    void setSubjectMark(double setSubjectMark)
    {
        this->subjectMark = subjectMark;
    }

};

int Student::current_rollno = 0;

int main()
{

    Student s[100];
    int n,i;
    int rollno;
    string studentname;
    string subjectName;
    double subjectMark;

    cout<<"\t\t Enter the size : ";
    cin>>n;

    cout<<"Enter the Data :\n";

    for(i=0;i<n;i++)
    {

        cout<<"Enter Details For Student "<<i+1<<endl;

        cout<<"\n\t Student Name : ";
        cin>>studentname;

        cout<<"\t Subject Name : ";
        cin>>subjectName;

        cout<<"\t Subject MARK : ";
        cin>>subjectMark;

        s[i].setStudentName(studentname);
        s[i].setSubjectName(subjectName);
        s[i].setSubjectMark(subjectMark);

    }

    cout<<"\n==============================\n"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"\t"<<s[i].getRollNO()<<" "<<s[i].getstudentName()<<endl;
    }
}
