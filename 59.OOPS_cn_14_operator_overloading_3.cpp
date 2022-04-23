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

    void simplify()
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

   // pre increment
   fraction& operator++()
   {
       num=num+den;
       simplify();
       return *this;
   }

   // post increment
   fraction operator++ (int)
   {
       fraction fn;
       fn.num=num;
       fn.den=den; // or simply fraction fn(num,den);
       num=num+den;
       simplify();
       fn.simplify();
       return fn;
   }
   fraction&  operator+=(fraction const &f2)
   {
       num=num*f2.den + den*f2.num;
       den=den*f2.den;
       simplify();
       return *this;
   }
};

int main()
{
    // IMP nesting is not allowed in post increment operator
    fraction f1(10,2);
    f1++;
    f1.display();
    fraction f2=f1++;
    f2.display();
    f1.display();

    fraction f3(9,2);
    fraction f4(8,3);
    f3+=f4;
    f3.display();
    f4.display();

    fraction f5(9,2);
    fraction f6(8,3);
    (f5+=f6)+=f6;
    f5.display();
    f6.display();


   return 0;
}