// #include<iostream>
// using namespace std;

// int length(char input[])
// {
//     if(input[0]=='\0'){return 0;}
//     int ans=length(input+1);
//     ans++;
//     return ans;
// }

// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     cout<<length(input);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void removex(char input[])
// {
//     if(strlen(input)==0){return;}
//     removex(input+1);
//     if(input[0]=='x')
//     {
//         for(int i=0;i<strlen(input);i++)
//         {
//             input[i]=input[i+1];
//         }
//         return;
//     }
//     return;
// }

// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     removex(input);
//     cout<<input;
//     return 0;
// }