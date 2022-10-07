/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/
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
        /* Friend Function Prof. This Function is not a member of Complex class, this is a friend of complex class,
         and friend function can access the private variable, but it can not be a member.*/
        friend Complex setDataBySum(Complex o1, Complex o2); 

        void printComplexNumber(){
            cout<<"The complex number is : "<<a<<" + "<<b<<endl;
        }
}John, Mark, displaySum;

// Friend Function
Complex setDataBySum(Complex o1, Complex o2){ // Getting Objects.
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Mark.setData(2, 3);
    Mark.printComplexNumber();
    John.setData(4, 5);
    John.printComplexNumber();
    displaySum = setDataBySum(Mark, John); // Passing Objects.
    displaySum.printComplexNumber();
    return 0;
}