#include<iostream>
using namespace std;
int print(int arr[],int size,int index){
    if(index>=size){
        return 0;
    }
    if(arr[index]%2==1){
        cout<<arr[index]<<" ";
    }
   print(arr,size,index+1);
}
int main(){
    int arr[]={10,11,12,13,14,15};
    int size=6;
    int index=0;
    print(arr,size,index);
}