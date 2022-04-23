#include<iostream>
using namespace std;

void increment (int n)
{n++;}

void increment1 (int &j)
{j++;}

//bad practice
int& returning_reference(int n)
{int a=n;
return a;}

//bad practice
int* returning_pointer()
{int y=10;
return &y;}

int main()
{
    int a=10;
    int b=a;
    a++;
    cout<<b<<"\n\n";//no change in b due to change in a
   
    int i=20;
    int &j=i;
    j++;
    cout<<i<<"\n";// i gets changed because j is just another name for i.
    i++;
    cout<<j<<"\n\n";

    // we can't do int&j; 
    //             j=i;   as in creating reference variable we are not creating any memory for that variable

    int n=23;
    cout<<n<<endl;
    increment(n);
    cout<<n<<endl;

    increment1(n);
    cout<<n<<endl<<endl;

    int z=90;
    int &x=returning_reference(z);
    //cout<<returning_reference(x)<<endl;
    
    int *p=returning_pointer();
    //cout<<returning_pointer()<<endl;
    
    return 0;
}