
using namespace std;
extern int n=0;
void get_a(int a[])
{
    int i;
    cout<<"Enter the size :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter a[ "<<i<<" ] = ";
        cin>>a[i];
    } 
}

int find_max(int a[])
{
    int max = a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }

    return max;
}