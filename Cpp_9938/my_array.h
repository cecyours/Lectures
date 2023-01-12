
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
int find_min(int a[])
{
    int min = a[0];

    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
        }
    }
    return min;
}

void reverse(int a[])
{
    int j,temp;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        temp = a[i];
        a[i]= a[j];
        a[j] = temp;
     }
}

void display(int a[])
{
    for(int i=0;i<n;i++)
    {
        cout<<" a [ "<<i<<" ] = "<<a[i]<<endl;
    }
}