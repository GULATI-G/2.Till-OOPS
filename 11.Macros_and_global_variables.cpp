#include <iostream>
using namespace std;

#define pie 3.14

int a = 10; //by doing this a is accesible by all the functions in out code.
//using this(global variables) is a very wrong practice.
//we should never do this. becasue biggest problem with this is that it can be changed by
//anyone anywhere. in a function we might be taking a keeping in mind its value as 10
//but other function may change it.

void g()
{
    a++;
    cout << a << endl;
}
void f()
{
    cout << a << endl;
    a++;
}
int main()
{
    // we use define because if we don't then we have 2 choices. Either we create
    // float pie for every function or we keep using 3.14 each time. Creating
    // float will occupy memory and it can be changed in the code later sometime.
    // if we keep using 3.14 then if we want to change the value of pie in future
    // we won't be able to. Hence using define we will not eat up any memory
    // and we will be able to change it for whole program if we want to.

    a = 12;
    f();
    g();
    cout << a << endl;

    return 0;
}