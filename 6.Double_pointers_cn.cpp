#include<iostream>
using namespace std;

void increment (int **p)
{
    p=p+1;
}
//above will not affect value of p if we cout in main function
void increment1 (int **p)
{
    *p=*p+1;
}
//the value of *p will change if we cout in main function
void increment2 (int **p)
{
    **p=**p+1;
}
//the value of i will change if we cout in main function

int main()
{
    int a=10;
    int *p=&a;
    int ** p1=&p;
    cout<<p<<"\t"<<p1<<"\t"<<&p<<endl<<endl;

    cout<<*p1<<"\t"<<p<<"\t"<<&a<<endl<<endl;

    cout<<a<<"\t"<<*p<<"\t"<<**p1<<endl;

    
    return 0;
}