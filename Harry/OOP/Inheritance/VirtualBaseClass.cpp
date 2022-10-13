#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNumber;
    public:
        void setRollNumber(int a){
            rollNumber = a;
        }
        void printRollNumber(){
            cout<<"Your roll number is: "<<rollNumber<<endl;
        }
};

class Test : virtual public Student{
    protected:
        int math, physics;
    public:
        void setMarks(int b, int c){
            math = b;
            physics = c;
        }
        void printMarks(){
            cout<<"Your math marks is: "<<math<<endl;
            cout<<"Your math physics is: "<<physics<<endl;
        }
};

class Sports : public virtual Student{
    protected:
        int score;
    public:
        void setScore(int sc){
            score = sc;
        }
        void printScore(){
            cout<<"Your score is: "<<score<<endl;
        }
};

class Result : public Test, public Sports{
    int total;
    public:
        void display(){
            total = math + physics + score;
            printRollNumber();
            printMarks();
            printScore();
            cout<<"Your total is: "<<total<<endl;
        }
};

int main()
{
    Result John;
    John.setRollNumber(05);
    John.setMarks(40, 50);
    John.setScore(90);
    John.display();
    return 0;
}