// https://www.youtube.com/watch?v=8uI6hKp3jYs (Link; where I got the concept)
#include<iostream>
using namespace std;
int main(){

    int number, reminder, revNum = 0;
    cin>>number;
    while(number > 0){
        reminder = number % 10; // 
        number = number / 10;
        revNum = (revNum * 10) + reminder;
    }
    cout<<revNum<<endl;
    return 0;
}