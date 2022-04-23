#include<iostream>
#include<string>
using namespace std;

class abstract_employee
{
    virtual void ask_for_promotion()=0;
};

class employee:abstract_employee
{
    private: 
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
    
    void ask_for_promotion()
    {
        if(age>30){cout<<name<<" get promoted "<<endl;}
        else{cout<<name<<" sorry not promoted "<<endl;}
    }

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
    employee emp2=employee("Srishti","def",40);
    emp1.ask_for_promotion();
    emp2.ask_for_promotion();
    

    return 0;
}