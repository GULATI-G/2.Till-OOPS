#include<iostream>
using namespace std;

int ifsorted(int arr[], int size)
{
    if(size==0||size==1)
    {return true;}
    if(arr[0]>arr[1])
    {return false;}
    bool smallsort=ifsorted(arr+1,size-1);
    return smallsort;
    // or u can write 
    // if(size==0||size==1)
    // {return true;}
    // bool smallsort=ifsorted(arr+1,size-1);
    // if(smallsort==false)
    // {return false;}
    // if(arr[0]>arr[1]){return false;}
    // else{return true;}

}

int main()
{
    int arr[]={1,4,6,7,9};
    cout<<ifsorted(arr,5);
    return 0;
}