//1.

// #include<iostream>
// using namespace std;

// void replacePi(char input[],int size=100)
// {
//     if(size==0){return;}
//     replacePi(input+1,size-1);
//     if(input[0]=='p' && input[1]=='i')
//     {
//         for(int i=size-1;i>=0;i--)
//         {
//             input[i+2]=input[i];
//         }
//         input[0]='3';
//         input[1]='.';
//         input[2]='1';
//         input[3]='4';
//         return;
//     }
//     return;
// }

// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     replacePi(input);
//     cout<<input<<endl;
//     return 0;
// }

//2.

// #include<iostream>
// #include<string>
// using namespace std;

// void removeX(char input[], int size=1000)
// {
//     if(size==0){return;}
//     removeX(input+1,size-1);
//     if(input[0]=='x')
//     {
//         for(int i=1;i<size;i++)
//         {
//             input[i-1]=input[i];
//         }
//         return;
//     }
//     return;
// }

// int main()
// {
//     char input[1000];
//     cin.getline(input,1000);
//     removeX(input);
//     cout<<input<<endl;
//     return 0;
// }

//3.
// #include<iostream>
// #include<string>
// #include<math.h>
// using namespace std;

// int stringToNumber(char input[])
// {
//     int i=0;
//     while(input[i]!='\0')
//         {i++;}
//     i--;
//     if(i==0){return int(input[0]-'0');}
//     int ans=stringToNumber(input+1);
//     return ans=(int(input[0])-'0')*pow(10,i)+ans;
// }
// int main()
// {
//     char input[50];
//     cin>>input;
//     cout<<stringToNumber(input)<<endl;
//     return 0;
// }

//4.

// #include<iostream>
// #include<string>
// #include<cstring>
// using namespace std;

// void pairStar(char input[])
// {
//     if(strlen(input)==0 || strlen(input)==1)
//     {return;}
//     pairStar(input+1);
//     if(input[0]==input[1])
//     {
//         for(int i=strlen(input);i>=1;i--)
//         {
//             input[i+1]=input[i];
//         }
//         input[1]='*';
//         return;
//     }
//     return;
// }

// int main()
// {
//     char input[100];
//     cin.getline(input,100);
//     pairStar(input);
//     cout<<input<<endl;
//     return 0;
// }

//5.Tower of Hanoi

// #include<iostream>
// using namespace std;

// void towerOfHanoi(int n,char source, char auxillary, char destination)
// {
//     if(n==1)
//     {cout<<source<<" "<<destination<<endl;
//     return;}
//     towerOfHanoi(n-1,source,destination,auxillary);
//     cout<<source<<" "<<destination<<endl;
//     towerOfHanoi(n-1,auxillary,source,destination);
//     return;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     towerOfHanoi(n,'a','b','c');
//     return 0;
// }