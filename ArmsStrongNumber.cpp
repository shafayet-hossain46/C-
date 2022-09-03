#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int sum = 0;
    int originalNumber = n;
    while(n>0){
        int lastDigit = n%10; // Getting the reminder
        sum+= round(pow(lastDigit,3)); // Applying the power (3) on the reminder (!!! pow returns float)
        n=n/10; // Reset the n value by vagfol/Quotient
    }
    if(sum == originalNumber){
        cout<<"Armstrong";
    }else{
        cout<<"Not Armstrong";
    }
    return 0;
}
