#include<iostream>
using namespace std;

class student
{
    static int totalStud;

    public:

    int age;
    int rollNumber;

    student()
    {
        // if we want to increase the number of the studnetd by one when every object is created
        totalStud++;
    }
    
    // we can also create static function if the function can be called without the help of any object eg.
    static int getTotalStud()
    {
        return totalStud;
    }
    // IMP: in static functions we can only access static data members and functions
    // IMP: static functions don't have access to "this" keyword/pointer
    // IMP: non static can not access static functions
};

int student::totalStud=0;

int main()
{
    student s1;
    student s2;
    student s3,s4,s5;
    cout<<student::getTotalStud()<<endl; // or cout<<s1.getTotalStud()<<endl; student::getTotalStud() only if te function is static

    return 0;
}