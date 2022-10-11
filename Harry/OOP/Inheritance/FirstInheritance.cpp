#include<iostream>
using namespace std;


class Base{
    int data1; // private by default and is not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};


void Base::setData(){
    data1 = 10;
    data2 = 20;
}

int Base::getData1(){
    return data1;
}

int Base::getData2(){
    return data2;
}

/* -->Derived Class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/

/* -->Notes
1: Default visibility mode is private.
2: Public visibility mode: Public members of the base class becomes the public members of the derived class. 
3: Private visibility mode: Public members of the base class becomes the private members of the derived class.
4: Private members of the base class are not inheritable.
*/
class Derived : public Base{ // Class is being derived publicly
    int data3;
    public:
        void proccess();
        void display();
};

void Derived::proccess(){
    data3 = data2 * getData1();
}

void Derived::display(){
    cout<<"The value of data 1 is : "<<getData1()<<endl;
    cout<<"The value of data 2 is : "<<data2<<endl;
    cout<<"The value of data 3 is : "<<data3<<endl;
}

int main()
{
    Derived obj1;
    obj1.setData();
    obj1.proccess();
    obj1.display();

    return 0;
}