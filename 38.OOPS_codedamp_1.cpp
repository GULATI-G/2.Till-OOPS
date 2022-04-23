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
};

int main()
{
    employee emp1;
    emp1.age=25;
    emp1.name="Gaurav";
    emp1.company_name="abc";
    emp1.Introduce_yourself();

    employee emp2;
    emp2.name="Gulati";
    emp2.company_name="def";
    emp2.age=30;
    emp2.Introduce_yourself();

    // so if we now want to add further employees, instead of using above 5 lines everytime we can use a constructor
    
    return 0;
}