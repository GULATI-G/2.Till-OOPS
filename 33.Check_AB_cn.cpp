#include<iostream>
using namespace std;

bool check(char input[])
{
    if(strlen(input)==0){return true;}
    if(input[0]=='a')
    {
        if(strlen(input)==1){return check(input+1);}
        if(input[1]=='a'){return check(input+1);}
        if(input[1]=='b' && input[2]=='b'){return check(input+1);}
    }
    if(input[0]=='b')
    {
        if(input[1]!='b'){return false;}
        if(input[2]=='b'){return false;}
        if(input[1]=='b'){return check(input+2);}
    }
}


bool checkAB(char input[])
{
    if(input[0]=='a'){return check(input+1);}
    if(input[0]=='b'){return false;}
}

int main()
{
    char input[100];
    cin>>input;
    cout<<checkAB(input);

    return 0;
}