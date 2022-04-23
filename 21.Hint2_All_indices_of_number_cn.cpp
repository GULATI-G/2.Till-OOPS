#include<iostream>
using namespace std;

int search(int arr[],int size,int key, int out[])
{
    if(size==0){return 0;}
    int ans=search(arr,size-1,key,out);
    if(arr[size-1]==key)
    {
        out[ans]=size-1;
        return ans+1;
    }
    else {return ans;}
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
    int out[n];
    cout<<search(arr,n,key,out);
    return 0;
}