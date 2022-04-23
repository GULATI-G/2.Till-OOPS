#include<iostream>
#include<string>
using namespace std;

class employee
{
    public:
    string name;
    string company_name;
    int age;

    void Introduce_yourself()
    {
        cout<<"My name is "<<name<<endl;
        cout<<"I work in a company called "<<company_name<<endl;
        cout<<"My age is "<<age<<endl<<endl;
    }

    employee(string Name, string company, int Age) // now doesn't matter whether name, company_name, age is private or public.
    //after creating our own constructor the default constructor is lost. However we can still ceate own default constructor
    {
        name=Name;
        company_name=company;
        age=Age;
    }
};

int main()
{
    // now using constructor we got 2 ways to create a object
    employee emp1("Gaurav","abc",19);
    employee emp2=employee("Srishti","def",10);
    emp1.name="gulati"; // See we can still change the attributes
    emp1.Introduce_yourself();
    emp2.Introduce_yourself();
    
    
    return 0;
}