#include<iostream>
using namespace std;

int main()
{
    // Converting one type of data into another is called typecasting
    //we write int*p=&a; not pointer p=&a; because while dereferencing the pointer the pointerr 
    //will not know how to intrepret the bytes and how many bytes to read.

    int n=65;
    char c=n;
    cout<<c<<endl<<endl;
    int *p=&n;
    // char * pc= p;
    // float *pf= p;
    // we can't do above do steps as we have to explicitly typecast in this. 
    //  when we do int n=65; char c=n; this is implicit typecasting as the  computer
    // is aware what we want to do. but in this we have to separately mention that we are typecasting
    // so we do the following for explicitly typecasting

    char *pc=(char*)p;
    cout<<*(pc)<<endl;
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl<<endl;
    //here we expected that pc,pc+1,pc+2 bytes pe 00000000 hona chahiye tha aur pc+3 
    //pe 65 print hona chahiye tha. But due to little endian system the int is stored such that 65 
    //is at first byte. i.e. least significant byte is first and most significant byte is last
    // also most significant bit if 1 is stored in last byte as 10000000 not as 00000001.

    cout<<p<<endl;
    cout<<pc<<endl;
    // as character pointer doesn't print address but prints character string till null. since next byte 
    //is 00000000 hence in this case only A will be printed
    return 0;
}