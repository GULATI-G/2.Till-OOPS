#include<iostream>
using namespace std;

int find(int arr[], int size, int key)
{
    if(size==0){return -1;}
    if(arr[0]==key){return 0;}
    int index=0;
    index= 1 + find(arr+1,size-1,key);
    return index;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    int key;
    cin>>key;
    cout<<find(arr,n,key);
    return 0;
}