#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
    for(i=2; i<n; i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            break;
        }
    }
    if(i==n){ // Jodi uporer puro loop ta shes hoy that means i==n porjonto cholse, r i ta n porjonto chola manei holo break hoy nai and that means it is Prime number.
        cout<<"Prime"<<endl;
    }
    return 0;
}