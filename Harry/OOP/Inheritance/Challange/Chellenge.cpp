#include<iostream>
using namespace std;

class Simple_Cal{
    protected:
        int a, b;
    public:
        void get_Simple_Data(int n1, int n2){
            a = n1;
            b = n2;
        }
        void display_Simple_Cal(){
            cout<<"The sum of two number is : "<<a+b<<endl;
            cout<<"The multiplying result of two number is : "<<a*b<<endl;
        }
};

class Science_Cal : public Simple_Cal{
    public:
        void display_Science_Cal(){
            cout<<"The subs of two number is : "<<a-b<<endl;
            cout<<"The division of two number is : "<<a/b<<endl;
        }
};

class Hybrid_Cal : public Science_Cal{
    public:
        void show(){
            display_Simple_Cal();
            display_Science_Cal();
            cout<<"I'm using multilevel inheritance";
        }
};

int main()
{
    Hybrid_Cal First;
    First.get_Simple_Data(5, 6);
    First.show();
    return 0;
}