#include<iostream>
using namespace std;

int binarySearch(int input[],int size, int element)
{
    if(size<=0){return -1;}
    int mid=(size/2)-1;
    if((size%2)!=0){mid=size/2;}

    if(element==input[mid]){return mid;}
    else if(element<input[mid])
    {
        if((size%2)!=0)
        {return binarySearch(input,size/2,element);}
        else {return binarySearch(input,(size/2)-1,element);}
    }
    else
    {return binarySearch(input+mid+1,size/2,element)+mid+1;}
}

int main()
{
    int n;
    cout<<"enter n ";
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {   cout<<"enter element for index "<<i<<" ";
        cin>>input[i];}
    int element;
    cout<<"enter element";
    cin>>element;
    int ans=binarySearch(input,n,element);
    cout<<ans;
    return 0;
}