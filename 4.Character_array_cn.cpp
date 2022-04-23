#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3,4};
    char ar[]="abc";
    char *p= &ar[0];
    cout<<a<<endl;
    cout<<ar<<endl;
    cout<<ar[0]<<"\t"<<&ar[0]<<endl;
    cout<<ar[1]<<"\t"<<&ar[1]<<endl;
    cout<<p<<endl<<endl;

    char c1='a';
    char *pc=&c1;
    cout<<c1<<"\t"<<&c1<<endl;
    cout<<pc<<endl;

    char str[]="abcd";// this is right as first abcd is created in temp memory and then given to us.
    //char *ptr="abcd";
    //this above is wrong step as we are not creating array but just pointing towards the temporary memory
    return 0;
}