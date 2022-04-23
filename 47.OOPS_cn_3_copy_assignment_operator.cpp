#include<iostream>
using namespace std;

class student 
{
    private:
    int rollNumber;
    
    public:
    int age;

    student(int r, int a)
    {
        rollNumber=r;
        age=a;
    } 
    void display()
    {
        cout<<rollNumber<<" "<<age<<endl;
    }
    
};

int main()
{
    student s1(101,10);
    student s2(102,20);
    s2.display();


    //we know that a constructor can be called only once for an object and it should be called once and
    // it's only possible to call it during creation of the object.
    // now if we didn't call copy constructor during the creation of the object s2 we can not call the 
    // copy constructor again. However instead of explicitly copying the elements we can use copy assignment operator
    // which is :-

    s2=s1;
    s2.display();

    // general statement:-
    // we can not keep any constructor private .

    return 0;
}