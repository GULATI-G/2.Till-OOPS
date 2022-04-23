#include<iostream>
using namespace std;

int Staircase(int n)
{
    if(n==1){return 1;}
    if(n==3){return 4;}
    if(n==2){return 2;}

    int ans=Staircase(n-1)+Staircase(n-2)+Staircase(n-3);
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int ans=Staircase(n);
    cout<<ans;
    return 0;
}