#include<iostream>
using namespace std;

class student
{
    int age;
    char *name;

    public:
    student(int age, char *name)
    {
        this->age=age;
        
        // this->name=name;
        // this is shallow copy as we are just copying the address and not copying the content.
        // now in the main function if we change the value of name then the change will be reflected here also
        // to avoid this we create new array and copy the name in it. this is called deep copy
        
        this->name= new char[strlen(name)+1];
        // this is deep copy
        // +1 has been done as strlen doesn't count the null character
        strcpy(this->name,name); 
        // IMPORTANT :- strcpy function also copies the null character.
    }

    void display()
    {
        cout<<age<<" "<<name<<endl;
    }
};

int main()
{
    char name[]="abcd";
    student s1(10,name);
    s1.display();

    name[3]='e';
    student s2(20,name);
    s2.display();

    s1.display();

    return 0;
}