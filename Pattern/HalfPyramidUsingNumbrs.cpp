#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    /* OutPut
        1
        22
        333
        4444
    */
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }

    /* OutPut
        1
        12
        123
        1234
    */
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    return 0;
}