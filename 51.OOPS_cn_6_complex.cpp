#include<iostream>
using namespace std;

class complex 
{
    int real,imaginary;

    public:

    complex(int real,int imaginary)
    {
        this->real=real;
        this->imaginary=imaginary;
    }

    void print()
    {
        cout<<real<<" + i"<<imaginary<<endl;
    }

    void add(complex const c2)
    {
        real+=c2.real;
        imaginary+=c2.imaginary;
    }

    void multiply(complex const c2)
    {
        int r=real;
        int i=imaginary;
        real = (r*c2.real) - (i* c2.imaginary);
        imaginary = (r*c2.imaginary) + (i*c2.real);
    }
};

int main()
{
    complex c1(2,5);
    complex c2(3,7);
    c1.add(c2);
    c1.print();

    complex c3(8,5);
    complex c4(3,4);
    c3.multiply(c4);
    c3.print();

    return 0;
}