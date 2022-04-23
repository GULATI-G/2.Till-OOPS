#include<iostream>
using namespace std;

int subset(int input[], int length, int output[][20])
{
    // if(length==0)
    // {   output[0][0]=0;
    //     return 1;}
    if(length==1)
    {
        output[0][0]=0;
        output[1][0]=1;
        output[1][1]=input[0];
        return 2;}

    int ans=subset(input+1,length-1,output);
    int i;
    for(i=0;i<ans;i++)
    {
        output[ans+i][0]=output[i][0]+1;
        for(int j=1;j<=output[ans+i][0]-1;j++)
        {
            output[ans+i][j+1]=output[i][j];
        }       
        output[ans+i][1]=input[0];
    }
    return ans*2;
}

int main()
{
    int input[20],length,output[100][20];
    cout<<"enter length ";
    cin>>length;
    for(int i=0;i<length;i++)
    cin>>input[i];

    int size=subset(input,length,output);

    for(int i=0;i<size;i++)
    {
        for(int j=1;j<=output[i][0];j++)
        cout<<output[i][j];
        cout<<endl;
    }
    return 0;
}


