#include<iostream>
using namespace std;
int arraysum(int arr[],int size){
  if(size==0){
    // if(arr[size]==10){
    //   cout<<arr[size]<<endl;
    // }
    return 0;
  }
 // cout<<arr[size]<<" ";
  int max=arr[size-1] + arraysum(arr,size-1);
     return max;
} 

int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size=8;
   // int size=sizeof(arr)/sizeof(arr[0]);
    int sum=arraysum(arr,size);
    //  for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    //  }
    cout<<endl<<"final value is: "<<sum;
}
