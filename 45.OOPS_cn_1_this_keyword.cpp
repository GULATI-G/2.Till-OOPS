#include<iostream>
#include<string>
using namespace std;

class student 
{
    private:
    int rollNumber;

    public:
    int age;

    student(int rollNumber)
    {
        this -> rollNumber = rollNumber;
    }
    // this helped in defining the rollNumber variable of the class and not the one that function has created.
    // this keyword stores the address of the object of student 
    // this is a pointer and also a special variable/keyword

    void display()
    {
        cout<<this<<endl;
        cout<<rollNumber<<endl;
    }
};

int main()
{
    student s1(10);
    s1.display();
    
    cout<<&s1<<endl;
    return 0;
}