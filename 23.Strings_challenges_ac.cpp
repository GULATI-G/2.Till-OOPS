//All smallcase or all uppercase



//Mycode 


// #include<iostream>
// #include<string>
// using namespace std;

// string all_small(string s)
// {
//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i]<=90 && s[i]>=65)
//         {
//             char c=s[i]+32;
//             s.erase(i,1);
//             s.insert(i,string(1,c));
//         }
//     }
//     return s;
// }

// string all_big(string s)
// {
//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i]<=122 && s[i]>=97)
//         {
//             char c=s[i]-32;
//             s.erase(i,1);
//             s.insert(i,string(1,c));
//         }
//     }
//     return s;
// }

// int main()
// {
//     string s="BaInskYNBKsd";
//     cout<<all_small(s)<<endl;
//     cout<<all_big(s)<<endl;
//     return 0;
// }

//Official Code
// #include<iostream>
// #include<string>
// using namespace std;

// string all_small(string s)
// {
//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i]<='Z' && s[i]>='A')
//         {s[i]-=32;}
//     }
//     return s;
// }

// string all_big(string s)
// {
//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i]<='z' && s[i]>='a')
//         {s[i]+=32;}
//     }
//     return s;
// }

// int main()
// {
//     string s="BaInskYNBKsd";
//     cout<<all_small(s)<<endl;
//     cout<<all_big(s)<<endl;
//     return 0;
// }





// or there is a function to do this

// #include<iostream>
// #include<string>
// using namespace std;

// int main()

// {
//     string s="ibdushbdshfjsd";
//     transform(s.begin(),s.end(),s.begin(),::toupper);
//     // first to show starting parameter second to show ending parameter third to show from where to start
//     // lowercasing or uppercasing and fourth to tell whether lower case or upper case
//     cout<<s<<endl;
//     transform(s.begin(),s.end(),s.begin(),::tolower);
//     cout<<s<<endl;
//     return 0;
// }














// max no. from integer string 

//my code


// #include<iostream>
// #include<string>
// using namespace std;

// int main()
// {
//     string s="37598";
//     int ans=0;
//     while(!s.empty())
//     {
//         int maxn=0;
//         int index=0;
//         int temp=0;
//         for(int i=0;i<s.length()-temp;i++)
//         {
//             if(maxn<((s[i])-'0'))
//             { maxn=((s[i])-'0');
//             index=i;}
//         }
//         ans=ans*10+maxn;
//         s.erase(index,1);
//         temp++;
//     }
//     cout<<ans;
//     return 0;
// }







//official code

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     string s="3693046";
//     sort(s.begin(),s.end(),greater<int>());
//     cout<<s<<endl;
//     // or
//     int n=stoi(s);
//     cout<<n;
//     return 0;
// }








//frequency of max occuring char in string

// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     string s="aamdoosmfidsolerom";
//     int arr[26];
//     for(int i=0;i<26;i++)
//     {arr[i]=0;}
//     for(int i=0;i<s.length();i++)
//     {arr[int(s[i]-'a')]++;}
//     int maxn=0;
//     char c='a';
//     for (int i = 0; i < 26; i++)
//     {   if(maxn<arr[i])
//         {   maxn=max(maxn,arr[i]);
//             c='a'+i;
//         }
//     }
//     cout<<maxn<<"\t"<<c;
//     return 0;
// }










