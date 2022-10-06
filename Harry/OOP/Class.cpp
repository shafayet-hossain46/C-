#include<iostream>
using namespace std;
class Employee {
    private: 
        int a, b, c; // These are the private variables which can't be accessed directly, only something from inside the class can access these.
    public:
        int d, e; // Public variables, Can be accessed directly.
        void setData(int a1, int b1, int c1);
        void getData(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
            cout<<"The value of d is : "<<d<<endl;
            cout<<"The value of e is : "<<e<<endl;
        }
};

void Employee :: setData(int a1, int b1, int c1){
    a = a1; b = b1; c = c1;
}



int main(){
    Employee Mark;
    Mark.d = 8;
    Mark.e = 9;
    Mark.setData(2,5,6);
    Mark.getData();
    return 0;
}