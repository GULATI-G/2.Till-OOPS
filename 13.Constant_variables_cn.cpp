#include<iostream>
using namespace std;

void func_for_passing_by_reference(const int &a)
{
    //a++; Can't do this now
}
void func(const int *p3)
{
    //(*p3)++; now we can't do this
    cout<<(*p3);
}

int main()
{
    int i=10;
    i++;
    const int j=10;
    //j++;  now i can't do this

    // const int k;
    // k=10;
    // this can't be done as well

    //1.
    int a;
    const int &b=a;

    a++;
    //b++; can't do this

    //2.
    const int c=10;
    const int &d=c;

    //3. 
    const int e=10;
    //int &f=e; this is not allowed as e itself has read only access.

    const int g=10;
    int const h=10; // these both are one and the same thing

    const int l=10;
    //int *p=&l; We can't do this as we are not promising that we will not change i by going through *p
    int const *p1=&l;// however we can do this as we are now promising. this line is read as p1 is a constant pointer to int

    int m=10;
    const int *p2=&m;// this is allowed

    // kam access ya equal access is allowed but high access is not allowed
    
    // use of const is mainly in functions so that they are not able to change the value of the variable

    int n=20;
    func(&n);
    func_for_passing_by_reference(n);

    int o=10;
    int q=23;
    const int *p4=&i;
    p4=&q;// this is allowed

    // if we want that p should not point to any other int ever then do following
    // but by doing this we will be able to change r by going through p2
    int r=10;
    int s=34;
    int * const p5=&r;
    //p5=&s; now this is not allowed
    (*p5)++;

    // if we want that we should not be able to change r and also that p5 shouldn't point to any other 
    // int  then we should do the following

    int t=10;
    int u=56;
    int const * const p6=&t;
    // (*p6)++;
    // p6=&u;  now both of these is not allowed

    
    




    return 0;
}