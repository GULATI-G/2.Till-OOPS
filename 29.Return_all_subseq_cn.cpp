#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int subseq(string s,string output[])
{
    if(s.empty())
    {output[0]="";
    return 1;}
    int ans=2*(subseq(s.substr(1),output));
    {
        for(int i=0;i<(ans/2);i++)
        {output[i+(ans/2)]=s[0]+output[i];}
    }
    return ans;
    // or you may not multiply by 2 in row 11 and keep everywhere ans and return in end ans*2
}
int main()
{
    string s="abc";
    int no=pow(2,s.length());
    string *output=new string[no];
    int n=subseq(s,output);
    for(int i=0;i<n;i++)
    {cout<<output[i]<<endl;}
    return 0;
}