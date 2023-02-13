

#include<iostream>
#include<ifstream>

using namespace std;

class Paper{
    
    private:
    float width,height;

    public:
        Paper()
        {
            cout<<"my ref A : "<<this<<endl;
        }
};

class Page : public Paper
{
    string description;
    int lines,paragraph,words;

    public:
    Page()
    {
            cout<<"my ref B : "<<this<<endl;

    }

   void setData(string fileName)
    {
        ifstream file(fileName);
    }

};
int main()
{
    Page p;
}
