

#include<iostream>
#include<fstream>

using namespace std;

class Paper{
    
    private:
    float width,height;

    public:
        Paper()
        {
            cout<<"my ref A : "<<this<<endl;
        }

        void setheight(float height)
        {

            this->height = height;
        }
        float getheight()
        {
            return this->height;
        }
    
    void setWidth(float width)
    {
        this->width = width;
    }

    float getWidth()
    {
        return this->width;
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
        setWidth(299);
        setheight(199);
        lines = 1   ;
        words = 1;
        paragraph = 1;
        ifstream file(fileName);

        int ch;

        char data[100];
        int i=0;
        while((ch=file.get())!=-1)
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
            cout<<endl<<endl<<"\t | width : "<<getWidth()<<" | "<<"\t | height : "<<getheight()<<" | "<<endl;
            cout<<"\n\n\t  Lines : [ "<<lines<<" ] \t  Words : [ "<<words<<" ] \t  Paragraph : [ "<<paragraph<<" ] "<<endl;

    }
};
int main()
{
    Page p;

    p.setData("README.md");
    p.getData();
}
