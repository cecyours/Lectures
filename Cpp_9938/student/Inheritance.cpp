
#include<iostream>
#include<fstream>

using namespace std;

class Paper{

    private:
        float width ,height ;

    public:
        Paper()
        {

            cout<<" My Ref A : "<<this<<endl;
        
        }

        void setheieht(float height)
        {

            this->height = height ;

        }

        float getheight()
        {
            
            return this->height;

        }

        void setwidth(float width)
        {

            this->width = width;

        }

        float getwidth()
        {

            return this-> width;

        }
};

class Page : public Paper 
{
    string description;
    int lines,paragraph,words;

    public:
    Page()
    {

        cout<<" My Ref B : "<<this<<endl;

    }
    void setData(string fileName)
    {

        setwidth(999);
        setheieht(899);
        lines = 1;
        words = 1;
        paragraph =1;
        ifstream file(fileName);

        int ch;

        char data[100000];
        int i =0;
        while((ch = file.get())!=-1)
        {

            cout<<(char)ch;
            data[i] = (char)ch;
            if(ch=='\n')
            {
                lines++;
            }
            if(ch==' ')
            {
                words++;
            }
            if(ch=='\t')
            {
                paragraph++;
            }

            i++;

        }

        description.append(data);
        
    }

    void getData()
    {
        cout<<endl<<endl<<"\t | width : "<<getwidth()<<" | "<<"\t | height : "<<getheight()<<" | "<<endl;
        cout<<"\n\n\t Lines : [ "<<lines<<" ] \t Words : [ "<<words<<" ] \t Paragraph : [ "<<paragraph<<" ] "<<endl;
    }
};

int main()
{
    Page p;

    p.setData("demo1.md");
    p.getData();
}
    