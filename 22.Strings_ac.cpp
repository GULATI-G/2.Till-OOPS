#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

int main()
{
    // //to take input a word
    // string s;
    // cin >> s;
    // cout << s<<endl;
    // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    // //to take input a sentence
    // string s0;
    // getline(cin,s0);
    // cout << s0<<endl;

    // //to print a character multiple times.
    // string s1(5, 'a');
    // cout << s1<<endl;

    // //to predefine it
    // string s2="gaurav is nice";
    // cout << s2<<endl<<endl;



    // string s3="fam";
    // string s4="ily";
    // string s5=s3+s4;
    // s3.append(s4);// or s3=s3+s4;
    // cout<<s3<<endl;
    // //or if u don't want to change s3 cout<<s3+s4;
    // cout<<s5<<endl;

    // //accessing the elements
    // cout<<s3[1]<<endl<<endl;

    // //clearing a string
    // cout<<s3<<endl;
    // s3.clear();
    // cout<<s3<<endl;

    // //now to compare strings
    // string s55="abc";
    // string s6="abcde";
    // cout<<s6.compare(s55)<<endl<<endl;
    // // basically what it does is as long as it finds each letter (traversing both strings) equal 
    // // it goes on when it finds a difference it reports the difference between ascii value of that characters.

    // // to check if the string is empty or not
    // string s7="abc";
    // s7.clear();
    // if(s7.empty())
    // {cout<<"the string is empty"<<endl<<endl;}

    // // to check is the string is not empty
    // string s8="abc";
    // if(!s8.empty())
    // {cout<<"the string is not empty"<<endl<<endl;}

    // // to erase elements from a string we don't need to pushback the characters following them
    // string s9="nincompoop";
    // s9.erase(3,3);
    // cout<<s9<<endl<<endl;
    // // in brackets first the index no. of the string and then the no. of elements you want to delete

    // // function to find whether a set of characters is present in the string or not 
    // string s10="nincompoop";
    // cout<<s10.find("com")<<endl<<endl; // this gives the first index of the set of char we re looking for
    // // if not present it gives very large random integers

    //to insert characters in between the string
    // string s11="abcde";
    // s11.insert(2,"lol");
    // cout<<s11<<endl<<endl;
    // first is where we want to insert it and then what we want to insert

    // // to find the length of the string
    // string s12="my name is gaurav";
    // cout<<s12.length()<<"\t"<<s12.size();

    // // to iterate over the loop;
    // string s13="gaurav is my name";
    // for(int i=0;i<s13.length();i++)
    // cout<<s13[i]<<endl;
    
    // int i=0;
    // while(s13[i]!='\0')
    // {
    //     cout<<s13[i]<<endl<<endl;
    //     i++;
    // }

    string s14="nincompoop";
    string s15=s14.substr(3,6);
    cout<<s15;

    // // to convert a string to a integer;

    // string s16="786";
    // int x=stoi(s16);// stoi=string to integer
    // cout<<x+2<<endl<<endl;

    // // to convert an int to a string
    // int y=376;
    // cout<<to_string(y)+"2"<<endl<<endl;


    // // to sort a string there is an inbuilt function sort from header file <algorithm>
    // string s18="vhgvrtsyjkbiuhf";
    // sort(s18.begin(),s18.end());// begin() returns the starting iterator of s18 and end() returns the next operator 
    // // after the string ends
    // cout<<s18<<endl<<endl;

    // // to convert character into string
    // char c='a';
    // string(1,c);
    
    return 0;
}