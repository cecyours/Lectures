#include<iostream>
using namespace std;

int main()
{
    int a[10][10][10][10][10][10],i,j,k,l,m,n;
    int counter = 0;                    
    int q,w,e,r,t,y;

    cout<<" Enter i : j : k : l : m : n => \n";

    cin>>i>>j>>k>>l>>m>>n;
    

    for(q=0;q<i;q++)
    {
        for(w=0;w<j;w++)
        {
            for(e=0;e<k;e++)
            {
                for(r=0;r<l;r++)
                {
                    for(t=0;t<m;t++)
                    {
                        for(y=0;y<n;y++)
                        {

                            a[i][j][k][l][m][n] = ++counter;

                        }
                    }
                }
            }
        }
    }



    for(q=0;q<i;q++)
    {
        for(w=0;w<j;w++)
        {
            for(e=0;e<k;e++)
            {
                for(r=0;r<l;r++)
                {
                    for(t=0;t<m;t++)
                    {
                        for(y=0;y<n;y++)
                        {

                            cout<<" \t "<<a[i][j][k][l][m][n];

                        }


                        cout<<endl;


                    }
                }
            }
        }


        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;


    }
}