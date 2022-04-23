#include<iostream>
#include<string>
using namespace std;

class employee
{
    private: // although no need to write but jsut for simplicity as by default access modifier is private

    string name;
    string company_name;
    int age;

    public:

    void set_name(string Naam)   //setter
    {name=Naam;}
    string get_name()   //getter
    {return name;}

    void set_company(string Company)
    {company_name=Company;}
    string get_company()
    {return company_name;}

    void set_age(int Age)
    {
        if(Age>=18)    // now by adding this check we make sure that the employee is of age 18 or more
        age=Age;       // this is validation rule
    }
    int get_age()
    {return age;}
    

    void Introduce_yourself()
    {
        cout<<"My name is "<<name<<endl;
        cout<<"I work in a company called "<<company_name<<endl;
        cout<<"My age is "<<age<<endl<<endl;
    }

    employee(string Name, string company, int Age) 
    {
        name=Name;
        company_name=company;
        age=Age;
    }
};

int main()
{
    employee emp1("Gaurav","abc",19);
    employee emp2=employee("Srishti","def",10);
    emp1.Introduce_yourself();
    emp2.Introduce_yourself();
    
    emp1.set_age(21);
    cout<<emp1.get_name()<<" is "<<emp1.get_age()<<" years old now."<<endl;

    return 0;
}