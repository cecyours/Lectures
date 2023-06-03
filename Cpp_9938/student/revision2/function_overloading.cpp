#include<iostream>
using namespace std;
class jjk
{
    public:
        void add(int x)
        {
            int ans = x +55;
            cout<<"first method ans is= "<<ans<<endl;
        }
        void add(int y, int z)
        {
            int ans = y+z;
            cout<<"second method ans is= "<<ans<<endl;

        }
        void add(int x, int y, int z)
        {
            int ans = x+y+z;
            cout<<"third method ans is= "<<ans<<endl;
        }
};
int main()
{
    jjk obj;
    obj.add(5);
    obj.add(9,5,6);
    obj.add(6,4);
    return 0;
}