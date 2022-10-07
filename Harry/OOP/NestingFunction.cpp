#include<iostream>
#include<string>
using namespace std;

class Binary{
    string s;
        void chk_bin();
    public: 
        void read();
        void ones();
        void display();
};

void Binary::read(void){
    cout<<"Enter A Binary Number : "<<endl;
    cin>>s;
}


void Binary::chk_bin(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect Binary Number"<<endl;
            exit(0);
        }
    }   
}

void Binary::ones(){
    chk_bin(); //Nesting of member function, without object calling a function.
    for (int i = 0; i < s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }else{
            s.at(i) = '0';
        }
    }
}

void Binary::display(){
    cout<<"Displaying Binary"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}

int main(){
    Binary b;
    b.read();
    b.display();
    b.ones();
    b.display();
    return 0;
}