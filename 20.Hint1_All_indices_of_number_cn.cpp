#include<iostream>
using namespace std;

int search(int arr[],int size, int key, int out[])
{
    if(size==0){return 0;}
    int ans=search(arr+1,size-1,key,out);
    if(arr[0]==key)
    {
        for(int i=ans;i>=0;i--)
        {
            out[i+1]=out[i];
        }
        out[0]=0;
        return ans+1;
    }
    for(int i=0;i<ans;i++)
    {
        out[i]++;
    }
    return ans;
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
    for(int i=0;i<n;i++){out[i]=-1;}
    cout<<search(arr,n,key,out);
    return 0;
}