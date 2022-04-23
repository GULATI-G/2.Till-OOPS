#include<iostream>
using namespace std;

int search(int arr[], int size, int key)
{
    if(size==0){return -1;}
    if(arr[size-1]==key){return (size-1);}
    return search(arr,size-1,key);
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
    cout<<search(arr,n,key);
    return 0;
}
// or 
// int search(int arr[], int size, int key)
// {
//     if(size==0){return -1;}
//     int ans=search(arr+1,size-1,key);
//     if(ans==-1)
//     {
//         if(arr[0]==key){return 0;}
//         return -1;}
//     return ans+1;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {cin>>arr[i];}
//     int key;
//     cin>>key;
//     cout<<search(arr,n,key);
//     return 0;
// }