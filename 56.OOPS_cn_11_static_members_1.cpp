#include<iostream>
using namespace std;

class student
{
    public:

    int age;
    int rollNumber;

    static int totalStud;

    student(int age, int rollNumber)
    {
        this->age=age;
        this->rollNumber=rollNumber;
    }
};

// static variables are initialised outside the class like
int student::totalStud=0; // initialisation

int main()
{
    // if we want to create a property whose value remains same for all the objects then we use static keyword. this doesn't create 
    // several copies of that variable. this property belongs to class and not a specific object. So student s1 will have age and 
    // rollNumber of its own but not totalStud

    student s1(10,120);
    cout<<s1.age<<" "<<s1.rollNumber<<endl;
    // to access the static varible:-
    cout<<student::totalStud<<endl;
    // this :: is called scope resolution operator

    // although if we do cout<<s1.totalStud<<endl; the compiler doesn't give any error and gives the correct result
    // but we should not do this as this is not logically correct.

    cout<<s1.totalStud<<endl;

    s1.totalStud=20;
    student s2(11,121);
    cout<<s2.totalStud<<endl;
    cout<<student::totalStud<<endl;
    // we can see that it works equally good

    


    return 0;
}