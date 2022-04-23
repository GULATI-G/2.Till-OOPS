#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==1){return 1;}
    return n*factorial(n-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;

    // segmentation fault comes when
    // 1. when arr[10] and u try to access arr[25]
    // 2. when all memory is over.
    
}