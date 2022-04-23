#include<iostream>
using namespace std;

class fraction
{
    int num;
    int den;

    public:
    
    fraction(int num,int den)
    {
        this ->num=num;
        this ->den=den;
    }
    void display()
    {
        cout<<num<<"/"<<den<<endl;
    }
    int getnum()
    {return num;}
    int getden()
    {return den;}

    void add1(fraction const &f2)
    {
        num=num*f2.den + den*f2.num;
        den=f2.den*den;

        int less=num>den?den:num;
        int ans=1;
        for(int i=2;i<=less;i++)
        {
            if(num%i==0 && den%i==0){ans=i;}
        }
        num=num/ans;
        den=den/ans;
    }
    // or can create a function simplify within the class and call simplify function for proper fraction by 
    // simplify();
    // no need to write this->simplify() as this implicitly means this->simplify()

    void multiply(fraction const &f4)
    {
        num*=f4.num;
        den*=f4.den;

        int less=num>den?den:num;
        int ans=1;
        for(int i=2;i<=less;i++)
        {
            if(num%i==0 && den%i==0){ans=i;}
        }
        num=num/ans;
        den=den/ans;
    }
};

float add(fraction s1, fraction s2)
{
    float n1=s1.getnum()/s1.getden();
    float n2=s2.getnum()/s2.getden();
    return n1+n2;
}

int main()
{
    fraction f1(10,2);
    fraction f2(14,7);
    fraction f3(16,4);
    fraction f4(20,2);
    cout<<add(f1,f2)<<endl;
    f1.add1(f2);
    f1.display();
    f3.multiply(f4);
    f3.display();

    return 0;
}