#include<iostream>
using namespace std;
class stark      // The class
{
    public:          // Access specifier
       int num;      // Attribute (int variable)
       string var;   // Attribute (string variable)
};

int main()
{
    stark obj;   // Create an object of MyClass
 
// Access attributes and set values
    obj.num = 10; 
    obj.var = "Vaibhav"; 
 
// Let's printthe value
cout << obj.num <<endl;
cout << obj.var; 
 
    return 0;
}