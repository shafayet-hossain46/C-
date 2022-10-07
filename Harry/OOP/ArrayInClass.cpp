#include<iostream>
using namespace std;

class Shop{
    int itemId[4];
    int itemPrice[4];
    int counter; // This counter is for the array index.  This will go to every index of array and will set the item.
    public:
        void initCounter(){
            counter=0;
        };
        void setItem();
        void displayItem();
}market; // Variable can set here as well.

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
        cout<<"The price of item with id "<<itemId[i]<< " is "<<itemPrice[i]<<endl;
    }   
}

int main(){
    market.initCounter();
    for (int i = 0; i < 3; i++)
    {
        market.setItem();
    };
    market.displayItem();
    return 0;
}