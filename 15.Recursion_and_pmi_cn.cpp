#include<iostream>
using namespace std;

int factorial_pmi(int n)
{
    if(n==1){return 1;}// base case 1
    int smalloutput= factorial_pmi(n-1);//we are assuming that we know code will run for n-1 i.e we know (n-1)!
    int output= n*smalloutput;// we now write final code i.e 3rd step we now write properly for n
    return output;
}

int main()
{
    // in this we are going to write the recursion code using PMI
    int n;
    cin>>n;
    cout<<factorial_pmi(n);
    return 0;
}