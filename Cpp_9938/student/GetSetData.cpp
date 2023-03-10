    #include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

class Book{

    private:
    // float width,height;

    int BookID;
    string bookName;
    string bookOuter;
    int bookPrice;

    public:
    static int current_BookID;

    Book()
    {
        this->BookID = ++current_BookID;
    }

    Book(string bookName,string bookOuter,int bookPrice)
    {
        this->BookID = ++current_BookID;
        this->bookName = bookName;
        this->bookOuter = bookOuter;
        this->bookPrice = bookPrice;
    }

    int getBookID()
    {
        return this->BookID;
    }
    string getbookName()
    {
        return this->bookName;
    }
    string getbookOuter()
    {
        return this->bookOuter;
    }
    int getbookPrice()
    {
        return this->bookPrice;
    }

    void setBookID(int BookiD)
    {
        this->BookID = BookID;
    }
    void setbookName(string bookName)
    {
        this->bookName = bookName;
    }
    void setbookOuter(string bookOuter)
    {
        this->bookOuter = bookOuter;
    }
    void setbookPrice(int bookPrice)
    {
        this->bookPrice = bookPrice;
    }

};

int Book::current_BookID = 0;
int main()
{
    Book b[10],temp;
    int n,i;
    int BookID;
    string bookName;
    string bookOuter;
    int bookPrice;

    cout<<"Enter the size : ";
    cin>>n;

    cout<<"Enter the Data : \n";

    for(i=0;i<n;i++)
    {
        cout<<"Enter details for BOOK "<<i+1<<endl;
        cout<<"\n\t\tBook ID : ";
        cin>>BookID;

        cout<<"\n\t\tbookName : ";
        cin>>bookName;

        cout<<"\t\tbookOuter Name : ";
        cin>>bookOuter;

        cout<<"\t\tbookPrice : ";
        cin>>bookPrice;

        b[i].setbookName(bookName);
        b[i].setbookOuter(bookOuter);
        b[i].setbookPrice(bookPrice);

    }

    for(i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(b[i].getbookPrice()>b[j].getbookPrice())
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    cout<<"==================================="<<endl;

    for(i=0;i<n;i++)
    {
        cout<<b[i].getBookID()<<" "<<b[i].getbookName()<<" "<<b[i].getbookOuter()<<" "<<b[i].getbookPrice()<<endl;
    }
}