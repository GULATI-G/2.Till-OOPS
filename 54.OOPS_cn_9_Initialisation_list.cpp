#include<iostream>
using namespace std;

class student
{
    int age;
    int const rollNumber;
    int &x;

    public:
    student (int age,int r) : rollNumber(r), age(age) , x ( this->age )
    {
        this->age=age;
    }

    void display()
    {
        cout<<age<<" "<<rollNumber<<" "<<x<<endl;
    }
};

int main()
{
    // Compiler doesn't allow us to create a const variable with garbage value;
    // i.e int const a; is not allowed

    // In this code we saw initialisation list. When we create an object the constructor is called.
    // this creates all the variables first and then follow the commands in the bracket.
    // so we were not able to create a const roll number as during its creation by the constructor
    // it takes garbage value which complier doesn't allow. So we wrote : rollNumber(r) after the arguements
    // in the student constructor.
    // Just like const data members we can initialize non const data members also and we can also initialise more than 1 data members
    // eg. student (int age,int r) : rollNumber(r) , age(age)
    // as u can see no need to write this in above age
    // we can also write like student (int age,int r) : rollNumber(101)  
    // but in above case the roll numbers for all students will become 101 which we don't want

    // Similar case is with data members which are passed by reference.


    student s1(10,101);
    s1.display();
    return 0;
}