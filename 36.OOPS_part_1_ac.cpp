#include<iostream>
using namespace std;

class student
{
    string name; // this is private as it is above public function. 
    // We will now create a function within this class to input name
    public: // if we don't write public we will not be able to input data from main function
    
    int age;
    bool gender;

    void setName(string s)
    {
        name=s;
    }

    // to print the data of private function we can create a function here within the class itself
    void getName()
    {
        cout<<name;
    }
    
    void display()
    {
        cout<<"Name= ";
        cout<<name<<endl;
        cout<<"Age= ";
        cout<<age<<endl;
        cout<<"Gender= ";
        cout<<gender<<endl<<endl;
    }
};

int main()
{
    student a;
    // a.name="Gaurav"; 
    // had it been we had put name in public we could have written above line
    // we can do it by creating function like in array case below
    a.age=19;
    a.gender=0;

    // or we can create an array of objects
    student arr[3];
    for(int i=0;i<3;i++)
    {
        string s;
        cout<<"enter name ";
        cin>>s;
        arr[i].setName(s);
        cout<<"enter age ";
        cin>>arr[i].age;
        cout<<"enter gender 1 for girl 0 for boy ";
        cin>>arr[i].gender;
    }

    // for printing details we can create a function inside the class student
    for(int i=0;i<3;i++)
    {
        arr[i].display();
    }
    return 0;
}