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

    ~student()
    {
        cout<<"Destructor called"<<endl;
    }
    void display()
    {
        cout<<rollNumber<<" "<<age<<endl;
    }
    
};

int main()
{
    student s1(101,10);
    
    // 1. destructor can not be more than one
    // 2. the object is destroyed just befor exiting the program
    // 3. NO parameters and return type
    // 4. called only and always 1 time.
    // 5. once we create our own destructor, default one is no longer available to us.
    // 6. In case of a dynamically allocated memory If we have created our own destructor then we have to
    //    explicitly delete the object memory allocated. eg.

    student *s2=new student(102,20);
    delete s2; //this calls the destructor for object s2

    return 0;
}