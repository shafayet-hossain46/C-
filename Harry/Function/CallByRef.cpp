#include<iostream>
using namespace std;

// void swap(int* x, int* y){ // Collecting The Address Of A And B Into X And Y Using Pointers.
//     int temp = *x;
//     *x = *y;
//     *y = temp;    
// }

void swap(int &x, int &y){ // Call By Reference Using C++ Reference Variable. (&x = y) => Means Y's Nickname Is X; If You Change The X Then Y Will Be Changed.
    int temp = x;
    x = y;
    y = temp;    
}

int main(){
    int a=5, b=7;
    cout<<"Before "<<a<<b<<endl;
    // swap(&a, &b); // Sending The Address
    swap(a, b); // Sending The Address
    cout<<"Before "<<a<<b<<endl;
    return 0;
}