#include<iostream>
using namespace std;
int main(){
    int marks[] = {1,2,3};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;

    // Array and Pointers
    int* p = marks;
    cout<<"The value of marks[0] is : "<<*p<<endl; // First Index Value
    cout<<"The value of marks[1] is : "<<*(p+1)<<endl; // Second Index Value
    cout<<"The value of marks[2] is : "<<*(p+2)<<endl; // Third Index Value
    

    // Pointers
    // int* b = &marks[1];
    // cout<<"Address of marks[1] is:"<<b<<endl;
    // cout<<"Value at b is:"<<*b<<endl;
    return 0;
}