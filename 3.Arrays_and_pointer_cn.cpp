#include<iostream>
using namespace std;

void fun_cout(int ar[],int size)
{
    cout<<sizeof(ar)<<endl;
}

int main()
{
    int arr[10];
    cout<<arr<<endl;//arr is basically pointer to arr[0]
    cout<<&arr[0]<<endl;
    cout<<&arr<<endl<<endl;

    //below is pointer to whole array. whereas arr is pointer to only arr[0]. thus when we do pa++ the 
    //pointer moves by 4*10 positions whereas if we do arr++ then pointer will shift only 4 positions
    int (*pa)[10]=&arr;
    pa++;
    cout<<pa;

    //arr is just a pointer to first element of array with minor changes. and arr++ means that 
    //pointer is shifted by 1 element.  
    arr[0]=2;
    arr[1]=3;
    cout<<endl<<endl<<*arr<<"\t"<<0[arr]<<endl;
    cout<<*(arr+1)<<"\t"<<1[arr]<<endl<<endl;

    //below code indicates that sizeof for array gives size of whole array in contrast to normal
    // pointer to a variable
    int a[]={87,90,38,20,74,35};
    cout<<sizeof(a)<<endl;
    int r=78;
    cout<<sizeof(&r)<<endl<<endl;
    
    // the difference between array a as a pointer and a normal pointer is due to that a is just a 
    // pointer to first element i.e. space has not been allocated to store the address of some 
    // in a. Whereas for a normal pointer space is allocated to store the address

    //this is to show that the array is being sent there as a pointer. therefore sizeof here gives
    //20 wheres in function gives 8
    int ar[]={1,4,7,5,3};
    cout<<sizeof(ar)<<endl;
    fun_cout(ar,5);

    // we can't do arr++; or arr=arr+5; for any array. 
    //This is because array can't be reassigned

    return 0;
}