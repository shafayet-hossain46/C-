#include<iostream>
using namespace std;

// Structure
struct Employee {
    int id;
    string name;
    int salary;
};

int main(){

    // This Is Also A Lengthy Way, Better Way Is To Go With Loop And Array.
    // Employee john;
    // john.id = 1;
    // john.name = "John";
    // john.salary = 22211;
    // cout<<john.name<<endl;


    // With Loop And Array
    Employee arr[2];
    int num;
    for (int i = 0; i < 2; i++) 
    {
        cout<<"Value For Name : "<<endl;
        cin>>arr[i].name;
        cout<<"Value For Id : "<<endl;
        cin>>arr[i].id;
        cout<<"Value For Salary : "<<endl;
        cin>>arr[i].salary;
        
    }
    



    return 0;
}