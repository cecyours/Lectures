#include <iostream>
using namespace std;

// Parent class
class MyClass {
  public: 
    void myFunction() {
      int a = 50;
    }
};

// Child class
class MyChild: public MyClass {
    public:
      void myFunction2(){
        int b = 50;
      }
};

// Grandchild class 
class MyGrandChild: public MyChild {
    public:
      void myFunction3(){
            int ans;
            ans = a + b;
      }
};

// GreatGrandchild class 
class MyGreatGrandChild: public MyGrandChild {
    public:
      void myFunction4(){
            cout<<ans;
      }
};

int main() {
  MyGreatGrandChild myObj;
  myObj.myFunction();
  myObj.myFunction2();
  myObj.myFunction3();
  myObj.myFunction4();
  return 0;
}
