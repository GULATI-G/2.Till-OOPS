#include<iostream>
using namespace std;

class student 
{
    private:
    int rollNumber;
    
    public:
    int age;

    student ()
    {
        cout<<"Constructor 1 called "<<endl;
    }

    student (int a)
    {
        age=a;
        cout<<"Constructor 2 called "<<endl;
    }

    student(int r, int a)
    {
        rollNumber=r;
        age=a;
        cout<<"constructor 3 called "<<endl;
    } 
};

int main()
{
    student s1;  //constructor 1 called
    student s2(10);   // constructor 2 called
    student s3(11,100); // constructor 3 called
    student s4(s3);  // copy constructor called
    s1=s2;   //copy assignment operator
    student s5=s4;  // copy constructor
    // above statement is treated as student s5(s4)

}