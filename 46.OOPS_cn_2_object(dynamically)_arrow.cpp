#include<iostream>
using namespace std;

class student 
{
    private:
    int rollNumber;

    public:
    int age;

    
};

int main()
{
    student s1;
    student *p=new student;
    (*p).age=10;
    cout<<(*p).age<<endl;
    p->age=11;
    cout<<(*p).age<<endl;
    // so we can set age by 2 methods in case of object created dynamically
    

    return 0;
}