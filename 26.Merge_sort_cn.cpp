// #include<iostream>
// using namespace std;

// int main()
// {
//     //merge 2 sorted array into one array
//     int arr[5] = {1, 3, 4, 10, 35};
//     int ar[5] =  {2, 5, 7, 12, 25};
//     int a[10];
//     int i = 0, j = 0;
//     for (int p = 0; p <= 9; p++)
//     {
//         if(i==5)
//         {
//             a[p]=ar[j];
//             j++;
//         }
//         else if(j==5)
//         {
//             a[p]=arr[i];
//             i++;
//         }
//         else if (arr[i] >= ar[j])
//         {
//             a[p] = ar[j];
//             {j++;}
//         }
//         else
//         {
//             a[p] = arr[i];
//             {i++;}
//         }
//     }
//     for (int p = 0; p < 10; p++)
//     {
//         cout << a[p] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     //merge 2 sorted array into one array
//     int arr[5] = {1, 3, 4, 10, 35};
//     int ar[5] =  {2, 5, 7, 12, 25};
//     int a[10];
//     int i = 0, j = 0;
//     for (int p = 0; p <= 9; p++)
//     {
//         if(i==5)
//         {
//             a[p]=ar[j];
//             j++;
//         }
//         else if(j==5)
//         {
//             a[p]=arr[i];
//             i++;
//         }
//         else if (arr[i] >= ar[j])
//         {
//             a[p] = ar[j];
//             {j++;}
//         }
//         else
//         {
//             a[p] = arr[i];
//             {i++;}
//         }
//     }
//     for (int p = 0; p < 10; p++)
//     {
//         cout << a[p] << endl;
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

void MergeArray(int input[],int s, int e,int mid)
{
    int n1=s+mid;
    int n2=e+1-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {a[i]=input[i];}
    for(int i=0;i<n2;i++)
    {b[i]=input[mid+i];}
    int x=0,y=0,i=0;
    while(x<n1 && y<n2)
    {
        if(a[x]>b[y])
        {input[i]=b[y];
        y++;}
        else
        {input[i]=a[x];
        x++;}
        i++;
    }
    while(x<n1)
    {
        input[i]=a[x];
        i++;
        x++;
    }
    while(y<n2)
    {
        input[i]=b[y];
        y++;
        i++;
    }
    return;
}

void mergeSort(int input[],int size)
{
    if(size==0||size==1){return;}
    int mid=(size+1)/2;
    mergeSort(input,mid);
    mergeSort(input+mid,size/2);
    MergeArray(input,0,size-1,mid);
    return ;
}

int main()
{
    int input[10]={14,27,8,3,98,2,18,26,45,7};
    mergeSort(input,10);
    for(int i=0;i<10;i++)
    {cout<<input[i]<<endl;}
    return 0;
}