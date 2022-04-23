#include <iostream>
using namespace std;

int main()
{
    int i = 10;
    cout << i << endl;
    cout << &i << endl;
    int *p = &i;
    cout << p << endl;
    cout << *p << endl;
    cout <<endl<< sizeof(p)<<endl;

    int a=(*p);
    a++;
    cout<<endl<<i;
    cout<<endl<<(*p)<<endl;

    i++;
    cout<<endl<<i;
    cout<<endl<<(*p);
    (*p)++;
    cout<<endl<<i;
    cout<<endl<<(*p)<<endl<<endl;

    int *q= p;
    cout<<i<<endl;
    cout<<(*p)<<endl;
    cout<<(*q)<<endl<<endl;

    // safe code below
    int b;
    cout<<b<<endl;
    b++;
    cout<<b;

    //dangerous code below
    int *z;
    cout<<z;
    cout<<(*z);
    // (*z)++; 
    // above part is dangerous. so we should always in int *p= write address of int or int *p=0;

    return 0;
}