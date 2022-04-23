#include<iostream>
using namespace std;

void quickSort(int input[], int size) 
{
    if(size<=1){return;}
    int first_element=input[0];
    int index=0;
    for(int i=1;i<size;i++)
    {
        if(first_element>input[i])
        {index++;}
    }
    input[0]=input[index];
    input[index]=first_element;


    int j=index+1;
    int i=0;
    while(i<index && j<size)
    {
        if(input[i]>=first_element && input[j]<first_element)
        {
            int temp=input[i];
            input[i]=input[j];
            input[j]=temp;
            i++;
            j++;
        }
        else if(input[i]<first_element)
        {
            i++;
        }
        else if(input[j]>=first_element)
        {
            j++;
        } 
    }
    quickSort(input,index);
    quickSort(input+index+1,size-index-1);
    return;
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    quickSort(arr,n);
    for(int i=0;i<n;i++)
    {cout<<arr[i]<<endl;}
    return 0;
}

// for(int i=0;i<ans;i++)
    // {
    //     if(input[i]>input[ans])
    //     {
    //         int j=ans+1;
    //         for(j=ans+1;j<size;j++)
    //         {if(input[j]<input[ans]){break;}}
    //         int temp1=input[i];
    //         input[i]=input[j];
    //         input[j]=temp1;
    //     }
    // }

    // or better






//     int partition(int input[],int st,int ed){
//       int ans=0;
//       for(int i=st+1;i<=ed;i++){
//           if(input[i]<=input[st]){
//               ans++;
//           }
//       }
//       int val=st+ans;
//       int temp=input[st];
//       input[st]=input[val];
//       input[val]=temp;
//       int i=st;
//       int j=ed;
//       while(i<val && j>val){
//           if(input[i]<=input[val]){
//               i++;
//           }else if(input[j]>input[val]){
//               j--;
//           }else{
//               int temp=input[i];
//               input[i]=input[j];
//               input[j]=temp;
//               i++;
//               j--;
//           }
//       }
      
//       return val;
//   }


// void sort(int input[],int st, int ed){
//      if(st>=ed){
//          return;
//      }
     
//      int c=partition(input,st,ed);
//      sort(input,st,c-1);
//      sort(input,c+1,ed);
//  }





// void quickSort(int input[], int size) {
 
//     sort(input,0,size-1);
// }