#include<iostream>
using namespace std;

class student
{
    int age;

    public:

    char *name;
    student(int age, char *name)
    {
        this->age=age;
        this->name= new char[strlen(name)+1];
        strcpy(this->name,name); 
    }

    student(student const &s2)
    // in this we passed by reference due to a reason.
    // If we write (student s2) in arguement then a copy assignment operator is called as 
    // student s2 is copied from the main function. This calls the same operator and hence it goes on.
    // Hence an infinite loop is created. To avoid this. we don't create another object but pass by reference
    // to avoid changes in the object we passed as constant.
    // in inbuilt copy constructor also object is passed like this (in the arguement)
    {
        age=s2.age;
        name=new char[strlen(s2.name)+1];
        strcpy(name,s2.name);
    }

    void display()
    {
        cout<<age<<" "<<name<<endl;
    }
};

int main()
{
    // default copy constructor always shallow copies the contents.
    // copy assignment operator also shallow copies the elements
    // to see what happens to see what happens due to shallow copy, comment the copy constructor created by me
    // and run the code.

    char name[]="abcd";
    student s1(10,name);
    s1.display();

    
    student s2(s1);
    s2.name[0]='x';

    s2.display();
    s1.display();

    return 0;
}