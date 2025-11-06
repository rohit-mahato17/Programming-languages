#include<iostream>
using namespace std;
int printrotate(int arr[],int size){
  int s=0;
  int e=size-1;

  while(s<e){
      
      swap(arr[s],arr[e]);
        s++;
        e--;
  }
       for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
       }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    printrotate(arr,size);
    return 0;
}
