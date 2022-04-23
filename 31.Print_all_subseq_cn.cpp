#include<iostream>
#include<string>
using namespace std;

void print_sub(string s,string output)
{
    if(s.empty())
    {
        cout<<output<<endl;
        return;
    }
    print_sub(s.substr(1),output);
    print_sub(s.substr(1),output+s[0]);
    return;
}

int main()
{
    string s;
    cin>>s;
    string output="";
    print_sub(s,output);
    return 0;
}