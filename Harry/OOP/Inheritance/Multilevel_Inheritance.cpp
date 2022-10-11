#include<iostream>
using namespace std;


class Student{
    int rollNumber;
    public:
        void setRollNumber(int r){
            rollNumber = r;
        }
        void getRollNumber(){
            cout<<"The roll number is : "<<rollNumber<<endl;
        }
};

class Exam : public Student{
    protected:
        float math, physics;
    public:
        void setMarks(float m1, float m2){
            math = m1;
            physics = m2;
        }
        void getMarks(){
            cout<<"The marks for math is : "<<math<<endl;
            cout<<"The marks for physics is : "<<physics<<endl;
        }
};


class Result : public Exam{
    float percentage;
    public:
        void displayResults(){
            getRollNumber();
            getMarks();
            cout<< "The result is : " <<(math+physics)/2<<"%"<<endl;
        }
};


int main()
{
    Result Mark;
    Mark.setRollNumber(1);
    Mark.setMarks(94.0, 90.0);
    Mark.displayResults();
    return 0;
}