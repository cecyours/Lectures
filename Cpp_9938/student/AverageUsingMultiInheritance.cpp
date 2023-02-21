#include <iostream>
using namespace std;

class Student_detail
{
protected:
    int RNo, sum = 0, i, marks[5];

public:
    void detail()
    {

        cout << "Enter the RollNo : " << endl;
        cin >> RNo;

        cout << "Enter the marks of five subjects : " << endl;

        for (i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }

        for (i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }
    }
};

class sports_mark
{

protected:
    int S_mark;

public:
    void get_marks()
    {
        cout << "\n Enter the sports mark : ";
        cin >> S_mark;
    }
};

class Final_result : public Student_detail, public sports_mark
{
    int total, avg;

public:
    void display()
    {
        total = sum + S_mark;
        avg = total / 6;
        cout << "\n\n\t***  RollNo : "
             << RNo << "  ***"
             << "\n\n\t***  Grand Total : "
             << total << "  ***" << endl;
        cout << "\n\tAvarage Marks : " << avg;
    }
};

int main()
{
    Final_result re;

    re.detail();
    re.get_marks();
    re.display();
}