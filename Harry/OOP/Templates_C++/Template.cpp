#include<iostream>
using namespace std;

// template<class T1=int, class T2=float, class T3=char> // Default type can be set
template<class T1, class T2, class T3>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 b){
            data1 = a;
            data2 = b;
        }
        T3 display(){
            cout<<this->data1<<this->data2<<endl;
            // cout<<data1<<data2<<endl;
        }
};

int main(){
    // myClass<> obj(5,'c'); // For default type
    // myClass<char, float, int> obj(5,'c'); // We can also change default type from here if needed.
    myClass<int, char, void> obj(5,'c');
    obj.display();
    return 0;
}