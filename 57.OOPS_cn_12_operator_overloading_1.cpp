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

    fraction add(fraction const &f2)
    {
        fraction fn;
        fn.num=num*f2.den + den*f2.num;
        fn.den=f2.den*den;
        fn.simplify();
        return fn;
    }

    fraction operator+ (fraction const &f2) const // operator keyword with the operator without space between them
    // IMP those functions which doesn't change the data members of the object from which they are called 
    // but changes the data members of other objects can be marked as constant.
    {
        fraction fn;
        fn.num=num*f2.den + den*f2.num;
        fn.den=f2.den*den;
        fn.simplify();
        return fn;
    }

    fraction multiply(fraction const &f4)
    {
        fraction fn;
        fn.num=num*f4.num;
        fn.den=den*f4.den;
        fn.simplify();
        return fn;
    }

    fraction operator*(fraction const &f4) const
    {
        fraction fn;
        fn.num=num*f4.num;
        fn.den=den*f4.den;
        fn.simplify();
        return fn;
    }

    bool operator== (fraction &f2)
    {
        simplify();
        f2.simplify();
        return num == f2.num && den==f2.den;
    }

};

int main()
{
    fraction f1(10,2);
    fraction f2(15,3);
   // operator overloading means extending the functionality of pre existing operator to work for our classes also
   // for example adding two fractions in this code by f1+f2 is not understandable by compiler. So to make + operator work for our
   // user defined classes we overload it

   fraction f3=f1.add(f2);
   f3.display();

   fraction f4=f1+f2; // by doing this f1's address is passed in this of the function and f2 is passed as arguement 
   f4.display();

   fraction f5(7,3);
   fraction f6(8,2);

   fraction f7=f5.multiply(f6);  
   f7.display();

   fraction f8=f5*f6; // by doing this f5's address is passed in this of the function and f6 is passed as arguement
   f8.display();

   fraction f9(10,2);
   fraction f10(15,3);

   if(f9==f10){cout<<"they are equal"<<endl;}
   else{cout<<"they are not equal"<<endl;}

   // IMP we should keep habit of writing const in case of const function
   // we should pass by reference if possible
   // we should keep those references const if possible
   return 0;
}