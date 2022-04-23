#include<iostream>
using namespace std;

int tripletSum(int arr[],int n,int num)
{
    int ans=0;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        int j=(i+1),k=(n-1);
        while(j<k)
        {
            if(  (arr[i]+arr[j]+arr[k]) == num)
                {ans++;
                j++;}
            else if(  (arr[i]+arr[j]+arr[k]) < num){j++;}
            else{k--;}
        }
    }
    return ans;
}

int main()
{
    int n=9;
    int arr[9]={2,-5,8,-6,0,5,10,11,-3};
    int num=10;
    cout<< tripletSum(arr,n,num);
    return 0;
}




// #include<iostream>
// using namespace std;

// void rotate(int input[],int d, int n)
// {
//     int arr[n];
//     for(int i=0;i<d;i++)
//     {
//         arr[i]=input[i];
//     }
//     for(int i=0;i<n-d;i++)
//     {
//         input[i]=input[i+d];
//     }
//     for(int i=(n-d);i<n;i++)
//     {
//         input[i]=arr[i-n+d];
//     }
// }

// int main()
// {
//     int arr[7]={1,2,3,4,5,6,7};
//     int n=7;
//     int d=2;
//     rotate(arr,d,n);
//     for(int i=0;i<n;i++)
//     {cout<<arr[i]<<endl;}
//     return 0;
// }







#include<iostream>
using namespace std;

int arrayCheckRotate(int input[], int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        if(input[i]>input[i+1])
        {
            ans=i+1;
            break;
        }
    }
    return ans;
}

int main()
{
    int arr[6]={5,6,1,2,3,4};
    int n=6;
    cout<<arrayCheckRotate(arr,n);
    return 0;
}