#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
    int b=10; // this is created on stack memory by default.
    // but if we want to allocate memory during run time then stck memory will get filled very fast.
    int *p=new int;// this is stored in heap memory since we are using the new keyword but p is still stored in stack memory
                   // p uses 8 bytes in stack and new int takes 4 bytes in heap
    *p=12;
    cout<<*p<<endl;
    double *pd=new double;
    float *pf=new float;

    // now for array creation
    int n;cout<<"enter size of array";
    cin>>n;
    int *pa=new int[n];
    pa[0]=24;  // now pa can be used just as arr.
    //now a simple code for finding max of 10 integers
        int maxn=INT_MIN;
        for(int i=0;i<n;i++)
        {  cin>>pa[i];  }
        for(int i=0;i<n;i++)
        {maxn=max(maxn,pa[i]);}
        cout<<maxn<<endl<<endl;
    
    //now a big difference between heap and stack memory is auto release of memory on the basis of scope of variable
    //(in case of stack) and manual release(in case of heap memory). the memory created in stack has scope
    // in between {}. but the heap memory can be accessed by other functions as well and we have to delete 
    // it to free storage.

    // while(true)
    // {int i=10;} 
    //now this code will run infinitely as whenever we return to another iteration of loop, previous i will be 
    //deleted and new i will be created. hence i am using 4 bytes at max.

    // while(true)
    // {int *p=new int;}
    // this will not run infinitely because after very iteration new int is being created and this will result 
    // full storage if not stopped. The pointer will be erased after every iteration because it is in stack
    // memory and its scope is limited to while loop. hence we will have to delete it by ourselves.

    // so remember to delete heap memory every time by following below syntax.
    cout<<p<<endl;
    cout<<*p<<endl;
    delete p;
    delete pd;
    delete pf;
    delete[] pa;  //<--- important
    // this doesn't clear pointer from stack memory but only variable in heap memory;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // not delete of heap memory variables was one of the reasons why apps used to crash.

    return 0;
}