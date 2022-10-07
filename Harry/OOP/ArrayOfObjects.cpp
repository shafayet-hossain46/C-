#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(Complex o1, Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printComplexNumber(){
            cout<<"The complex number is : "<<a<<" + "<<b<<endl;
        }
}John, Mark, display;



int main(){
    Mark.setData(2, 3);
    Mark.printComplexNumber();
    John.setData(4, 5);
    John.printComplexNumber();
    display.setDataBySum(Mark, John);
    display.printComplexNumber();
    return 0;
}