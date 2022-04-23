#include<iostream>
using namespace std;

void print(int *p)
{cout<<*p<<endl<<endl;}

int change(int arr[], int size) // instead of arr[] I can write int * arr as well because the 
//array is ultimately sent as a pointer

{arr[2]=8;
    return 0;}

void increment (int *p)
{p=p+1;}

void increment1(int *p)
{*p=*p+1;}

int sum(int a[],int size)
{int ans=0;
for(int i=0;i<size;i++){
    ans+=a[i];}
    return ans;
}

int main()
{
    int i=10;
    int *p=&i;
    print(p);

    cout<<p<<endl;
    increment (p);
    cout<<p<<endl<<endl;

    cout<<i<<endl;
    increment1(p);
    cout<<i<<endl<<endl;

    int arr[]={1,2,3,4};
    cout<<arr[2]<<endl;
    change(arr,4);//basically array goes in function s a pointer as evident by sizeof function
    cout<<arr[2]<<endl<<endl;

    //a[5] is same as *(a+5). So in general also we can write *(a+5) instead of a[5]

    //since the array is sent as pointer we can pass part of an array instead of whole array.
    int n;
    int a[n];
    sum(a+3,n-3);// I can reduce size from end as well by writing n-3-x
    return 0;
}