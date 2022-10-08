#include<iostream>
using namespace std;

/* Forward declaration. Because when I'm trying to access Y in line number 15, I'm getting an error.
  Because we are trying to get Y before declaration.
  So, to inform compiler that there is an class named Y exists, I declare it here.*/
class Y;

class X{
    int data;
    public:
        void getValue(int value){
            data = value;
        }
        friend void add(X, Y);
} a1;
class Y{
    int num;
    public:
        void getValue(int value){
            num = value;
        }
        friend void add(X, Y);
} b1;


void add(X o1, Y o2){
    cout<<"The sum of X and Y "<<o1.data+o2.num;
}


int main()
{
    a1.getValue(2);
    b1.getValue(4);
    add(a1, b1);
    return 0;
}