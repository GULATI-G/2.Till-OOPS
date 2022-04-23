#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n==1){return 1;} // base case solve
    if(n==0){return 0;} // base case solve 
    // in above two statements we are using extended verison of PMI thst is f(n) is true for all 0<=n<=k
    int ans=fibonacci(n-1)+fibonacci(n-2); // we assume we know fibonacci(n-1) and fibonacci (n-2) and write final statement
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<fibonacci(n);
    // while coding recursion problem first solve problem using PMI and then think of it if u want to.
    // first write code and don't think of who called who
    return 0;
}