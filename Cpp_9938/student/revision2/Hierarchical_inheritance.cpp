    #include <iostream>  
    using namespace std;  
    class A // Base class  
    {  
        public:  
        int x, y; // data members  
            void getdata() // to input x and y  
            {  
                cout<< "Enter value of x and y:\n";  
                cin>> x >> y;  
            }  
    };  
    class B : public A //B is derived from class base  
    {  
        public:  
        void product()  
        {  
            cout<< "\nProduct= " << x * y <<endl; // Perform product  
        }  
    };  
    class C : public A //C is also derived from class base  
    {  
        public:  
        void sum()  
        {  
            cout<< "\nSum= " << x + y; // Perform sum  
        }  
    };  
    int main()  
    {  
        B obj1; //object of derived class B  
        C obj2; //object of derived class C  
        
        obj1.getdata(); // input x and y   
        
        obj1.product();  
        
        obj2.getdata();  
        
        obj2.sum();  
        
        return 0;  
    }  