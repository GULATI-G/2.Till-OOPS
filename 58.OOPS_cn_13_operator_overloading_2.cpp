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

    /*
    fraction add(fraction const &f2)
    {
        fraction fn;
        fn.num=num*f2.den + den*f2.num;
        fn.den=f2.den*den;
        fn.simplify();
        return fn;
    }

    fraction operator+ (fraction const &f2) const 
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
    */

   // pre increment
   fraction& operator++()
   {
       num=num+den;
       simplify();
       return *this;
   }
};



int main()
{
    // when an integer is created like int i =5; first 5 is stored in buffer then it is copied to i.
    // so eg.
    // int func(int i)
    // {
    //     i++;
    //     return i;
    // }

    // if we do cout<<func(5); then we don't assign any variable this value and simply print this. This is stored in buffer from 
    // where it is read and printed
    // in case of int j=func(5); cout<<j; we store it in j and then j is printed.
    

    fraction f1(10,2);
    fraction f2=++f1;
    f1.display();
    f2.display();

    ++f1;  
    f1.display();

    fraction f3=++(++f1);
    f1.display(); // to see difference between f1.display() and f3.display() remove & from ++ operator
    f3.display();
    
    // now in this f3=++(++f1); statement first ++f1 is done. Since we are not receiving/ storing anywhere this value therefore the outer 
    // ++ is done on the copy created by the system. This copy has different address than the f1. SInce in ++ operator we are
    // returning *this ,so f3 stores the address of the copy created not f1. Therefore on f1 only one ++ is done while the f3 
    // contains the value after doing 2 ++ :- one on f1 and other on copy of f1 created by system after the ++ on f1.
    
    // Now if we want that changes are only there in f1 so we return by reference i.e. fraction& operator++().
   return 0;
}