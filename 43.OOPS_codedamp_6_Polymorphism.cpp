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

    void set_name(string Naam)   
    {name=Naam;}
    string get_name()   
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

    virtual void work()
    {
        cout<<name<<" is writing mails, reading newspaper "<<endl;
    }

    employee(string Name, string company, int Age) 
    {
        name=Name;
        company_name=company;
        age=Age;
    }
};

class developer:public employee // this inheritance is private by default. So as to make features of parent class accessible
// to child class in main code we made this inheritance public
{
    public:
    string fav_prog_lang;
    
    developer(string Name,string Company_name,int Age, string lang)
        :employee(Name,Company_name,Age)
    {
        fav_prog_lang=lang;
    }

    void work()
    {
        cout<<get_name()<<" is writing code in "<<fav_prog_lang<<endl;
    }

    void FixBug()
    {
        cout<<get_name()<<" is fixing bugs using "<<fav_prog_lang<<endl; // either use get_name() or use protected instead of private
    }
};

class teacher:public employee
{
    string subject;
    public:
    teacher(string Name,string Company_name, int Age, string Subject)
        :employee(Name, Company_name, Age)
    {
        subject=Subject;
    }
    void Teaching()
    {
        cout<<get_name()<<" is teaching "<<subject<<endl;
    }

    void work()
    {
        cout<<get_name()<<" is marking the students attendance "<<endl;
    }

};

int main()
{
    employee emp1("Gaurav","abc",19);
    emp1.work();
    // employee emp2=employee("Srishti","def",40);
    
    developer d1("Gaurav","flipkart",20,"c++");
    // d1.FixBug();
    // d1.ask_for_promotion();
    d1.work();

    teacher t1("seema","SKV",45,"Maths");
    // t1.Teaching();
    // t1.ask_for_promotion();
    t1.work();

    employee *e1=&d1;
    employee *e2=&t1;

    e1->work();
    e2->work();
    
    // to make upper part work we had to make work function in employee class virtual. else it would have typed writing mails.....
    // when a virtual function is invoked, it says can u pls check if there is implementation of this function in my derived
    // classes and if yes pls execute that instead. So most derived version of the function is going to be executed.

    return 0;
}