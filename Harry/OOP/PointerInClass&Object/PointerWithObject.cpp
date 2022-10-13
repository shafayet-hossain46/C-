#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void setData(int a, int b){
            real = a; 
            imaginary = b;
        }
        void getData(){
            cout << "The vale of real is: "<<real<<endl;
            cout << "The vale of imaginary is: "<<imaginary<<endl;
        }
};


int main()
{
    // Complex c1;
    // Complex* ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(4,5);
    ptr->setData(6,7); // It will be working like the previous line.

    // (*ptr).getData();
    ptr->getData();


    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(6,7); 
    ptr1->getData();
    return 0;
}