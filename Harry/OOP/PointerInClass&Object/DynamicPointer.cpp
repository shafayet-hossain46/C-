#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int* address_a = &a;
    cout<<"The value of a is: "<<*address_a<<endl;

    // Dynamically Initialize
    int* b = new int(10);
    cout<<"The vale of b is: "<<*b<<endl;

    // Dynamically Initialize Array
    int* arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 20; // It will be working in the same way because here we are changing the value.
    arr[3] = 30;
    cout<<"The vale of arr is: "<<arr[0], arr[1], arr[2];
    return 0;
}