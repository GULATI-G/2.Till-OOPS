#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    int age;
    bool gender;

    // this is a default constructor which is in case we don't pass any parameters
    // it is there as long as we don't create any constructor ourselves
    // if we create our own constructor we will have write the code for default constructor as well
    
    // this below is default constructor
    student()
    {
        cout<<"Default Constructor"<<endl;
    }

    // this below is a parameterised constuctor
    student(string s, int a, bool g)
    {
        cout<<"Parameterised Constructor"<<endl;
        name=s;
        age=a;
        gender=g;
    }

    student(student &a)
    {
        cout<<"this is copy constructor"<<endl ;
        name=a.name;
        age=a.age;
        gender=a.gender;
    }

    ~student()
    {
        cout<<"Destructor Called "<<endl ;
    }
    // destructor is called when we exit from the main function
    
    void display()
    {
        cout<<"Name= "<<name<<endl;
        cout<<"Age= "<<age<<endl;
        cout<<"Gender= "<<gender<<endl<<endl;
    }

    bool operator == (student &a)
    {
        if(name==a.name && age==a.age && gender==a.gender){return true;}
        else{return false;}
    }
};

int main()
{
    // so as to provide the info while declaring the object, we create constructor
    // constructor is automatically called when the class is called

    student a("gaurav",19,0);
    a.display();

    student b;
    //  i am able to write above line because i have created a default counstructor as well
    // had it been i had not created default constructor then error will be there because for student a i created a constructor

   
    // now if we now want to create another object/Student details and want them to same as of the student a details then
    // i can create a copy constructor

    // one way to create a copy constructor is 
    student c(a);

    // the other way is
    student d=a;

    // there is also a default copy constructor

    // the difference between them is of shallow copy and deep copy
    // see it's full video to know the difference

    if(c==a)
    {cout<<"same"<<endl;}
    else{cout<<"not same"<<endl;}  

    return 0;
}