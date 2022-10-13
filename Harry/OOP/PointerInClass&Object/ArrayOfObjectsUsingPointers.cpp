#include<iostream>
using namespace std;

class Shop{
    int id, price;
    public:
        void setData(int a, int b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"The item id is: "<<id<<endl;
            cout<<"The price id is: "<<price<<endl;
        }
};


int main(){
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p,q,i;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}