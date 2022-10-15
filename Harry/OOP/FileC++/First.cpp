#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // Creating and writing
    // ofstream write("myText.txt");
    // write<<"Mark Has Joined";

    // Reading
    string myText;
    ifstream read("myText.txt");
    while (getline(read, myText))
    {
        cout<<myText;
    };
    
    return 0;
}