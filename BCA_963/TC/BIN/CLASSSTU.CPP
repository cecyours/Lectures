#include<iostream.h>
#include<conio.h>
 class Student{
	int rollno;
	char name[100];
////////////////////////////////////
	       public:
		void setData()
		{
		    cout<<"Enter the rollno : ";
		    cin>>rollno;
		    cout<<"Enter the name : ";
		    cin>>name;
		}
		void getData()
		{
			cout<<"Rollno : "<<rollno<<"\t Name : "<<name<<endl;
		}
};

void main()
{
	Student s;
clrscr();
	s.setData();
	s.getData();
getch();
}

