#include<iostream>
using namespace std;

class Shop{
    int itemId[4];
    int itemPrice[4];
    int counter;
    public:
        void initCounter(){
            counter=0;
        };
        void setItem();
        void displayItem();
};

void Shop::setItem(){
    cout<<"Enter the id of your item : "<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item : "<<endl;
    cin>>itemPrice[counter];
    counter++;
}


void Shop::displayItem(){
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of item with id"<<itemId[i]<< " is "<<itemPrice[i]<<endl;
    }   
}

int main(){
    Shop market;
    market.initCounter();
    market.setItem();
    market.setItem();
    market.displayItem();
    return 0;
}