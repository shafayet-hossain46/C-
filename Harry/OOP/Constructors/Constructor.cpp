#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        // Creating a Constructor
        // Constructor is a special member function with the same name as of the class.
        //It is used to initialize the objects of its class
        //It is automatically invoked whenever an object is created
        Complex(); // Constructor declaration

        void printNumber(){
            cout<<"Your number is "<<a<< " + "<<b<<endl;
        }
};


Complex::Complex(){ // ----> This is a default constructor as it takes no parameters
    a = 5;
    b = 6;
    cout<<"Hello world!"<<endl;
}


int main()
{
    Complex a,b;
    a.printNumber();
    b.printNumber();
    return 0;
}