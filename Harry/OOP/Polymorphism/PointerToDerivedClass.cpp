#include<iostream>
using namespace std;

class Base{
    public:
        int varBase;
        void displayData(){
            cout<<"Base Class Var Value Is: "<<varBase<<endl;
        }

};

class Derived : public Base{
    public:
        int varDerived;
        void displayData(){
            cout<<"Base Class Var Value Is: "<<varBase<<endl;
            cout<<"Derived Class Var Value Is: "<<varDerived<<endl;
        }
};

int main(){
    Base * base_class_pointer;
    Base base_obj;
    Derived derived_obj;

    /*
        When base class pointer points derived class object still the pointer will be pointing to base class public
        members, because base class in not inherited. On the other hand, when derived class pointer is made it has
        the access to the public members of the base class, because, it inherits the public members from the base class.
    */
    base_class_pointer = &derived_obj; // Base class's pointer is pointing Derived class object.
    base_class_pointer-> varBase = 30;
    base_class_pointer-> displayData();

    Derived * derived_class_pointer;
    derived_class_pointer = &derived_obj;
    derived_class_pointer -> varBase = 60;
    derived_class_pointer -> varDerived = 50;
    derived_class_pointer->displayData();

    return 0;
}