#include<iostream>
using namespace std;

class fraction
{
    int num;
    int den;

    public:

    fraction()
    {}
    
    fraction(int num,int den)
    {
        this ->num=num;
        this ->den=den;
    }

    int getnum() const
    {return num;}
    int getden() const
    {return den;}

    void setnum(int num)
    {this->num=num;}
    void setden(int den)
    {this->den=den;}

    void display() const
    {cout<<num<<"/"<<den<<endl;}

    void simplify(int &num, int &den)
    {
        int less=num>den?den:num;
        int ans=1;
        for(int i=2;i<=less;i++)
        {
            if(num%i==0 && den%i==0){ans=i;}
        }
        num=num/ans;
        den=den/ans;
    }

    void add(fraction const &f2)
    {
        num=num*f2.den + den*f2.num;
        den=f2.den*den;

        simplify(num,den);
    }

    void multiply(fraction const &f4)
    {
        num*=f4.num;
        den*=f4.den;
            
    }
};

int main()
{
    fraction f1(10,2);
    fraction f2(14,7);
    // like data types like int we can also create a constant object of a class. eg.
    const fraction f3(15,3); // or fraction const f3(15,3);

    // cout<<f3.getnum()<<" "<<f3.getden()<<endl;
    // above step is not allowed ( THIS IS BEFORE ADDING CONST KEYWORD IN THE FUNCTIONS)

    // f3.display();
    // above step is also not allowed ( THIS IS BEFORE ADDING CONST KEYWORD IN THE FUNCTIONS)

    // the reason of above 2 steps not allowed is that our compiler has fear that we might change the values of data members through
    // those functions. So the compiler doesn't allow to call any normal function through const object.
    // we can only call constant functions through constant objects (which doesn.t change any property of current object)

    // now that we have added const keyword in those functions let's run them. This promises the compiler that we won't change the values

    cout<<f3.getnum()<<" "<<f3.getden()<<endl;
    f3.display();

    // IMP: in case if we add const keyword where we are changing the value of a data member, the compiler this time allows 
    // us to call the function but then doesn't allow to change the value

    // so if we want to create const object then we should side by side keep mentioning the functions as const in the class.
    return 0;
}