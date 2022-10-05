#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a+b;
    return c;
}

int main(){
    int num1, num2;
    cout<<"Enter Two Numbers ";
    cin>>num1>>num2;
    cout<<"The Sum Is "<<sum(num1, num2)<<endl;
    return 0;
}