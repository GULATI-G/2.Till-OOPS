#include<iostream>
#include<string>
#include<climits>
#include<cmath>
#include<math.h>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<unordered_map>
using namespace std;


void printKeypad(int num,string output="")
{
    if(num==1 || num==0)
    {
        cout<<output<<endl;
        return;
    }

    int count=0;
    int t=num;
    int first_int=0;
    while(t!=0)
    {
        count++;
        first_int=t%10;
        t/=10;
    }
    int rem_num=num - (first_int*pow(10,count-1));

    if(first_int==0 || first_int==1)
    {
        printKeypad(rem_num,output);
        return ;
    }
    else if(first_int==2)
    {
        printKeypad(rem_num,output+'a');
        printKeypad(rem_num,output+'b');
        printKeypad(rem_num,output+'c');
        return ;
    }
    else if(first_int==3)
    {
        printKeypad(rem_num,output+'d');
        printKeypad(rem_num,output+'e');
        printKeypad(rem_num,output+'f');
        return ;
    }
    else if(first_int==4)
    {
        printKeypad(rem_num,output+'g');
        printKeypad(rem_num,output+'h');
        printKeypad(rem_num,output+'i');
        return ;
    }
    else if(first_int==5)
    {
        printKeypad(rem_num,output+'j');
        printKeypad(rem_num,output+'k');
        printKeypad(rem_num,output+'l');
        return ;
    }
    else if(first_int==6)
    {
        printKeypad(rem_num,output+'m');
        printKeypad(rem_num,output+'n');
        printKeypad(rem_num,output+'o');
        return ;
    }
    else if(first_int==7)
    {
        printKeypad(rem_num,output+'p');
        printKeypad(rem_num,output+'q');
        printKeypad(rem_num,output+'r');
        printKeypad(rem_num,output+'s');
        return ;
    }
    else if(first_int==8)
    {
        printKeypad(rem_num,output+'t');
        printKeypad(rem_num,output+'u');
        printKeypad(rem_num,output+'v');
        return ;
    }
    printKeypad(rem_num,output+'w');
    printKeypad(rem_num,output+'x');
    printKeypad(rem_num,output+'y');
    printKeypad(rem_num,output+'z');
    return ;
}

int main()
{
    return 0;
}
