#include<iostream>
using namespace std;

class Base{
    public:
        int varBase;
        virtual void displayData(){ // Virtual function is an example of runtime polymorphism.
            cout<<"Base Class Var Value Is: "<<varBase<<endl;
        }

};

class Derived : public Base{
    public:
        int varDerived = 50;
        void displayData(){
            cout<<"Base Class Var Value Is: "<<varBase<<endl;
            cout<<"Derived Class Var Value Is: "<<varDerived<<endl;
        }
};

int main(){
    Base * base_class_pointer;
    Base base_obj;
    Derived derived_obj;

    
    base_class_pointer = &derived_obj; // Base class's pointer is pointing Derived class object.
    base_class_pointer-> varBase = 30;
    base_class_pointer-> displayData();

    return 0;
}