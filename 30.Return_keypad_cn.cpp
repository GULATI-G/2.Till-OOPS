#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int keypad(int num, string output[])
{
    if(num==1 || num==0)
    {
        output[0]="";
        return 1;
    }

    int temp=keypad(num/10,output);    
    int last_int=num%10;

    if(last_int==0 || last_int==1)
    {
        return temp;
    }
    else if(last_int==2)
    {
        
        for(int i=temp;i<temp*3;i++)
        {
            output[i]=output[i-temp];
        }
        for(int i=0;i<temp;i++)
        {
            output[i]+='a';
        }
        for(int i=temp;i<temp*2;i++)
        {
            output[i]+='b';
        }
        for(int i=temp*2;i<temp*3;i++)
        {
            output[i]+='c';
        }
        return temp*3;
    }
    else if(last_int==3)
    {
        for(int i=temp;i<temp*3;i++)
        {
            output[i]=output[i-temp];
        }
        for(int i=0;i<temp;i++)
        {
            output[i]+='d';
        }
        for(int i=temp;i<temp*2;i++)
        {
            output[i]+='e';
        }
        for(int i=temp*2;i<temp*3;i++)
        {
            output[i]+='f';
        }
        return temp*3;
    }
    else if(last_int==4)
    {
        for(int i=temp;i<temp*3;i++)
        {
            output[i]=output[i-temp];
        }
        for(int i=0;i<temp;i++)
        {
            output[i]+='g';
        }
        for(int i=temp;i<temp*2;i++)
        {
            output[i]+='h';
        }
        for(int i=temp*2;i<temp*3;i++)
        {
            output[i]+='i';
        }
        return temp*3;
    }
    else if(last_int==5)
    {
        for(int i=temp;i<temp*3;i++)
        {
            output[i]=output[i-temp];
        }
        for(int i=0;i<temp;i++)
        {
            output[i]+='j';
        }
        for(int i=temp;i<temp*2;i++)
        {
            output[i]+='k';
        }
        for(int i=temp*2;i<temp*3;i++)
        {
            output[i]+='l';
        }
        return temp*3;
    }
    else if(last_int==6)
    {
        for(int i=temp;i<temp*3;i++)
        {
            output[i]=output[i-temp];
        }
        for(int i=0;i<temp;i++)
        {
            output[i]+='m';
        }
        for(int i=temp;i<temp*2;i++)
        {
            output[i]+='n';
        }
        for(int i=temp*2;i<temp*3;i++)
        {
            output[i]+='o';
        }
        return temp*3;
    }
    else if(last_int==7)
    {
        for(int i=temp;i<temp*4;i++)
        {
            output[i]=output[i-temp];
        }
        for(int i=0;i<temp;i++)
        {
            output[i]+='p';
        }
        for(int i=temp;i<temp*2;i++)
        {
            output[i]+='q';
        }
        for(int i=temp*2;i<temp*3;i++)
        {
            output[i]+='r';
        }
        for(int i=temp*3;i<temp*4;i++)
        {
            output[i]+='s';
        }
        return temp*4;
    }
    else if(last_int==8)
    {
        for(int i=temp;i<temp*3;i++)
        {
            output[i]=output[i-temp];
        }
        for(int i=0;i<temp;i++)
        {
            output[i]+='t';
        }
        for(int i=temp;i<temp*2;i++)
        {
            output[i]+='u';
        }
        for(int i=temp*2;i<temp*3;i++)
        {
            output[i]+='v';
        }
        return temp*3;
    }

    for(int i=temp;i<temp*4;i++)
        {
            output[i]=output[i-temp];
        }
        for(int i=0;i<temp;i++)
        {
            output[i]+='w';
        }
        for(int i=temp;i<temp*2;i++)
        {
            output[i]+='x';
        }
        for(int i=temp*2;i<temp*3;i++)
        {
            output[i]+='y';
        }
        for(int i=temp*3;i<temp*4;i++)
        {
            output[i]+='z';
        }
    return temp*4;
}

int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int p=pow(3,2);
    string *output=new string[p];
    int ans=keypad(n,output);
    for(int i=0;i<ans;i++)
    {cout<<output[i]<<endl;}
    return 0;
}