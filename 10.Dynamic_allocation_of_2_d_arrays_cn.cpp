#include<iostream>
using namespace std;

int main()
{
    // int *p=new int[10][20];
    // above is not allowed
    // so what we basically do is we create first all the rows and then we create array for each row

    int r,c;
    cin>>r>>c;
    int** p=new int*[r];
    for(int i=0;i<r;i++)
    {   p[i]=new int[c];
        for(int j=0;j<c;j++)
        {
            cin>>p[i][j];
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<p[i][j];
        }
        cout<<endl;
    }

    // now we can even create a 2 d array of variable number of rows as well.
    // e.g 
    // *
    // **
    // ***
    // ****
    // *****

    //important always delete memory when you create something is heap memory

    for(int i=0;i<r;i++)
    { delete[] p[i]; }

    for(int i=0;i<r;i++)
    {delete[] p;}

    return 0;
}