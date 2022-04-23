#include<iostream>
using namespace std;

inline int maximum(int a,int b)
{
    int c;
    return c = a > b ? a : b;
}

int sum(int arr[], int size, int start_index=0)
{
    int ans=0;
    for(int i=start_index;i<size;i++)
    {   ans+=arr[i];}
    return ans;
}

int sum2(int a,int b,int c=0,int d=0)
{   return(a+b+c+d);}
int main()
{
    // to find max of 2 numbers, there are 5 ways
    // 1.if else -> long
    // 2.tertiary operator -> we have to interpret every time
    // 3.use max(a,b) ->but such kind is not available for every operation
    // 4.Function -> everytime we will have to copy variables, pause main code etc.
    // 5.make function inline

    int a=9,b=8;
    cout<<maximum(a,b)<<endl;
    
    // then why shouldn't we make every function inline?
    // 1. this will make output file bulky as we will be copying the code everytime we call the function
    // 2. compiler won't make the function inline for us. if 1 line of code then compiler will make it inline.
    //  2-3 lines of code it will depend on compiler. >=4 lines of code means compiler won't compile it

    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<sum(arr,10);

    // for default arguement we can give default starting from right only not in between as it will be confuing
    // try with (int a,int b=0, int c, int d)

    cout<<sum2(23,45,78);
    return 0;
}