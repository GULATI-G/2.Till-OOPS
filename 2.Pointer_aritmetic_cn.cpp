#include<iostream>
using namespace std;

int main()
{
    int a=10;double z=8.9;
    int *p=&a;double *pz = &z;
    cout<<p<<endl;
    p++;
    cout<<p<<endl<<endl;//this shows by adding 1 pointer shifts by 4 places

    cout<<pz<<endl;
    pz++;
    cout<<pz<<endl<<endl;//this shows by adding 1 pointer shifts by 8 places

    int *q=p;
    q++;
    //below code shows we can compare pointers
    if(q>p)
    {cout<<"q is big"<<"\n\n";}
    else{cout<<"q is small"<<"\n\n";}
    //p++; or other addition and subraction code is useful only in arrays 
    //where the memory is alloted side by side

    int arr[]={1,2,3,4};
    int *parr=&arr[0];
    cout<<parr<<"\t"<<*(parr)<<endl;
    cout<<parr+1<<"\t"<<*(parr+1)<<endl;
    cout<<parr+3<<"\t"<<*(parr+3)<<endl<<endl;

    //below code shows that the size of each pointer is same as 
    //it is ultimately storing address and generally it is 8 bytes
    int e=10;int *pe=&e;
    char b='f';char *pb=&b;
    double c=10.2;double *pc=&c;
    float d=11.4;float *pd=&d;
    cout<<sizeof(&e)<<"\t"<<sizeof(pe)<<endl;
    cout<<sizeof(&b)<<"\t"<<sizeof(pb)<<endl;
    cout<<sizeof(&c)<<"\t"<<sizeof(pc)<<endl;
    cout<<sizeof(&d)<<"\t"<<sizeof(pd)<<endl<<endl;




    return 0;
}