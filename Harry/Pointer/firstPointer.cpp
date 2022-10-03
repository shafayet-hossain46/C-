#include<iostream>
using namespace std;
int main(){
    int a = 110;
    int* b = &a;
    int** c = &b;
    cout<< "The value of address at b is: "<<*b<<endl;
    cout<< "The value of address at c is: "<<**c<<endl;
    return 0;
}